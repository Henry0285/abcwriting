#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.WebRequest
struct WebRequest_t1478397231;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Exception
struct Exception_t1145979430;
// System.Net.ICredentials
struct ICredentials_t833078195;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t2540215827;
// System.Uri
struct Uri_t3338506287;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1740857185;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t818800212;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C"  void WebRequest__ctor_m2841187593 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest__ctor_m1537196628 (WebRequest_t1478397231 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C"  void WebRequest__cctor_m3509849914 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3377822910 (WebRequest_t1478397231 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C"  Exception_t1145979430 * WebRequest_GetMustImplement_m2014409540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C"  int64_t WebRequest_get_ContentLength_m958359132 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C"  Il2CppObject * WebRequest_get_Credentials_m2648907180 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void WebRequest_set_Credentials_m1156339835 (WebRequest_t1478397231 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C"  WebHeaderCollection_t541997719 * WebRequest_get_Headers_m4285955368 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C"  String_t* WebRequest_get_Method_m3935889216 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C"  Il2CppObject * WebRequest_get_Proxy_m2184384304 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C"  Uri_t3338506287 * WebRequest_get_RequestUri_m10278461 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C"  Il2CppObject * WebRequest_get_DefaultWebProxy_m741473019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C"  Il2CppObject * WebRequest_GetDefaultWebProxy_m1479642708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C"  void WebRequest_Abort_m1466873215 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebRequest_BeginGetResponse_m1390960979 (WebRequest_t1478397231 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t1478397231 * WebRequest_Create_m3200133307 (Il2CppObject * __this /* static, unused */, Uri_t3338506287 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1740857185 * WebRequest_EndGetResponse_m179948544 (WebRequest_t1478397231 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C"  WebResponse_t1740857185 * WebRequest_GetResponse_m665752724 (WebRequest_t1478397231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetSystemWebProxy()
extern "C"  Il2CppObject * WebRequest_GetSystemWebProxy_m3323898568 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_GetObjectData_m2022281397 (WebRequest_t1478397231 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C"  Il2CppObject * WebRequest_GetCreator_m4229310124 (Il2CppObject * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::ClearPrefixes()
extern "C"  void WebRequest_ClearPrefixes_m3581779138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::RemovePrefix(System.String)
extern "C"  void WebRequest_RemovePrefix_m566183241 (Il2CppObject * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.String)
extern "C"  void WebRequest_AddPrefix_m3780960358 (Il2CppObject * __this /* static, unused */, String_t* ___prefix, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C"  void WebRequest_AddPrefix_m3456797905 (Il2CppObject * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
