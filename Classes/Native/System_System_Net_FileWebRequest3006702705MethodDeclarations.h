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

// System.Net.FileWebRequest
struct FileWebRequest_t3006702705;
// System.Uri
struct Uri_t3338506287;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Net.ICredentials
struct ICredentials_t833078195;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t2540215827;
// System.Exception
struct Exception_t1145979430;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1740857185;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C"  void FileWebRequest__ctor_m4207307562 (FileWebRequest_t3006702705 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest__ctor_m4003648606 (FileWebRequest_t3006702705 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m986334728 (FileWebRequest_t3006702705 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C"  int64_t FileWebRequest_get_ContentLength_m1842929418 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C"  Il2CppObject * FileWebRequest_get_Credentials_m1452733518 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FileWebRequest_set_Credentials_m2172997741 (FileWebRequest_t3006702705 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t541997719 * FileWebRequest_get_Headers_m580634498 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C"  String_t* FileWebRequest_get_Method_m3138344294 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C"  Il2CppObject * FileWebRequest_get_Proxy_m1638359118 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C"  Uri_t3338506287 * FileWebRequest_get_RequestUri_m983137131 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C"  Exception_t1145979430 * FileWebRequest_GetMustImplement_m698617862 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C"  void FileWebRequest_Abort_m2554867697 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileWebRequest_BeginGetResponse_m1636822097 (FileWebRequest_t3006702705 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1740857185 * FileWebRequest_EndGetResponse_m1504401314 (FileWebRequest_t3006702705 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C"  WebResponse_t1740857185 * FileWebRequest_GetResponse_m1845449278 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C"  WebResponse_t1740857185 * FileWebRequest_GetResponseInternal_m2323755527 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_GetObjectData_m3667486695 (FileWebRequest_t3006702705 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C"  void FileWebRequest_Close_m1199532357 (FileWebRequest_t3006702705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
