﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454;
// <>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct KeyCollection_tBA9E4C362038AD4D8203839B7639184250B7EB02;
// System.Lazy`1<FlutterUnityIntegration.UnityMessageManager>
struct Lazy_1_t6F494A9DD8C65745EEC22482A12BA8565B069417;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_t40D855C9E22F0BF3C0ADBC1B41CF44E16D5E0FD2;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct ValueCollection_t76308479C314C62501C70F5884CCFFC9D72B7612;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,FlutterUnityIntegration.UnityMessage>[]
struct EntryU5BU5D_t393AE08BA714246E21C0D33B596C7DE1017B2E0E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t11C2294D60E10C8BF4CE687A4BEFBB42A24A233C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// FGMessageManager
struct FGMessageManager_tF4F43DD6D9767CACECC9B8F46F22F1949DB3C838;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// FlutterUnityIntegration.NativeAPI
struct NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t9CB57C8239C4A0D29CF45F474FDA4B6163DEBFA8;
// System.String
struct String_t;
// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0;
// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9;
// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09F9EA97E7B377ADB303834769F3010F91553C6F;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral88F649D45752B32D225DE99C3792DFEB7114D1BF;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA996CD9C821899A71BDC61B127E43FF4BC5A63DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CdataU3Ei__Field_3;
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject* ___U3CdataU3Ei__Field_3;
};

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t393AE08BA714246E21C0D33B596C7DE1017B2E0E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBA9E4C362038AD4D8203839B7639184250B7EB02* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t76308479C314C62501C70F5884CCFFC9D72B7612* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187  : public RuntimeObject
{
	// System.Int32 FlutterUnityIntegration.MessageHandler::id
	int32_t ___id_0;
	// System.String FlutterUnityIntegration.MessageHandler::seq
	String_t* ___seq_1;
	// System.String FlutterUnityIntegration.MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken FlutterUnityIntegration.MessageHandler::data
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data_3;
};

// FlutterUnityIntegration.NativeAPI
struct NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0  : public RuntimeObject
{
	// System.String FlutterUnityIntegration.UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject FlutterUnityIntegration.UnityMessage::data
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data_1;
	// System.Action`1<System.Object> FlutterUnityIntegration.UnityMessage::callBack
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_t11C2294D60E10C8BF4CE687A4BEFBB42A24A233C* ____addingNew_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Void
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t9CB57C8239C4A0D29CF45F474FDA4B6163DEBFA8* ___PropertyChanging_20;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9  : public MulticastDelegate_t
{
};

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FGMessageManager
struct FGMessageManager_tF4F43DD6D9767CACECC9B8F46F22F1949DB3C838  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56  : public SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF
{
	// FlutterUnityIntegration.UnityMessageManager/MessageDelegate FlutterUnityIntegration.UnityMessageManager::OnMessage
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___OnMessage_7;
	// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate FlutterUnityIntegration.UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage> FlutterUnityIntegration.UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* ___waitCallbackMessageMap_9;
};

// <Module>

// <Module>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_13;
};

// Newtonsoft.Json.Linq.JToken

// FlutterUnityIntegration.MessageHandler

// FlutterUnityIntegration.MessageHandler

// FlutterUnityIntegration.NativeAPI

// FlutterUnityIntegration.NativeAPI

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// FlutterUnityIntegration.UnityMessage

// FlutterUnityIntegration.UnityMessage

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Void

// System.Void

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Delegate

// System.Delegate

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.Linq.JObject

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// System.AsyncCallback

// System.AsyncCallback

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_StaticFields
{
	// System.Lazy`1<T> FlutterUnityIntegration.SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t6F494A9DD8C65745EEC22482A12BA8565B069417* ___LazyInstance_4;
};

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>

// FGMessageManager

// FGMessageManager

// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields
{
	// System.Int32 FlutterUnityIntegration.UnityMessageManager::ID
	int32_t ___ID_6;
};

// FlutterUnityIntegration.UnityMessageManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// U Newtonsoft.Json.Linq.Extensions::Value<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_gshared (RuntimeObject* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_m8A6C9A6253EECF37C0F43554ECC15A565BFE8C9D_gshared (/*<>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_id, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_seq, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_name, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_data, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_Instance_m607F0B93984CCC4DBC13E391B53DEED876E6C123_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m17203366119014F4963976DF6B8E83DE49274252_gshared (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.MessageHandler::getData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_getData_TisIl2CppFullySharedGenericAny_m3C7681691F028E8CACF2B96FBB68D53EBD233931_gshared (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_m951CBAC39C5B1891C1AF0673AF8B1CAC9078AAA9_gshared (SingletonMonoBehaviour_1_t40D855C9E22F0BF3C0ADBC1B41CF44E16D5E0FD2* __this, const RuntimeMethod* method) ;

// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE (int32_t ___0_index, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_mF6F4161EF48C6622AA1B5BC66B4A2CA736C4D2B2 (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___0_sceneName, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_m5A002CE9FDEC524831006A40F5C4896FF66D13E4 (String_t* ___0_name, int32_t ___1_buildIndex, bool ___2_isLoaded, bool ___3_IsValid, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m0C22011A2A0BD4DE3BA6D25D55126CCA9B6522C0 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___0_json, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_gshared)(___0_value, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_gshared)(___0_value, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___3_data, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200 (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, RuntimeObject* ___3_data, const RuntimeMethod* method)
{
	((  void (*) (/*<>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m8A6C9A6253EECF37C0F43554ECC15A565BFE8C9D_gshared)((U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*)__this, (Il2CppFullySharedGenericAny)&___0_id, (Il2CppFullySharedGenericAny)___1_seq, (Il2CppFullySharedGenericAny)___2_name, (Il2CppFullySharedGenericAny)___3_data, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::get_Instance()
inline UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_m607F0B93984CCC4DBC13E391B53DEED876E6C123_gshared)(method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m17203366119014F4963976DF6B8E83DE49274252_gshared)((UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*)__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5 (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___0_key, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99 (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___3_data, const RuntimeMethod* method)
{
	((  void (*) (/*<>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m8A6C9A6253EECF37C0F43554ECC15A565BFE8C9D_gshared)((U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*)__this, (Il2CppFullySharedGenericAny)&___0_id, (Il2CppFullySharedGenericAny)___1_seq, (Il2CppFullySharedGenericAny)___2_name, (Il2CppFullySharedGenericAny)___3_data, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076 (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___0_key, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Remove(TKey)
inline bool Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// T FlutterUnityIntegration.MessageHandler::getData<System.Object>()
inline RuntimeObject* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MessageHandler_getData_TisIl2CppFullySharedGenericAny_m3C7681691F028E8CACF2B96FBB68D53EBD233931_gshared)((MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9 (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07 (SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF*, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_m951CBAC39C5B1891C1AF0673AF8B1CAC9078AAA9_gshared)(__this, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnityMessage(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnitySceneLoaded(char*, int32_t, int32_t, int32_t);
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
// System.Void FGMessageManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FGMessageManager_LoadScene_m01A355D6EFB0A9A0664A37B008A1ED0F8B0EE36C (FGMessageManager_tF4F43DD6D9767CACECC9B8F46F22F1949DB3C838* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F9EA97E7B377ADB303834769F3010F91553C6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F649D45752B32D225DE99C3792DFEB7114D1BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA996CD9C821899A71BDC61B127E43FF4BC5A63DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Debug.Log("Received message from Flutter: " + message); // ????????
		String_t* L_0 = ___0_message;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA996CD9C821899A71BDC61B127E43FF4BC5A63DF, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if (message != null)
		String_t* L_2 = ___0_message;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.Log("Received scene name: " + message);
		String_t* L_3 = ___0_message;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral09F9EA97E7B377ADB303834769F3010F91553C6F, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// int sceneCount = SceneManager.sceneCount;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = SceneManager_get_sceneCount_m6BB8A635EB8933BB91747EFE1F1113ED8594EFBF(NULL);
		V_0 = L_5;
		// for (int i = 0; i < sceneCount; i++)
		V_1 = 0;
		goto IL_0058;
	}

IL_002d:
	{
		// Scene scene = SceneManager.GetSceneAt(i);
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_7;
		L_7 = SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE(L_6, NULL);
		V_2 = L_7;
		// if (scene.name != "BaseScene")
		String_t* L_8;
		L_8 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		bool L_9;
		L_9 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_8, _stringLiteral88F649D45752B32D225DE99C3792DFEB7114D1BF, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// SceneManager.UnloadSceneAsync(scene.name);
		String_t* L_10;
		L_10 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_11;
		L_11 = SceneManager_UnloadSceneAsync_mF6F4161EF48C6622AA1B5BC66B4A2CA736C4D2B2(L_10, NULL);
	}

IL_0054:
	{
		// for (int i = 0; i < sceneCount; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < sceneCount; i++)
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002d;
		}
	}
	{
		// if (message != "BaseScene")
		String_t* L_15 = ___0_message;
		bool L_16;
		L_16 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_15, _stringLiteral88F649D45752B32D225DE99C3792DFEB7114D1BF, NULL);
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		// SceneManager.LoadScene(message, LoadSceneMode.Additive);
		String_t* L_17 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(L_17, 1, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void FGMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FGMessageManager__ctor_m65B37430241966C32E715783148DFE8A7717E766 (FGMessageManager_tF4F43DD6D9767CACECC9B8F46F22F1949DB3C838* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void FlutterUnityIntegration.NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m0C22011A2A0BD4DE3BA6D25D55126CCA9B6522C0 (String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnityMessage)(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_m5A002CE9FDEC524831006A40F5C4896FF66D13E4 (String_t* ___0_name, int32_t ___1_buildIndex, bool ___2_isLoaded, bool ___3_IsValid, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___0_name' to native representation
	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnitySceneLoaded)(____0_name_marshaled, ___1_buildIndex, static_cast<int32_t>(___2_isLoaded), static_cast<int32_t>(___3_IsValid));

	// Marshaling cleanup of parameter '___0_name' native representation
	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		// OnUnitySceneLoaded(scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		String_t* L_0;
		L_0 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___0_scene), NULL);
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&___0_scene), NULL);
		bool L_2;
		L_2 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&___0_scene), NULL);
		bool L_3;
		L_3 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&___0_scene), NULL);
		NativeAPI_OnUnitySceneLoaded_m5A002CE9FDEC524831006A40F5C4896FF66D13E4(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C (String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// OnUnityMessage(message);
		String_t* L_0 = ___0_message;
		NativeAPI_OnUnityMessage_m0C22011A2A0BD4DE3BA6D25D55126CCA9B6522C0(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_mA061363778EC083B262B2B1F2350ED7B9AE97AD9 (NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1* __this, const RuntimeMethod* method) 
{
	{
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
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// var m = JObject.Parse(message);
		String_t* L_0 = ___0_message;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_0, NULL);
		V_0 = L_1;
		// var handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_0;
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8(L_3, Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_5 = V_0;
		NullCheck(L_5);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_6, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8 = V_0;
		NullCheck(L_8);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_9, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11 = V_0;
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_13 = (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*)il2cpp_codegen_object_new(MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE(L_13, L_4, L_7, L_10, L_12, NULL);
		// return handler;
		return L_13;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___3_data, const RuntimeMethod* method) 
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		int32_t L_0 = ___0_id;
		__this->___id_0 = L_0;
		// this.seq = seq;
		String_t* L_1 = ___1_seq;
		__this->___seq_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seq_1), (void*)L_1);
		// this.name = name;
		String_t* L_2 = ___2_name;
		__this->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_2);
		// this.data = data;
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3 = ___3_data;
		__this->___data_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m46F4AB9D42028AEA5D5F11F6BB10B4490385E963 (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->___id_0;
		String_t* L_1 = __this->___name_2;
		RuntimeObject* L_2 = ___0_data;
		U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* L_3 = (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4;
		L_4 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_3, NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_5, L_8, NULL);
		// }
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
// System.Void FlutterUnityIntegration.UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_mDEC55E5CFC43BE8B679F2B49B6245BD6DD3DE9FC (UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* __this, const RuntimeMethod* method) 
{
	{
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
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		int32_t L_0 = ((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6;
		((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6;
		return L_1;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m72A64B53769F3968F62E977712541F3EB6700CBD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_1 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_2 = NULL;
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_2 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var));
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_6 = V_2;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_7 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_9 = V_0;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_9) == ((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_m7B30D079CD871DE3B1213E9E33179EEF595E48FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_1 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_2 = NULL;
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_2 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var));
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_6 = V_2;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_7 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_9 = V_0;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_9) == ((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_mA4F4A939F058D2172A994AA83878FC49F4A60D28 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_1 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_2 = NULL;
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_2 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7** L_5 = (&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_6 = V_2;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_7 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_9 = V_0;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_mE9773A6B3A6DEF366B0FA9668DAA27532C005925 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_1 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_2 = NULL;
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_2 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7** L_5 = (&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_6 = V_2;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_7 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_9 = V_0;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m513A44342D5A5336DB3BB0AD0501525BC0A4F63D (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___0_scene;
		int32_t L_1 = ___1_mode;
		NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_mDD2898A6D41376DEB7033193BD31AA946EEEF460 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m1EC3A84E3AD1C76D7915A5DD44597E60CB4CF1FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m15E0FC94CB42CDA85229509AD473E2BE0E27762F (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___0_message;
		NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(FlutterUnityIntegration.UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m5258B3CDED96288FA463D52AD7DF4D392674A5E0 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// var id = generateId();
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B(NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_1 = ___0_message;
		NullCheck(L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = L_1->___callBack_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_3 = __this->___waitCallbackMessageMap_9;
		int32_t L_4 = V_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_5 = ___0_message;
		NullCheck(L_3);
		Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC(L_3, L_4, L_5, Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var);
	}

IL_001b:
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_7 = ___0_message;
		NullCheck(L_7);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = L_7->___callBack_2;
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_9 = ___0_message;
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_11 = ___0_message;
		NullCheck(L_11);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_12 = L_11->___data_1;
		U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* L_13 = (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99(L_13, G_B5_1, G_B5_0, L_10, L_12, U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_14;
		L_14 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_13, NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_15, L_18, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_mA23F949C1E38D874363AF6EFC0B9D7F7ABC9BD19 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* G_B2_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* G_B1_0 = NULL;
	{
		// OnMessage?.Invoke(message);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___0_message;
		NullCheck(G_B2_0);
		MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m5075BDBB0B6A49C5FB47DFCAFD55D1267BF5E3B5 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* V_0 = NULL;
	UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B7_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* G_B11_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* G_B10_0 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___0_message;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___0_message;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		___0_message = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// var handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___0_message;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_5;
		L_5 = MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55(L_4, NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___seq_1;
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, NULL);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_9 = __this->___waitCallbackMessageMap_9;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___id_0;
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076(L_9, L_11, (&V_1), Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		return;
	}

IL_0051:
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_13 = __this->___waitCallbackMessageMap_9;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___id_0;
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB(L_13, L_15, Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var);
		// m.callBack?.Invoke(handler.getData<object>()); // todo
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_17 = V_1;
		NullCheck(L_17);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = L_17->___callBack_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = L_18;
		G_B7_0 = L_19;
		if (L_19)
		{
			G_B8_0 = L_19;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC(L_20, MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var);
		NullCheck(G_B8_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B8_0, L_21, NULL);
		// return;
		return;
	}

IL_007a:
	{
		// OnFlutterMessage?.Invoke(handler);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_22 = __this->___OnFlutterMessage_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_23 = L_22;
		G_B10_0 = L_23;
		if (L_23)
		{
			G_B11_0 = L_23;
			goto IL_0085;
		}
	}
	{
		return;
	}

IL_0085:
	{
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_24 = V_0;
		NullCheck(G_B11_0);
		MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline(G_B11_0, L_24, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m33386834F5F300E49185600FC190C57D3E9C0233 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_0 = (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*)il2cpp_codegen_object_new(Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9(L_0, Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var);
		__this->___waitCallbackMessageMap_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitCallbackMessageMap_9), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07(__this, SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var);
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
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_Multicast(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* currentDelegate = reinterpret_cast<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenInst(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStatic(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStaticInvoker(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_message);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_ClosedStaticInvoker(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_m1309BD3DE28E87C0CC24EB097613F916E8E4A1DB (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_Multicast;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_mBBFD55486390BFD20AD687A88C02D1C554C6A3E3 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m1C05B416E71A364B4560BA5085ECBBAF6BF87E97 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_Multicast(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* currentDelegate = reinterpret_cast<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_handler, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInst(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	typedef void (*FunctionPointerType) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_handler, method);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStatic(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_handler, method);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStaticInvoker(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	InvokerActionInvoker1< MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_ClosedStaticInvoker(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenVirtual(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInterface(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericVirtual(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	GenericVirtualActionInvoker0::Invoke(method, ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericInterface(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_handler);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m287CBD25D77011FC5A52D1090F6CC31353AB6364 (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_Multicast;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handler, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::BeginInvoke(FlutterUnityIntegration.MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m0CC5C5B29E11DD03F1726B49E4B1E516479AC58D (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_handler;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mAD2746E001DB9A3D18A1D806610542321FE0CF16 (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handler, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
