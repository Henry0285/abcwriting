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

// System.Net.HttpWebRequest
struct HttpWebRequest_t3205926943;
// System.Uri
struct Uri_t3338506287;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.Net.ICredentials
struct ICredentials_t833078195;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t2540215827;
// System.Net.ServicePoint
struct ServicePoint_t3647242307;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1740857185;
// System.Net.WebAsyncResult
struct WebAsyncResult_t2405292317;
// System.Exception
struct Exception_t1145979430;
// System.Net.WebConnectionStream
struct WebConnectionStream_t1327986634;
// System.Net.WebConnectionData
struct WebConnectionData_t4213915846;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "System_System_Net_DecompressionMethods1592164913.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "System_System_Net_WebHeaderCollection541997719.h"
#include "System_System_Net_WebAsyncResult2405292317.h"
#include "System_System_Net_HttpStatusCode2331811859.h"
#include "System_System_Net_WebExceptionStatus3956450365.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_System_Net_WebConnectionStream1327986634.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Net_WebConnectionData4213915846.h"
#include "System_System_Net_WebResponse1740857185.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m3872859964 (HttpWebRequest_t3205926943 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1248252412 (HttpWebRequest_t3205926943 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m3013631978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3671622902 (HttpWebRequest_t3205926943 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t3338506287 * HttpWebRequest_get_Address_m118358390 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C"  int32_t HttpWebRequest_get_AutomaticDecompression_m1315413034 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C"  bool HttpWebRequest_get_InternalAllowBuffering_m4029180298 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C"  X509CertificateCollection_t2821278614 * HttpWebRequest_get_ClientCertificates_m211130650 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C"  int64_t HttpWebRequest_get_ContentLength_m2183698788 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C"  void HttpWebRequest_set_InternalContentLength_m534457654 (HttpWebRequest_t3205926943 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C"  Il2CppObject * HttpWebRequest_get_Credentials_m3753659148 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void HttpWebRequest_set_Credentials_m3680668843 (HttpWebRequest_t3205926943 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t541997719 * HttpWebRequest_get_Headers_m2346817200 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C"  bool HttpWebRequest_get_KeepAlive_m1340559842 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t HttpWebRequest_get_ReadWriteTimeout_m2226574868 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C"  String_t* HttpWebRequest_get_Method_m305529728 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C"  Il2CppObject * HttpWebRequest_get_Proxy_m3973771312 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C"  Uri_t3338506287 * HttpWebRequest_get_RequestUri_m458351293 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C"  bool HttpWebRequest_get_SendChunked_m2061793458 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t3647242307 * HttpWebRequest_get_ServicePoint_m424340275 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C"  String_t* HttpWebRequest_get_TransferEncoding_m3466636497 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m2150911897 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C"  bool HttpWebRequest_get_ExpectContinue_m705519218 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C"  void HttpWebRequest_set_ExpectContinue_m2674507305 (HttpWebRequest_t3205926943 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C"  bool HttpWebRequest_get_ProxyQuery_m343708170 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t3647242307 * HttpWebRequest_GetServicePoint_m560807134 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C"  void HttpWebRequest_CheckIfForceWrite_m3288670714 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpWebRequest_BeginGetResponse_m3845297507 (HttpWebRequest_t3205926943 * __this, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1740857185 * HttpWebRequest_EndGetResponse_m2310834408 (HttpWebRequest_t3205926943 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C"  WebResponse_t1740857185 * HttpWebRequest_GetResponse_m3643964764 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C"  bool HttpWebRequest_get_FinishedReading_m3120232566 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C"  void HttpWebRequest_set_FinishedReading_m2845978635 (HttpWebRequest_t3205926943 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C"  bool HttpWebRequest_get_Aborted_m837349671 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C"  void HttpWebRequest_Abort_m3613087047 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m1200570677 (HttpWebRequest_t3205926943 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpWebRequest_DoContinueDelegate_m22231078 (HttpWebRequest_t3205926943 * __this, int32_t ___statusCode, WebHeaderCollection_t541997719 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_Redirect_m1867273753 (HttpWebRequest_t3205926943 * __this, WebAsyncResult_t2405292317 * ___result, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C"  String_t* HttpWebRequest_GetHeaders_m3197447662 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C"  void HttpWebRequest_DoPreAuthenticate_m2304545784 (HttpWebRequest_t3205926943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C"  void HttpWebRequest_SetWriteStreamError_m2032733103 (HttpWebRequest_t3205926943 * __this, int32_t ___status, Exception_t1145979430 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C"  void HttpWebRequest_SendRequestHeaders_m97433431 (HttpWebRequest_t3205926943 * __this, bool ___propagate_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C"  void HttpWebRequest_SetWriteStream_m2523301716 (HttpWebRequest_t3205926943 * __this, WebConnectionStream_t1327986634 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void HttpWebRequest_SetResponseError_m1533253571 (HttpWebRequest_t3205926943 * __this, int32_t ___status, Exception_t1145979430 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_CheckSendError_m3735410291 (HttpWebRequest_t3205926943 * __this, WebConnectionData_t4213915846 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C"  void HttpWebRequest_HandleNtlmAuth_m3359114285 (HttpWebRequest_t3205926943 * __this, WebAsyncResult_t2405292317 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_SetResponseData_m581390180 (HttpWebRequest_t3205926943 * __this, WebConnectionData_t4213915846 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_CheckAuthorization_m350356356 (HttpWebRequest_t3205926943 * __this, WebResponse_t1740857185 * ___response, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C"  bool HttpWebRequest_CheckFinalStatus_m3438683118 (HttpWebRequest_t3205926943 * __this, WebAsyncResult_t2405292317 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
