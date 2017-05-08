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

// System.Net.Security.SslStream
struct SslStream_t3807151162;
// System.IO.Stream
struct Stream_t2768948945;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1330171101;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t512298711;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "System_System_Net_Security_RemoteCertificateValida1330171101.h"
#include "System_System_Net_Security_LocalCertificateSelectio512298711.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Security_Authentication_SslProtocols1956534754.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4187179796.h"
#include "mscorlib_System_IO_SeekOrigin951763547.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void SslStream__ctor_m2229021900 (SslStream_t3807151162 * __this, Stream_t2768948945 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t1330171101 * ___certValidationCallback, LocalCertificateSelectionCallback_t512298711 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C"  bool SslStream_get_CanRead_m3426417663 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C"  bool SslStream_get_CanSeek_m1679024821 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C"  bool SslStream_get_CanWrite_m1017625670 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C"  int64_t SslStream_get_Length_m699828492 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C"  int64_t SslStream_get_Position_m1728202797 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C"  void SslStream_set_Position_m275805728 (SslStream_t3807151162 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C"  bool SslStream_get_IsAuthenticated_m960250388 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C"  int32_t SslStream_get_ReadTimeout_m1491460168 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C"  int32_t SslStream_get_WriteTimeout_m775746409 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1429855556 * SslStream_OnCertificateSelection_m1047859653 (SslStream_t3807151162 * __this, X509CertificateCollection_t2821278614 * ___clientCerts, X509Certificate_t1429855556 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginAuthenticateAsClient_m2867913112 (SslStream_t3807151162 * __this, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t889871978 * ___asyncCallback, Il2CppObject * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginRead_m1539657028 (SslStream_t3807151162 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t889871978 * ___asyncCallback, Il2CppObject * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C"  int32_t SslStream_GetMonoSslProtocol_m2874631918 (SslStream_t3807151162 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStream_BeginWrite_m393680249 (SslStream_t3807151162 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t889871978 * ___asyncCallback, Il2CppObject * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslStream_AuthenticateAsClient_m2196387551 (SslStream_t3807151162 * __this, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C"  void SslStream_Dispose_m2889656292 (SslStream_t3807151162 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C"  void SslStream_EndAuthenticateAsClient_m2927961136 (SslStream_t3807151162 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStream_EndRead_m2850086626 (SslStream_t3807151162 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C"  void SslStream_EndWrite_m2132566783 (SslStream_t3807151162 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C"  void SslStream_Flush_m2636068138 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStream_Read_m3532408023 (SslStream_t3807151162 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStream_Seek_m2078978204 (SslStream_t3807151162 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C"  void SslStream_SetLength_m2390814652 (SslStream_t3807151162 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStream_Write_m2514765412 (SslStream_t3807151162 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C"  void SslStream_CheckConnectionAuthenticated_m3896508241 (SslStream_t3807151162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
