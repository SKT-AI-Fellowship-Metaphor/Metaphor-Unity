#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67;
struct DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916;
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A;
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482;
struct Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63;
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC;
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
struct IDataSource_1_t63E4660329CACFB22DE9833CC56BC5227752B69E;
struct IEnumerator_1_t5CBE96AF6D34AD77B69C46BFC2D221735CFAC144;
struct IEqualityComparer_1_tE953DD2D8AA81AA1147A9C45DA2ADDB9E0CFBD0E;
struct KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056;
struct ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB;
struct EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69;
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456;
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1;
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01;
struct IBodyPose_t2BA886A75367D7351AACFE310468790C66930097;
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C;
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84;
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90;
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9;
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056* ____keys;
	ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4  : public RuntimeObject
{
};
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
};
struct Constants_t6B524980617E2621568CC57EDDE006CAC3DF9797  : public RuntimeObject
{
};
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649  : public RuntimeObject
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____poses;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84  : public RuntimeObject
{
};
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90  : public RuntimeObject
{
};
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6__padding[120];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D30212_tDA9BC430D4AB887E5A85730213F98556079A4938 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30212_tDA9BC430D4AB887E5A85730213F98556079A4938__padding[30212];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D50946_t412C68B2337B3EB56F03A8C7C4C2862B36552BC7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D50946_t412C68B2337B3EB56F03A8C7C4C2862B36552BC7__padding[50946];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9__padding[96];
	};
};
#pragma pack(pop, tp)
struct UpdateModeFlags_t5C7C1F5E8CD867DB36268A27760A4C52C7D710BD 
{
	int32_t ___value__;
};
struct UpdateModeFlags_tB542AAEA370527C237945CC7D6D1D09BCBCFB63A 
{
	int32_t ___value__;
};
struct BodyJointId_t4325E3CC057E71451D9D63463F2C06956FD665E1 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct VisibilityFlags_t32345FC584065CF93D70ECD1188FA27C95D44A24 
{
	int32_t ___value__;
};
struct Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 
{
	HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD 
{
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456  : public RuntimeObject
{
	RuntimeObject* ___U3CSkeletonMappingU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CRootU3Ek__BackingField;
	float ___U3CRootScaleU3Ek__BackingField;
	bool ___U3CIsDataValidU3Ek__BackingField;
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CJointPosesU3Ek__BackingField;
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField;
};
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1  : public RuntimeObject
{
	int32_t ___U3CLocalDataVersionU3Ek__BackingField;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____originalPoses;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____posesFromRoot;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____localPoses;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____worldPoses;
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____posesFromRootCollection;
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____worldPosesCollection;
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____localPosesCollection;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyJointsFromRoot;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyLocalJoints;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyWorldJoints;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____scale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____rootPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____worldRoot;
	RuntimeObject* ____mapping;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CU3E2__current;
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CU3E4__this;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CU3Es__1;
	int32_t ___U3CU3Es__2;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3E5__3;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ____started;
	bool ____requiresUpdate;
	int32_t ____updateMode;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter;
	RuntimeObject* ___UpdateAfter;
	int32_t ____currentDataVersion;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable;
};
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ____started;
	bool ____requiresUpdate;
	int32_t ____updateMode;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter;
	RuntimeObject* ___UpdateAfter;
	int32_t ____currentDataVersion;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable;
};
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyPoseUpdated;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____body;
	RuntimeObject* ___Body;
	bool ____autoUpdate;
	bool ____started;
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesLocal;
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesFromRoot;
};
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ____visibility;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____jointColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____boneColor;
	float ____radius;
};
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67  : public DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____iModifyDataFromSourceMono;
	RuntimeObject* ____modifyDataFromSource;
	bool ____applyModifier;
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____thisDataAsset;
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____currentDataAsset;
};
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5  : public SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____bodyPose;
	RuntimeObject* ___BodyPose;
};
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69  : public DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackingSpace;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyUpdated;
	BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* ____jointPosesCache;
};
struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___Value;
};
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388;
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B;
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___2B1FD722B0C0586F285976A166555FD77C64A00FC76F6CC455BE22FA86E48427;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08;
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051;
	__StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 ___6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE;
	__StaticArrayInitTypeSizeU3D50946_t412C68B2337B3EB56F03A8C7C4C2862B36552BC7 ___7C5EEAFB23F3DC477E23FE444B3D7CE3E9FB93B38E02B8EC5BEF3070D91602E1;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE;
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0;
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1;
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4;
	__StaticArrayInitTypeSizeU3D30212_tDA9BC430D4AB887E5A85730213F98556079A4938 ___CF2C7F0571BD5B517C2A05E0D66AC8EC13AC403B8BCA642C50F8C2879AFE2EF7;
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5;
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F;
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A;
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78;
};
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields
{
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CEmptyU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields
{
	U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__23_0;
};
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields
{
	U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__19_0;
};
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields
{
	U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__24_0;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
};
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_StaticFields
{
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___U3CInvalidAssetU3Ek__BackingField;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared (DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___0_value, method);
}
inline void Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___0_joint, int32_t ___1_visibility, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8 (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*))Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_monoBehaviour, bool* ___1_started, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_baseStart, const RuntimeMethod* method) ;
inline void AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_monoBehaviour, bool* ___1_started, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared)(__this, method);
}
inline void Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) ;
inline BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_data, int32_t ___1_dataVersion, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_trackingSpace, const RuntimeMethod* method) ;
inline void DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared)(__this, method);
}
inline bool DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
inline void DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873 (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67* __this, const RuntimeMethod* method)
{
	((  void (*) (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67*, const RuntimeMethod*))DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___0_poses, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_vector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Postmultiply_m428D74BAC9502D19EACB8AF6CBD8738FFC4B41CE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_a, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
inline PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_inline (const RuntimeMethod* method)
{
	return ((  PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* (*) (const RuntimeMethod*))Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAE28EBDB5735F7747B668B15B2772E24DF30BE2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* L_0 = (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90*)il2cpp_codegen_object_new(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719(L_0, NULL);
		((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__19_0_m46ACD841C7E2DD7BA8A7D47BFEB014382BFD5F3C (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Awake_m1F2FAE9E28854672B894612994E02E5C0C645E2C (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____bodyPose;
		__this->___BodyPose = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Start_mA0FE7E685A0C2BE1BCCD57C9D34E116AE7AEA685 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___BodyPose;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3(L_0, Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Update_m2648C2A6347BF946016DF0D357E2B9F82DB66A1B (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___BodyPose;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_3;
		L_3 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0032_1;
			}

IL_001a_1:
			{
				int32_t L_4;
				L_4 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_4;
				int32_t L_5 = V_1;
				int32_t L_6;
				L_6 = BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0(__this, NULL);
				SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390(__this, L_5, L_6, NULL);
			}

IL_0032_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895(__this, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3&((int32_t)-3)));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		V_2 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetWorldJointPose_m118B15E71FE7391486DCB4F9CECA70F2A3BA85CC (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___0_jointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___BodyPose;
		int32_t L_1 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___1_pose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___1_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___position;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_6, L_8, NULL);
		L_5->___position = L_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = ___1_pose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = ___1_pose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13->___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_12, L_14, NULL);
		L_10->___rotation = L_15;
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_004a:
	{
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetParentJointId_m000322E4F958E7B722297A6C965DCA3634D09512 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___0_jointId, int32_t* ___1_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___BodyPose;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___0_jointId;
		int32_t* L_3 = ___1_parent;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectAllBodyJointDebugGizmos_mBF057DE9337123DAE98C5C615AB60F71ED3B141A (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_bodyPose;
		BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_bodyPose;
		__this->____bodyPose = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPose), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = ___0_bodyPose;
		__this->___BodyPose = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos__ctor_m90242A1FA4DC5DDF6AC92D02BB2D37978A393FE8 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	{
		SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_add_WhenBodyPoseUpdated_m4F367E0747FC9D30C136610A4D21A3C2E97ED764 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___WhenBodyPoseUpdated);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_remove_WhenBodyPoseUpdated_m878542A32B4026D1013A456977681CDC5DDBF995 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___WhenBodyPoseUpdated);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_get_AutoUpdate_m1B19BF70341673621096BEECA9C3284C8E1A6BAC (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____autoUpdate;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_set_AutoUpdate_m281E0DF37FCE1DAB2B973B90684B83FD345F0A5E (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____autoUpdate = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoseFromBody_get_SkeletonMapping_m79DFFF5AD444C8C2AC87E9629128631A4871D8FD (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___Body;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseLocal_m237F69CDB94CFE83C54A20DB0F9F6F7A5A96D68C (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal;
		int32_t L_1 = ___0_bodyJointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseFromRoot_mC6AE256BAA70695B7A8C89A0FC2B12139A208088 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesFromRoot;
		int32_t L_1 = ___0_bodyJointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Awake_m3C62CA5606E08599B6148463371FD03F9C9D7BE2 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_0, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesLocal = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesLocal), (void*)L_0);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_1, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesFromRoot = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesFromRoot), (void*)L_1);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->____body;
		__this->___Body = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Start_m18CD67AB3AF54313EB3C7EFBDBF98B25015DA023 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool* L_0 = (bool*)(&__this->____started);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		RuntimeObject* L_1 = __this->___Body;
		AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7(__this, L_1, _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7_RuntimeMethod_var);
		bool* L_2 = (bool*)(&__this->____started);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnEnable_mC35E282A150221780C957F4A691D12A8FDA8F525 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->____started;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->___Body;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnDisable_mBB57DDE21523E881429E79588EB573CD071D0D59 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->____started;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->___Body;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(11, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____autoUpdate;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B(__this, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	{
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal;
		NullCheck(L_0);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_0, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = __this->____jointPosesFromRoot;
		NullCheck(L_1);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_1, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		RuntimeObject* L_2 = __this->___Body;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_5;
		L_5 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0084_1;
			}

IL_0032_1:
			{
				int32_t L_6;
				L_6 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_6;
				RuntimeObject* L_7 = __this->___Body;
				int32_t L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(7, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_7, L_8, (&V_2));
				V_4 = L_9;
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_005f_1;
				}
			}
			{
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_11 = __this->____jointPosesLocal;
				int32_t L_12 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_2;
				NullCheck(L_11);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_11, L_12, L_13, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_005f_1:
			{
				RuntimeObject* L_14 = __this->___Body;
				int32_t L_15 = V_1;
				NullCheck(L_14);
				bool L_16;
				L_16 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_14, L_15, (&V_3));
				V_5 = L_16;
				bool L_17 = V_5;
				if (!L_17)
				{
					goto IL_0083_1;
				}
			}
			{
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_18 = __this->____jointPosesFromRoot;
				int32_t L_19 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_3;
				NullCheck(L_18);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_18, L_19, L_20, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_0083_1:
			{
			}

IL_0084_1:
			{
				bool L_21;
				L_21 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_009e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = __this->___WhenBodyPoseUpdated;
		NullCheck(L_22);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectAllPoseFromBody_m04B85AF80EBF8B7C2F19387F83AAA769393967A3 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_body;
		PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_body;
		__this->____body = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = ___0_body;
		__this->___Body = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody__ctor_m93DB6B0461C2AFF46BE0CC634AD6F2B5955C1AC0 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_2 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyPoseUpdated = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyPoseUpdated), (void*)G_B2_0);
		__this->____autoUpdate = (bool)1;
		__this->____started = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE297FA05D8CD9E9E5891918A299A22431B08D6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_0 = (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9*)il2cpp_codegen_object_new(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E(L_0, NULL);
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsConnected_m4BBC7B62898B592847FEDC68045AC3F6C63A51FF (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsHighConfidence_m0BFF1FFD4774604FAF7ADA1497C0949207D5BEBC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Body_get_Scale_mADAE445C0468C2BB6930BCBBDC9810416233D8A6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_add_WhenBodyUpdated_m4B022B818252F0A0BBFAFB945DC2A6727EF899DC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___WhenBodyUpdated);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_remove_WhenBodyUpdated_mA9C5D98323F3666D16A3752C34226F26B42B3F18 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___WhenBodyUpdated);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPose_mC4219B1E7D4EF11E74EE7258170353DF43C6AB20 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___0_bodyJointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0034:
	{
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___1_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_9 = __this->____jointPosesCache;
		int32_t L_10 = ___0_bodyJointId;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A(L_9, L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_11;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseLocal_mE9642BCCA92EC6B2529B3F589A4A274F4F436735 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___0_bodyJointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0034:
	{
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___1_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_9 = __this->____jointPosesCache;
		int32_t L_10 = ___0_bodyJointId;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D(L_9, L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_11;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseFromRoot_m69D84B629E83600E081F1345E40C0E791DBB763A (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___0_bodyJointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0034:
	{
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___1_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_9 = __this->____jointPosesCache;
		int32_t L_10 = ___0_bodyJointId;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(L_9, L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_11;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetRootPose_m6C75EDBF0A1C9D10433029997E26279B13604A35 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003a;
	}

IL_001e:
	{
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___0_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_5 = __this->____jointPosesCache;
		NullCheck(L_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8(L_5, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_4 = L_6;
		V_1 = (bool)1;
		goto IL_003a;
	}

IL_003a:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache;
		V_0 = (bool)((((RuntimeObject*)(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_2 = (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1*)il2cpp_codegen_object_new(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705(L_2, NULL);
		__this->____jointPosesCache = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesCache), (void*)L_2);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9, __this);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_2 = __this->____jointPosesCache;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline(L_2, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_5 = __this->____jointPosesCache;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_6;
		L_6 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(9, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____trackingSpace;
		NullCheck(L_5);
		BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8(L_5, L_6, L_7, L_8, NULL);
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_Apply_m2265B8B3A62FE368E5A43B6001BACD7769B647C6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_data, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_MarkInputDataRequiresUpdate_m023BCD6AFEBC1A05252A6493085BDCF029492C01 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC(__this, DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		bool L_0;
		L_0 = DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline(__this, DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___WhenBodyUpdated;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body__ctor_m5939597A61F910B26A9F5F008F58BC849B3B9B0D (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_2 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyUpdated = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyUpdated), (void*)G_B2_0);
		il2cpp_codegen_runtime_class_init_inline(DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873(__this, DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B5F8F6C9982D2B9BB674F10EB59FD1E25D250B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_0 = (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84*)il2cpp_codegen_object_new(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40(L_0, NULL);
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSkeletonMappingU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CRootU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___U3CRootScaleU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDataValidU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_JointPoses_m3BD13A56F9DD4E6EC6803871CD0D04F60F434FED (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___0_value, const RuntimeMethod* method) 
{
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___0_value;
		__this->___U3CJointPosesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_CopyFrom_m7E93AB9DB6DA8D6E02D3D45C12B2125A4854C854 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_source, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0 = ___0_source;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline(__this, L_1, NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_2 = ___0_source;
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_2, NULL);
		BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline(__this, L_3, NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_4 = ___0_source;
		NullCheck(L_4);
		float L_5;
		L_5 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_4, NULL);
		BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline(__this, L_5, NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_6 = ___0_source;
		NullCheck(L_6);
		bool L_7;
		L_7 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_6, NULL);
		BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline(__this, L_7, NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_8 = ___0_source;
		NullCheck(L_8);
		bool L_9;
		L_9 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_8, NULL);
		BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline(__this, L_9, NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_10 = ___0_source;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline(L_10, NULL);
		BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline(__this, L_11, NULL);
		V_0 = 0;
		goto IL_0071;
	}

IL_0053:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12;
		L_12 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(__this, NULL);
		int32_t L_13 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_14 = ___0_source;
		NullCheck(L_14);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_15;
		L_15 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_14, NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_18);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0071:
	{
		int32_t L_20 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_21 = ___0_source;
		NullCheck(L_21);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_22;
		L_22 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_21, NULL);
		NullCheck(L_22);
		V_1 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_1;
		if (L_23)
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset__ctor_mF8B6BB967E907A5ACA382FE386F6DD3C87A4E262 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___U3CRootU3Ek__BackingField = L_0;
		__this->___U3CRootScaleU3Ek__BackingField = (1.0f);
		__this->___U3CIsDataValidU3Ek__BackingField = (bool)0;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField = (bool)0;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)84));
		__this->___U3CJointPosesU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField), (void*)L_1);
		__this->___U3CSkeletonChangedCountU3Ek__BackingField = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLocalDataVersionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CLocalDataVersionU3Ek__BackingField = (-1);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)84));
		__this->____originalPoses = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalPoses), (void*)L_0);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)84));
		__this->____posesFromRoot = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRoot), (void*)L_1);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)84));
		__this->____localPoses = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPoses), (void*)L_2);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)84));
		__this->____worldPoses = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPoses), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, (-1), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyJointsFromRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyJointsFromRoot), (void*)L_4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyLocalJoints = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyLocalJoints), (void*)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyWorldJoints = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyWorldJoints), (void*)L_6);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = __this->____localPoses;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_8 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_8, L_7, NULL);
		__this->____localPosesCollection = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPosesCollection), (void*)L_8);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = __this->____worldPoses;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_10 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_10, L_9, NULL);
		__this->____worldPosesCollection = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPosesCollection), (void*)L_10);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_11 = __this->____posesFromRoot;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_12 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_12, L_11, NULL);
		__this->____posesFromRootCollection = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRootCollection), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_data, int32_t ___1_dataVersion, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_trackingSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0 = ___1_dataVersion;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, L_0, NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_1 = ___0_data;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_1, NULL);
		__this->____mapping = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapping), (void*)L_2);
		V_0 = 0;
		goto IL_003d;
	}

IL_0019:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____dirtyJointsFromRoot;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint64_t)((int64_t)(-1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____dirtyLocalJoints;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((int64_t)(-1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->____dirtyWorldJoints;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)((int64_t)(-1)));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)2))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0019;
		}
	}
	{
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_12 = ___0_data;
		NullCheck(L_12);
		bool L_13;
		L_13 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_12, NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0124;
	}

IL_0058:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_16 = ___0_data;
		NullCheck(L_16);
		float L_17;
		L_17 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_17, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19;
		L_19 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_18, NULL);
		__this->____scale = L_19;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_20 = ___0_data;
		NullCheck(L_20);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_20, NULL);
		__this->____rootPose = L_21;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = __this->____rootPose;
		__this->____worldRoot = L_22;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___2_trackingSpace;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00f1;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = __this->____scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___2_trackingSpace;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_27, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
		L_29 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_28, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_29, NULL);
		__this->____scale = L_30;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_31 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____worldRoot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___2_trackingSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____rootPose);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33->___position;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_32, L_34, NULL);
		L_31->___position = L_35;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_36 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____worldRoot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = ___2_trackingSpace;
		NullCheck(L_37);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_37, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_39 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____rootPose);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = L_39->___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_38, L_40, NULL);
		L_36->___rotation = L_41;
	}

IL_00f1:
	{
		V_4 = 0;
		goto IL_0118;
	}

IL_00f6:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_42 = __this->____originalPoses;
		int32_t L_43 = V_4;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_44 = ___0_data;
		NullCheck(L_44);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_45;
		L_45 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_44, NULL);
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_48);
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0118:
	{
		int32_t L_50 = V_4;
		V_5 = (bool)((((int32_t)L_50) < ((int32_t)((int32_t)84)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_00f6;
		}
	}

IL_0124:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllLocalPoses_mC8BF8BA0AA0FD490D6EA91BAD6B21C759C027EB3 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___0_localJointPoses, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B(__this, NULL);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___0_localJointPoses;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____localPosesCollection;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____localPosesCollection;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllPosesFromRoot_m2D463DB2AABCEC580600448646B5BA9CE482337C (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___0_posesFromRoot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102(__this, NULL);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___0_posesFromRoot;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____posesFromRootCollection;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____posesFromRootCollection;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllWorldPoses_mE6DF5987E80578B0B228ECA3119BE6F23DFFB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___0_worldJointPoses, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4(__this, NULL);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___0_worldJointPoses;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____worldPosesCollection;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____worldPosesCollection;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_jointId;
		BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_0, NULL);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____localPoses;
		int32_t L_2 = ___0_jointId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_jointId;
		BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_0, NULL);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____posesFromRoot;
		int32_t L_2 = ___0_jointId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_jointId;
		BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_0, NULL);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____worldPoses;
		int32_t L_2 = ___0_jointId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____worldRoot;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		int32_t L_0 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyJointsFromRoot;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_008e;
	}

IL_0018:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = __this->____originalPoses;
		int32_t L_5 = ___0_jointId;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____rootPose);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_9, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11.___position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____rootPose);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_15, NULL);
		V_1 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->____rootPose);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_18, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20.___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_19, L_21, NULL);
		V_2 = L_22;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_23 = __this->____posesFromRoot;
		int32_t L_24 = ___0_jointId;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_27), L_25, L_26, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_27);
		int32_t L_28 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = __this->____dirtyJointsFromRoot;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_28, L_29, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyLocalJoints;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_00cc;
	}

IL_001b:
	{
		RuntimeObject* L_4 = __this->____mapping;
		int32_t L_5 = ___0_jointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_4, L_5, (&V_0));
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ab;
		}
	}
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = __this->____originalPoses;
		int32_t L_10 = ___0_jointId;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->____originalPoses;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17.___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_18, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20.___position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22.___position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_24, NULL);
		V_5 = L_25;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = L_26.___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_27, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29.___rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_28, L_30, NULL);
		V_6 = L_31;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_32 = __this->____localPoses;
		int32_t L_33 = ___0_jointId;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_36), L_34, L_35, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_36);
		goto IL_00be;
	}

IL_00ab:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_37 = __this->____localPoses;
		int32_t L_38 = ___0_jointId;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_39;
		L_39 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_39);
	}

IL_00be:
	{
		int32_t L_40 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = __this->____dirtyLocalJoints;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_40, L_41, NULL);
	}

IL_00cc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyWorldJoints;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_006e;
	}

IL_0018:
	{
		int32_t L_4 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(__this, L_4, NULL);
		V_0 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = __this->____scale;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_8, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_6, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_10, NULL);
		(&V_0)->___position = L_11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8(__this, NULL);
		V_2 = L_12;
		PoseUtils_Postmultiply_m428D74BAC9502D19EACB8AF6CBD8738FFC4B41CE((&V_0), (&V_2), NULL);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->____worldPoses;
		int32_t L_14 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_15);
		int32_t L_16 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->____dirtyWorldJoints;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_16, L_17, NULL);
	}

IL_006e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->____mapping;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_4, NULL);
			}

IL_0027_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->____mapping;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_4, NULL);
			}

IL_0027_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->____mapping;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_4, NULL);
			}

IL_0027_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_jointId;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		int32_t L_1 = ___0_jointId;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___1_dirtyFlags;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		V_2 = (bool)((!(((uint64_t)((int64_t)(L_5&((int64_t)(((int64_t)1)<<((int32_t)(L_6&((int32_t)63)))))))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_jointId;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		int32_t L_1 = ___0_jointId;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___1_dirtyFlags;
		int32_t L_3 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_dirtyFlags;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)((int64_t)(L_7&((~((int64_t)(((int64_t)1)<<((int32_t)(L_8&((int32_t)63))))))))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___0_poses, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___0_poses;
		__this->____poses = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poses), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_0 = (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_System_Collections_IEnumerable_GetEnumerator_m0EBABD29DA3CD384530ED6DC2CD883D13E986305 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ReadOnlyBodyJointPoses_get_Empty_mC44AA9A5794DB38A6D1AAE3F2BFE3AF3A948A144 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_0 = ((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReadOnlyBodyJointPoses_get_Item_m1857F5403B3763E108D7D958CE17B2F949B95162 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ReadOnlyBodyJointPoses_get_Item_m437A4A40FA462414921D9CA23037598632978256 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		return ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__cctor_m1A25C248F626E6D4BD222F433A6C35E6E508BDDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0;
		L_0 = Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_inline(Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_1, L_0, NULL);
		((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m96830FE6B1A2DDA8A03FB83E2A6CECA5193DCBA8 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_mCF94D045336F511597C930CDBBAE6A45AEC3690D (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0068;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state = (-1);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_3 = __this->___U3CU3E4__this;
		NullCheck(L_3);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = L_3->____poses;
		__this->___U3CU3Es__1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)L_4);
		__this->___U3CU3Es__2 = 0;
		goto IL_008a;
	}

IL_003b:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_5 = __this->___U3CU3Es__1;
		int32_t L_6 = __this->___U3CU3Es__2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___U3CposeU3E5__3 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = __this->___U3CposeU3E5__3;
		__this->___U3CU3E2__current = L_9;
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0068:
	{
		__this->___U3CU3E1__state = (-1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___U3CposeU3E5__3);
		il2cpp_codegen_initobj(L_10, sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		int32_t L_11 = __this->___U3CU3Es__2;
		__this->___U3CU3Es__2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_008a:
	{
		int32_t L_12 = __this->___U3CU3Es__2;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->___U3CU3Es__1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		__this->___U3CU3Es__1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1), (void*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_m871B6725F46060A97986220B07EB4087A70D351E (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m3C0250A8B7B7020A3C2032A868FA5D0AA07E8602 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = L_0;
		RuntimeObject* L_2 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____visibility;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSkeletonMappingU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CRootU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___U3CRootScaleU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDataValidU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLocalDataVersionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____started;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ((EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
