/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

using Meta.XR.Acoustics;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Profiling;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;
using Debug = UnityEngine.Debug; // Resolve ambiguous reference with System.Diagnostics.Debug
using Native = MetaXRAcousticNativeInterface;

internal class MetaXRAcousticMap : MonoBehaviour
{
    internal const string FILE_EXTENSION = "xramap";

    //***********************************************************************
    // Main Fields
    [SerializeField]
    internal MetaXRAcousticSceneGroup SceneGroup;

    [SerializeField]
    internal bool customPointsEnabled = false;

    [NonSerialized]
    internal bool IsLoaded = false;

    /// The flags for how the Acoustic Map is computed.
    [SerializeField]
    internal AcousticMapFlags Flags = AcousticMapFlags.NO_FLOATING | AcousticMapFlags.DIFFRACTION;

    internal bool StaticOnly
    {
        get => (Flags & AcousticMapFlags.STATIC_ONLY) != 0;
        set
        {
            if (value)
                Flags |= AcousticMapFlags.STATIC_ONLY;
            else
                Flags &= ~AcousticMapFlags.STATIC_ONLY;
        }
    }

    internal bool NoFloating
    {
        get => (Flags & AcousticMapFlags.NO_FLOATING) != 0;
        set
        {
            if (value)
                Flags |= AcousticMapFlags.NO_FLOATING;
            else
                Flags &= ~AcousticMapFlags.NO_FLOATING;
        }
    }

    internal bool Diffraction
    {
        get => (Flags & AcousticMapFlags.DIFFRACTION) != 0;
        set
        {
            if (value)
                Flags |= AcousticMapFlags.DIFFRACTION;
            else
                Flags &= ~AcousticMapFlags.DIFFRACTION;
        }
    }
    
    internal const float DISTANCE_PARAMETER_MAX = 10000.0f;

    /// The preprocessing parameters.
    [SerializeField]
    internal uint ReflectionCount = 6;
    [SerializeField, Range(0.0f, DISTANCE_PARAMETER_MAX)]
    internal float MinSpacing = 1.0f;
    [SerializeField, Range(0.0f, DISTANCE_PARAMETER_MAX)]
    internal float MaxSpacing = 10.0f;
    [SerializeField, Range(0.0f, DISTANCE_PARAMETER_MAX)]
    internal float HeadHeight = 1.5f;
    [SerializeField, Range(0.0f, DISTANCE_PARAMETER_MAX)]
    internal float MaxHeight = 3.0f;

    [SerializeField]
    private Vector3 gravityVector = new Vector3(0.0f, -1.0f, 0.0f);
    internal Vector3 GravityVector
    {
        get => gravityVector;
        set => gravityVector = value.normalized;
    }

    /// The file path where the IR is written.
    /**
      * This path should be relative to the Application.dataPath directory.
      */
    [FormerlySerializedAs("relativeFilePath_")]
    [SerializeField]
    private string relativeFilePath = "";

    //-------
    // PRIVATE
    [NonSerialized]
    internal IntPtr mapHandle = IntPtr.Zero;

#if UNITY_EDITOR
    internal string RelativeFilePath => string.IsNullOrEmpty(relativeFilePath) ? GenerateSuggestedPath() : relativeFilePath;
#else
    internal string RelativeFilePath => relativeFilePath;
#endif

    internal string AbsoluteFilePath
    {
        get => Path.GetFullPath(Path.Combine(Application.dataPath, RelativeFilePath));
        set
        {
            string sanitizedPath = value.Replace('\\', '/');
            // Make the path relative to the Assets directory.
            if (sanitizedPath.StartsWith(Application.dataPath))
            {
                relativeFilePath = sanitizedPath.Substring(Application.dataPath.Length + 1);

                if (System.IO.File.Exists(AbsoluteFilePath))
                {
                    // load the file
                    DestroyInternal();
                    StartInternal();
                }
            }
            else
            {
                Debug.LogError($"invalid path {value}, outside application path {Application.dataPath}");
            }
        }
    }

    internal const int Success = 0;

    //***********************************************************************
    // Compute Fields

#if UNITY_EDITOR
    internal void FixPathCaseMismatch()
    {
        string caseSensitivePath = MetaXRAudioUtils.GetCaseSensitivePathForFile(AbsoluteFilePath);
        if (AbsoluteFilePath != caseSensitivePath)
        {
            int trim = Application.dataPath.Length + 1;
            Debug.LogWarning($"File path case mismatch detected!\n old: {AbsoluteFilePath.Substring(trim)}\n new: {caseSensitivePath.Substring(trim)}");
            AbsoluteFilePath = caseSensitivePath.Replace('\\', '/');
        }
    }

    private void OnValidate()
    {
        if (cachedPointsDirty && isActiveAndEnabled && !Application.isPlaying && !UnityEditor.BuildPipeline.isBuildingPlayer)
        {
            UpdateCachedPoints();
        }

        FixPathCaseMismatch();
    }

    /// Whether or not the IR is currently being computed.
    [NonSerialized]
    private bool computing = false;
    internal bool Computing => computing;

    /// Whether or not the current computation should be canceled.
    [NonSerialized]
    private bool computeCanceled = false;
    internal bool ComputeCanceled => computeCanceled;

    /// Whether or not the current computation is finished.
    [NonSerialized]
    private bool computeFinished = false;
    internal bool ComputeFinished => computeFinished;

    /// Whether or not the current computation is finished.
    [NonSerialized]
    private bool computeSucceeded = false;
    internal bool ComputeSucceeded => computeSucceeded;

    /// A short textual description of the current task for the precomputation.
    [NonSerialized]
    private string computeDescription = null;
    internal string ComputeDescription => computeDescription;

    /// The fraction of the computation that is finished, in the range [0,1].
    [NonSerialized]
    private float computeProgress = 0.0f;
    internal float ComputeProgress => computeProgress;

    /// The time in seconds that the compute has been running.
    [NonSerialized]
    private double computeTime = 0.0f;
    internal double ComputeTime => computeTime;

    /// The starting time in seconds of the current stage.
    [NonSerialized]
    private double StageStartingTime = 0.0f;

    /// The current async compute job, if not null
    [NonSerialized]
    private ComputeJob job = null;

    /// The current async compute thread, if not null
    [NonSerialized]
    private Thread computeThread = null;

    /// A timer used to estimate the compute time remaining.
    [NonSerialized]
    private Stopwatch stopwatch = null;

    [SerializeField]
    private Hash128 hash;
    [NonSerialized]
    private Hash128 newHash = default;

    string GenerateSuggestedPath()
    {
        return GenerateSuggestedPathForScene(transform.root.gameObject.scene);
    }

    internal static string GenerateSuggestedPathForScene(Scene scene)
    {
        return $"{MetaXRAcousticSettings.AcousticFileRootDir}/{scene.name}.{FILE_EXTENSION}";
    }

    internal struct TempSceneLoad
    {
        internal Scene scene;
        internal enum Mode
        {
            None,
            Open,
            LoadOnly
        }

        internal Mode mode;
    }

    internal static void TemporaryLoadScenes(string[] sceneGuids, out List<TempSceneLoad> tempSceneLoad)
    {
        tempSceneLoad = new List<TempSceneLoad>();

        foreach (string guid in sceneGuids)
        {
            if (!UnityEditor.GUID.TryParse(guid, out UnityEditor.GUID tempGuid) || tempGuid.Empty())
            {
                // empty GUID
                continue;
            }

            string path = UnityEditor.AssetDatabase.GUIDToAssetPath(guid);
            if (string.IsNullOrEmpty(path))
            {
                Debug.LogError($"Scene not found for GUID: {guid}");
                continue;
            }

            var pkgInfo = UnityEditor.PackageManager.PackageInfo.FindForAssetPath(path);
            if (pkgInfo != null)
            {
                bool openable = (pkgInfo.source == UnityEditor.PackageManager.PackageSource.Local || pkgInfo.source == UnityEditor.PackageManager.PackageSource.Embedded);
                if (!openable)
                    continue;
            }

            foreach (TempSceneLoad temp in tempSceneLoad)
            {
                if (path.Equals(temp.scene.path))
                {
                    Debug.LogWarning($"Duplicate scene detected in Scene Group: {path}");
                    continue;
                }
            }

            TempSceneLoad sceneLoad;
            sceneLoad.scene = UnityEditor.SceneManagement.EditorSceneManager.GetSceneByPath(path);

            if (sceneLoad.scene.isLoaded)
            {
                sceneLoad.mode = TempSceneLoad.Mode.None;

#if META_XR_ACOUSTIC_INFO
                Debug.Log($"Scene already open and loaded: {path} [{asset}] {sceneLoad.mode}");
#endif
            }
            else if (sceneLoad.scene.IsValid())
            {
                sceneLoad.mode = TempSceneLoad.Mode.LoadOnly;
                Debug.Log($"Loading scene: {path} [{guid}] {sceneLoad.mode}");
                sceneLoad.scene = UnityEditor.SceneManagement.EditorSceneManager.OpenScene(path, UnityEditor.SceneManagement.OpenSceneMode.Additive);
            }
            else
            {
                sceneLoad.mode = TempSceneLoad.Mode.Open;
                Debug.Log($"Opening scene: {path} [{guid}] {sceneLoad.mode}");
                sceneLoad.scene = UnityEditor.SceneManagement.EditorSceneManager.OpenScene(path, UnityEditor.SceneManagement.OpenSceneMode.Additive);
            }

            tempSceneLoad.Add(sceneLoad);
        }
    }
    internal static void UnloadTemporaryScenes(List<TempSceneLoad> tempSceneLoad)
    {
        foreach (TempSceneLoad sceneLoad in tempSceneLoad)
        {
            if (sceneLoad.mode == TempSceneLoad.Mode.LoadOnly)
            {
                Debug.Log($"Unloading scene: {sceneLoad.scene.path}");
                UnityEditor.SceneManagement.EditorSceneManager.CloseScene(sceneLoad.scene, false);
            }
            else if (sceneLoad.mode == TempSceneLoad.Mode.Open)
            {
                Debug.Log($"Closing scene: {sceneLoad.scene.path}");
                UnityEditor.SceneManagement.EditorSceneManager.CloseScene(sceneLoad.scene, true);
            }
        }
    }

    internal void GatherGeometriesAndMaterials(out List<TempSceneLoad> tempSceneLoads, out MetaXRAcousticGeometry[] geometries, out MetaXRAcousticMaterial[] materials)
    {
        List<MetaXRAcousticGeometry> geometryList = new List<MetaXRAcousticGeometry>();
        List<MetaXRAcousticMaterial> materialList = new List<MetaXRAcousticMaterial>();

        if (SceneGroup != null)
        {
            Debug.Log($"Scene Group detected with {SceneGroup.sceneGuids.Length} scenes");

            TemporaryLoadScenes(SceneGroup.sceneGuids, out tempSceneLoads);
            foreach (TempSceneLoad tempLoad in tempSceneLoads)
            {
                GatherGeometriesAndMaterialsForScene(tempLoad.scene, geometryList, materialList);
            }
        }
        else
        {
            Debug.Log($"No Scene Group detected using parent scene {gameObject.scene}");

            tempSceneLoads = new List<TempSceneLoad>();
            GatherGeometriesAndMaterialsForScene(gameObject.scene, geometryList, materialList);
        }

        geometries = geometryList.ToArray();
        materials = materialList.ToArray();
    }

    private static void GatherGeometriesAndMaterialsForScene(Scene scene, List<MetaXRAcousticGeometry> geometryList, List<MetaXRAcousticMaterial> materialList)
    {
        if (!scene.IsValid())
        {
            Debug.LogError("Invalid scene!!");
            return;
        }
        GameObject[] roots = scene.GetRootGameObjects();
        foreach (GameObject go in roots)
        {
            geometryList.AddRange(go.GetComponentsInChildren<MetaXRAcousticGeometry>());
            materialList.AddRange(go.GetComponentsInChildren<MetaXRAcousticMaterial>());
        }
    }

    internal bool IsDirty()
    {
        if (!System.IO.File.Exists(AbsoluteFilePath))
        {
#if META_XR_ACOUSTIC_INFO
            Debug.Log($"File not found {RelativeFilePath}");
#endif
            return true;
        }

        DateTime timeStamp = System.IO.File.GetLastWriteTime(AbsoluteFilePath);
        Hash128 tempHash = new Hash128();

        MetaXRAcousticGeometry[] geometries;
        MetaXRAcousticMaterial[] materials;
        List<TempSceneLoad> tempSceneLoad;
        GatherGeometriesAndMaterials(out tempSceneLoad, out geometries, out materials);

        foreach (MetaXRAcousticGeometry geo in geometries)
        {
            if (geo.IsOlder(timeStamp))
            {
#if META_XR_ACOUSTIC_INFO
                Debug.Log($"Geometry older {geo.gameObject.name}");
#endif
                return true;
            }

            geo.AppendHash(ref tempHash);
        }

        foreach (MetaXRAcousticMaterial mat in materials)
        {
            mat.AppendHash(ref tempHash);
        }

        UnloadTemporaryScenes(tempSceneLoad);

        if (tempHash.CompareTo(hash) != 0)
        {
#if META_XR_ACOUSTIC_INFO
            Debug.Log($"Hash mismatch: current={hash.ToString()}, new={tempHash.ToString()}");
#endif
            return true;
        }

        return false;
    }

    internal void UpdateHash()
    {
#if META_XR_ACOUSTIC_INFO
        Debug.Log($"Updated hash:{newHash.ToString()}");
#endif
        hash = newHash;
    }
#endif

    //***********************************************************************
    // Start / Destroy

    /// Initialize the audio Acoustic Map. This is called after Awake() and before the first Update().
    void Start()
    {
        StartInternal();
    }

    internal void StartInternal(bool autoLoad = true)
    {
        // Ensure that the IR is not initialized twice.
        if (mapHandle != IntPtr.Zero)
        {
#if META_XR_ACOUSTIC_INFO
            Debug.Log("Already initialized, skipping init");
#endif
            return;
        }

        // Create the internal Acoustic Map.
        if (Native.Interface.CreateAudioSceneIR(out mapHandle) != Success)
        {
            Debug.LogError("Unable to create internal Acoustic Map", gameObject);
            return;
        }

        // Load the serialized Acoustic Map.
        if (Application.isPlaying)
        {
            if (!string.IsNullOrEmpty(relativeFilePath))
            {
                string filePath = relativeFilePath;

                if (relativeFilePath.StartsWith("StreamingAssets"))
                {
                    string streamingAssetsRelativePath = filePath.Substring("StreamingAssets/".Length);
                    StartCoroutine(LoadMapAsync(streamingAssetsRelativePath));
                }
            }
        }
        else if (autoLoad)
        {
            bool expectSuccess = !string.IsNullOrEmpty(relativeFilePath) && !string.IsNullOrEmpty(name) && System.IO.File.Exists(AbsoluteFilePath);
            if (expectSuccess)
            {
                // Do a blocking load from file when not playing so inspector can update immediately
                Debug.Log($"Loading Acoustic Map {name} from File {AbsoluteFilePath}");
            }
            int result = Native.Interface.AudioSceneIRReadFile(mapHandle, AbsoluteFilePath);
            if (result != Success)
            {
                if (expectSuccess)
                    Debug.LogError($"Error {result}: Unable to load the Acoustic Map from file: {AbsoluteFilePath}");
                return;
            }

            if (!expectSuccess)
            {
                Debug.Log($"Found data in default location: {RelativeFilePath}");
                relativeFilePath = RelativeFilePath;
            }
        }

        ApplyTransform();
    }


    IEnumerator LoadMapAsync(string streamingAssetsSubPath)
    {
        string path = Application.streamingAssetsPath + "/" + streamingAssetsSubPath;
#if UNITY_STANDALONE_OSX || UNITY_EDITOR_OSX
        path = "file://" + path;
#endif
        Debug.Log($"Loading Acoustic Map {name} from StreamingAssets {path}");

        float startTime = Time.realtimeSinceStartup;

        Profiler.BeginSample("MetaXRAcousticMap web request get");
        var unityWebRequest = UnityEngine.Networking.UnityWebRequest.Get(path);
        Profiler.EndSample();

        yield return unityWebRequest.SendWebRequest();
        if (!string.IsNullOrEmpty(unityWebRequest.error))
        {
            Debug.LogError($"web request: done={unityWebRequest.isDone}: {unityWebRequest.error}", gameObject);
        }

        float readTime = Time.realtimeSinceStartup;
        float readDuration = readTime - startTime;
        Debug.Log($"Acoustic Map {name}, read time = {readDuration}", gameObject);

        LoadMapFromMemory(unityWebRequest.downloadHandler.nativeData);
    }

    async void LoadMapFromMemory(Unity.Collections.NativeArray<byte>.ReadOnly data)
    {
        if (data.Length == 0)
            return;

        float startTime = Time.realtimeSinceStartup;

        int result = -1;
        await Task.Run(() =>
        {
            unsafe
            {
                IntPtr ptr = (IntPtr)Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr(data);
                result = Native.Interface.AudioSceneIRReadMemory(mapHandle, ptr, (UInt64)data.Length);
            }
        });

        if (result == Success)
        {
            float loadDuration = Time.realtimeSinceStartup - startTime;
            Debug.Log($"Sucessfully loaded Acoustic Map {name}, load time = {loadDuration}", gameObject);

            // Delay enabling map until any geometry is loaded
            Action delayedEnable = null;
            delayedEnable = () => {
                MetaXRAcousticGeometry.OnAnyGeometryEnabled -= delayedEnable;
                Debug.Log("Delayed enable");
                Native.Interface.AudioSceneIRSetEnabled(mapHandle, isActiveAndEnabled);
            };

            if (MetaXRAcousticGeometry.EnabledGeometryCount > 0)
                Native.Interface.AudioSceneIRSetEnabled(mapHandle, isActiveAndEnabled);
            else
                MetaXRAcousticGeometry.OnAnyGeometryEnabled += delayedEnable;

            IsLoaded = true;
        }
        else
        {
            Debug.LogError($"Error {result}: Unable to read the Acoustic Map.");
        }
    }


    /// Destroy the audio Acoustic Map. This is called when the component is deleted.
    void OnDestroy()
    {
        DestroyInternal();
    }

    internal void DestroyInternal()
    {
#if UNITY_EDITOR
        // Make sure to stop any compute jobs
        if (Computing)
        {
            CancelCompute();
            FinishCompute();
        }
#endif

        if (mapHandle != IntPtr.Zero)
        {
            // Destroy the Acoustic Map.
            if (Native.Interface.DestroyAudioSceneIR(mapHandle) != Success)
            {
                Debug.LogError("Unable to destroy Acoustic Map", gameObject);
            }
            mapHandle = IntPtr.Zero;
        }
    }

    //***********************************************************************

    /// Called when enabled.
    void OnEnable()
    {
        if (mapHandle == IntPtr.Zero)
            return;

        Debug.Log($"Enabling AcousticMap: {RelativeFilePath}");
        Native.Interface.AudioSceneIRSetEnabled(mapHandle, true);
    }

    /// Called when disabled.
    void OnDisable()
    {
        if (mapHandle == IntPtr.Zero)
            return;

        Debug.Log($"Disabling AcousticMap: {RelativeFilePath}");
        Native.Interface.AudioSceneIRSetEnabled(mapHandle, false);
    }

    //***********************************************************************
    // Updates

    void LateUpdate()
    {
        if (mapHandle == IntPtr.Zero)
            return;

        if (transform.hasChanged)
        {
            ApplyTransform();

            // Reset dirty bit.
            transform.hasChanged = false;
        }
    }

    private void ApplyTransform()
    {
#if UNITY_EDITOR
        // Warn user in editor if the transform has any scaling (not allowed).
        Vector3 s = transform.lossyScale;
        float epsilon = 0.000001f;
        if (Mathf.Abs(Mathf.Abs(s.x) - 1.0f) > epsilon ||
             Mathf.Abs(Mathf.Abs(s.y) - 1.0f) > epsilon ||
             Mathf.Abs(Mathf.Abs(s.z) - 1.0f) > epsilon)
        {
            Debug.LogError("Acoustic Map object transform cannot have any scaling. This may result in incorrect audio.\nCurrent scale = " + s);
        }
#endif

        Native.Interface.AudioSceneIRSetTransform(mapHandle, transform.localToWorldMatrix);
    }

    //***********************************************************************
    // Precomputation

#if UNITY_EDITOR
    // called only in editor mode when component if first created
    private void Reset()
    {
        StartInternal();
    }

    /// Start the computation on a background thread.
    /**
      * This should only be called by the custom editor.
      */
    internal bool Compute(bool mapOnly)
    {
        Debug.Log($"Precomputing Acoustic Map");

        // Don't allow computing more than once at a time
        if (Computing)
        {
            Debug.LogError("Cannot compute: compute in progress", gameObject);
            return false;
        }

        if (Application.isPlaying)
        {
            Debug.LogError("Cannot compute: application is playing", gameObject);
            return false;
        }

        // Make sure we are initialized.
        StartInternal(false);
        ApplyTransform();

        string absPath = AbsoluteFilePath;

        // Create the directory
        int directoriesEnd = absPath.LastIndexOf('/');
        if (directoriesEnd >= 0)
        {
            string directoryName = absPath.Substring(0, directoriesEnd);
            if (!System.IO.Directory.Exists(directoryName))
            {
                Debug.Log($"Directory not found, creating: {directoryName}");
                System.IO.Directory.CreateDirectory(directoryName);
            }
        }

        // Manually initialize the acoustics objects in the scene
        job = new ComputeJob { map = this, mapOnly = mapOnly };

        GatherGeometriesAndMaterials(out job.tempSceneLoad, out job.geometries, out job.materials);

        hash = new Hash128();
        if (job.geometries.Length == 0)
        {
            Debug.LogError("Acoustic map precompute failed: no geometry", gameObject);
            DestroyInternal();
            UnloadTemporaryScenes(job.tempSceneLoad);
            return false;
        }

        foreach (MetaXRAcousticGeometry geometry in job.geometries)
        {
            if (!geometry.StartInternal())
            {
                Debug.LogError("Acoustic map precompute failed: invalid geometry", gameObject);
                DestroyInternal();
                UnloadTemporaryScenes(job.tempSceneLoad);
                return false;
            }
            geometry.AppendHash(ref hash);
        }

        foreach (MetaXRAcousticMaterial material in job.materials)
        {
            material.AppendHash(ref hash);
        }

        // Initialize the scene and start the job on the background thread.
        computing = true;
        computeCanceled = false;
        computeFinished = false;
        computeSucceeded = false;

        if (!job.Start(absPath))
        {
            computeFinished = true;
            computeCanceled = true;
            DestroyInternal();
            UnloadTemporaryScenes(job.tempSceneLoad);
            return false;
        }

        return true;
    }

    /// Signal to the precomputation thread that it should stop computing the IR
    internal void CancelCompute()
    {
        computeCanceled = true;
    }

    /// Do final cleanup that can't be done on the async thread.
    /**
      * This is called by the custom editor from the main thread
      * after this.computeFinished == true. Don't call it otherwise.
      */
    internal bool FinishCompute()
    {
        if (job == null || computeThread == null)
        {
            computing = false;
            computeFinished = true;
            DestroyInternal();
            UnloadTemporaryScenes(job.tempSceneLoad);
            return false;
        }

        // Wait until the compute thread is done.
        // Usually it is already finished by now, but in case of early termination (e.g. via OnDestroy()), we need to wait.
        computeThread.Join();

        // Write IR to a file.
        if (computeSucceeded && !ComputeCanceled)
        {
            if (string.IsNullOrEmpty(relativeFilePath))
            {
                if (string.IsNullOrEmpty(gameObject.scene.name))
                {
                    Debug.LogError("Cannot autogenerate name scene hasn't been saved", gameObject);
                    return true;
                }
                relativeFilePath = GenerateSuggestedPath();
                Debug.Log($"No file path specified, autogenerated: {relativeFilePath}", gameObject);
            }

            MetaXRAudioUtils.CreateDirectoryForFilePath(AbsoluteFilePath);

            bool shouldAdd = !File.Exists(AbsoluteFilePath);
            if (!shouldAdd && UnityEditor.VersionControl.Provider.isActive)
            {
                var checkout = UnityEditor.VersionControl.Provider.Checkout(AbsoluteFilePath, UnityEditor.VersionControl.CheckoutMode.Asset);
                checkout.Wait();
                Debug.Log($"Checkout {RelativeFilePath}: success = {checkout.success}", gameObject);
            }

            int result = Native.Interface.AudioSceneIRWriteFile(mapHandle, AbsoluteFilePath);
            if (result != Success)
            {
                DestroyInternal();
                Debug.LogError($"Error writing Acoustic Map to file {AbsoluteFilePath}", gameObject);
                return false;
            }

            if (shouldAdd && UnityEditor.VersionControl.Provider.isActive)
            {
                var checkout = UnityEditor.VersionControl.Provider.Checkout(AbsoluteFilePath, UnityEditor.VersionControl.CheckoutMode.Asset);
                checkout.Wait();
                Debug.Log($"Add {RelativeFilePath}: success = {checkout.success}");
            }

            Debug.Log($"Acoustic Map {(job.mapOnly ? "Mapped" : "Generated")}: {AbsoluteFilePath}", gameObject);

            if (MetaXRAcousticSettings.Instance.MapBakeWriteGeo)
            {
                foreach (MetaXRAcousticGeometry geo in job.geometries)
                {
                    if (geo.FileEnabled)
                    {
                        geo.WriteFileInternal(geo.geometryHandle);
                    }
                }
            }
        }

        // Signal that the compute is finished.
        // This must be before the call to sceneIR.DestroyInternal() below to prevent stack overflow.
        computeFinished = true;
        computing = false;

        // Clean up scene objects.
        DestroyInternal();

        foreach (MetaXRAcousticGeometry geometry in job.geometries)
        {
            geometry.DestroyInternal();
        }

        foreach (MetaXRAcousticMaterial material in job.materials)
        {
            material.DestroyInternal();
        }

        UnloadTemporaryScenes(job.tempSceneLoad);

        // Reset for next time.
        job = null;
        computeThread = null;
        cachedPointsDirty = true;

        // Ensure that the points are redrawn immediately.
        UnityEditor.SceneView.RepaintAll();

        return true;
    }

    /// A class that encapsulates data needed for async compute jobs.
    private class ComputeJob
    {
        internal MetaXRAcousticMap map;
        internal bool mapOnly = false;

        internal MetaXRAcousticGeometry[] geometries;
        internal MetaXRAcousticMaterial[] materials;
        internal List<TempSceneLoad> tempSceneLoad;

        /// Start the job and trigger the async thread to do the computation.
        /**
          * This must be called from the main thread.
          */
        internal bool Start(string path)
        {
            // Execute the main part of the job async
            map.computeThread = new Thread(() => this.ComputeAsync());
            map.computeThread.Start();

            return true;
        }

        /// A wrapper for ComputeAsyncInternal() that ensures the proper signals are set after an exception.
        private void ComputeAsync()
        {
            map.computeSucceeded = false;
            map.computeFinished = false;

            bool success = ComputeAsyncInternal();

            map.computeSucceeded = success;
            map.computeFinished = true;
        }

        /// Do the actual async part of the computation.
        private bool ComputeAsyncInternal()
        {
            // Time the computation to estimate time remaining.
            map.stopwatch = new Stopwatch();
            map.stopwatch.Start();

            // A handle to the Acoustic Map that allows us to pass its address to the DLL and then back again in a callback.
            GCHandle mapHandle = GCHandle.Alloc(map);

            // Initialize the parameters structure.
            MapParameters parameters = new MapParameters();
            Native.Interface.InitializeAudioSceneIRParameters(out parameters);
            parameters.thisSize = (UIntPtr)Marshal.SizeOf(typeof(MapParameters));
            parameters.callbacks.userData = GCHandle.ToIntPtr(mapHandle);
            parameters.callbacks.progress = ReportComputeProgress;
            parameters.flags = map.Flags;
            if (mapOnly)
            {
                parameters.flags |= AcousticMapFlags.MAP_ONLY;
                map.hasCustomPoints = false;
            }
            parameters.reflectionCount = (UIntPtr)map.ReflectionCount;
            parameters.minResolution = map.MinSpacing;
            parameters.maxResolution = map.MaxSpacing;
            parameters.headHeight = map.HeadHeight;
            parameters.maxHeight = map.MaxHeight;
            parameters.gravityVectorX = map.GravityVector.x;
            parameters.gravityVectorY = map.GravityVector.y;
            parameters.gravityVectorZ = map.GravityVector.z;

            // Do the computation.
            int computeResult = -1;
            if (map.HasCustomPoints && !mapOnly)
            {
                computeResult = Native.Interface.AudioSceneIRComputeCustomPoints(
                    map.mapHandle, map.cachedPoints, (UIntPtr)map.PointCount, ref parameters);
            }
            else
            {
                computeResult = Native.Interface.AudioSceneIRCompute(map.mapHandle, ref parameters);
            }

            // Clean up.
            mapHandle.Free();

            if (computeResult != Success && !map.ComputeCanceled)
            {
                map.computeFinished = true;
                Debug.LogError($"Precomputation failed, result = {computeResult}");
                return false;
            }

            map.stopwatch.Stop();
            double duration = map.stopwatch.Elapsed.TotalSeconds;
            string timeTaken = duration < 1.0 ? $"{duration * 1000.0:0.0} ms" : $"{duration} seconds";

            Debug.Log($"Precomputation took {timeTaken}");
            return true;
        }
    }

    /// A callback from the DLL that reports the current computation progress. Return false to cancel the computation.
    private static bool ReportComputeProgress(IntPtr userData, string description, float progress)
    {
        // Get the MetaXRAcousticMap reference from the user data pointer
        GCHandle sceneIRHandle = GCHandle.FromIntPtr(userData);
        MetaXRAcousticMap map = sceneIRHandle.Target as MetaXRAcousticMap;
        if (map == null)
        {
            // Something went wrong.
            Debug.LogError("Can't cast user data to MetaXRAcousticMap");
            return false;
        }

        // Get the time since the start of the computation.
        map.stopwatch.Stop();
        double totalTime = map.stopwatch.Elapsed.TotalSeconds;

        // Reset the stage starting time if entering a new stage
        if (map.computeDescription != description)
            map.StageStartingTime = totalTime;

        // Save the current progress.
        map.computeDescription = description;
        map.computeProgress = progress;
        map.computeTime = totalTime - map.StageStartingTime;

        // Restart timer.
        map.stopwatch.Start();

        // Return whether or not the current computation should continue.
        return !map.ComputeCanceled;
    }
#endif // UNITY_EDITOR

    //***********************************************************************
    // Point Visualization

#if UNITY_EDITOR
    [NonSerialized]
    private AcousticMapStatus status = AcousticMapStatus.EMPTY;
    internal AcousticMapStatus Status
    {
        get
        {
            UpdateCachedPoints();
            return status;
        }
    }

    /// The number of valid points in the cached point array.
    [SerializeField]
    private int pointCount = 0;
    internal int PointCount => UpdateCachedPoints() ? pointCount : 0;

    [System.NonSerialized]
    private bool cachedPointsDirty = true;
    [SerializeField]
    private float[] cachedPoints = null;

    [SerializeField]
    private bool hasCustomPoints = false;
    internal bool HasCustomPoints => hasCustomPoints;

    internal int SelectedPoint = -1;
    internal bool HasSelectedPoint => SelectedPoint >= 0 && SelectedPoint < PointCount;

    /// Return the point at the specified index.
    internal Vector3 GetPoint(int pointIndex)
    {
        if (!UpdateCachedPoints() || pointIndex < 0 || pointIndex >= PointCount)
            return Vector3.zero;

        Vector3 point = new Vector3(cachedPoints[pointIndex * 3], cachedPoints[pointIndex * 3 + 1], cachedPoints[pointIndex * 3 + 2]);

        // Transform point to world space.
        Matrix4x4 m = transform.localToWorldMatrix;
        m.SetRow(2, -m.GetRow(2));
        point = m.MultiplyPoint(point);

        // Right to left handed.
        point.z = -point.z;
        return point;
    }

    /// Modify the point at the specified index.
    internal void SetPoint(int pointIndex, Vector3 newPoint)
    {
        if (!UpdateCachedPoints() || pointIndex < 0 || pointIndex >= PointCount)
        {
            Debug.LogError("Point index out of bounds", gameObject);
            return;
        }

        // Left to right handed.
        newPoint.z = -newPoint.z;

        // Transform point to Acoustic Map local space.
        Matrix4x4 m = transform.worldToLocalMatrix;
        m.SetColumn(2, -m.GetColumn(2));
        newPoint = m.MultiplyPoint(newPoint);

        cachedPoints[pointIndex * 3] = newPoint.x;
        cachedPoints[pointIndex * 3 + 1] = newPoint.y;
        cachedPoints[pointIndex * 3 + 2] = newPoint.z;
        hasCustomPoints = true;
    }

    /// Remove the point at the specified index and replace it with the last point.
    internal void RemovePoint(int pointIndex)
    {
        if (!UpdateCachedPoints() || pointIndex < 0 || pointIndex >= PointCount)
        {
            Debug.LogError("Point index out of bounds", gameObject);
            return;
        }

        pointCount--;
        if (pointIndex != pointCount)
        {
            // Move the last point to fill the hole in the array.
            cachedPoints[pointIndex * 3] = cachedPoints[pointCount * 3];
            cachedPoints[pointIndex * 3 + 1] = cachedPoints[pointCount * 3 + 1];
            cachedPoints[pointIndex * 3 + 2] = cachedPoints[pointCount * 3 + 2];
        }

        // Deselect point if it was selected.
        if (pointIndex == SelectedPoint)
            SelectedPoint = -1;

        hasCustomPoints = true;
    }

    /// Add a new custom point to the end of the point array and return the index of that new point.
    internal int AddPoint(Vector3 newPoint)
    {
        UpdateCachedPoints();

        int pointIndex = PointCount;
        pointCount++;

        // Resize array if necessary.
        if (cachedPoints == null)
            cachedPoints = new float[Math.Max(PointCount * 3, 9)];
        else if (PointCount * 3 >= cachedPoints.Length)
            Array.Resize(ref cachedPoints, Math.Max(cachedPoints.Length * 2, 9)); // Double capacity.

        // Left to right handed.
        newPoint.z = -newPoint.z;

        // Transform point to Acoustic Map local space.
        Matrix4x4 m = transform.worldToLocalMatrix;
        m.SetColumn(2, -m.GetColumn(2));
        newPoint = m.MultiplyPoint(newPoint);

        cachedPoints[pointIndex * 3] = newPoint.x;
        cachedPoints[pointIndex * 3 + 1] = newPoint.y;
        cachedPoints[pointIndex * 3 + 2] = newPoint.z;
        hasCustomPoints = true;
        return pointIndex;
    }

    /// Remove all existing points from the Acoustic Map.
    internal void ClearPoints()
    {
        pointCount = 0;
        hasCustomPoints = true;
    }

    private bool UpdateCachedPoints()
    {
        // Don't update the points if it's not needed or if the user has provided custom points.
        if (!cachedPointsDirty || Computing || ComputeCanceled)
            return true;

        // flag non-dirty regardless of success to prevent error spam
        cachedPointsDirty = false;

        // Make sure the IR is loaded.
        if (!Application.isPlaying)
        {
            if (File.Exists(AbsoluteFilePath))
                StartInternal();
            else
                return true;
        }

        if (mapHandle == IntPtr.Zero)
        {
            Debug.LogError("Internal error: invalid Acoustic Map handle");
            DestroyInternal();
            return false;
        }

        // Make sure the scene has been mapped.
        Native.Interface.AudioSceneIRGetStatus(mapHandle, out AcousticMapStatus irStatus);
        if ((irStatus & AcousticMapStatus.MAPPED) == 0)
        {
            Debug.LogError($"Internal error: scene not mapped, status = {irStatus:X}");
            DestroyInternal();
            return false;
        }

        // Determine how many points are in the Acoustic Map.
        int result = Native.Interface.AudioSceneIRGetPointCount(mapHandle, out UIntPtr count);
        if (result != Success)
        {
            Debug.LogError($"Internal error: unexpected error {result} while getting point count");
            DestroyInternal();
            return false;
        }

        if (!HasCustomPoints)
        {
            // Create an array for the points.
            pointCount = (int)count;
            cachedPoints = new float[(int)count * 3];

            // Get the point data.
            result = Native.Interface.AudioSceneIRGetPoints(mapHandle, cachedPoints, count);
            if (result != Success)
            {
                Debug.LogError($"Internal error: unexpected error {result} while getting points");
                DestroyInternal();
                return false;
            }
        }

        result = Native.Interface.AudioSceneIRGetStatus(mapHandle, out status);
        if (result != Success)
        {
            Debug.LogError($"Internal error: unexpected error {result} while getting points");
            DestroyInternal();
            return false;
        }

        status = irStatus;

        if (!Application.isPlaying)
            DestroyInternal();

        return true;
    }
#endif // UNITY_EDITOR
};
