using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.SceneManagement;

public class GoogleButtonScript : MonoBehaviour
{
    public string googleURL = "https://www.google.com";

    public void OpenGoogleInBrowser()
    {
        Application.OpenURL(googleURL);
    }
}
