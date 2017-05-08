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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t512298711;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalCertificateSelectionCallback__ctor_m3518900705 (LocalCertificateSelectionCallback_t512298711 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t1429855556 * LocalCertificateSelectionCallback_Invoke_m2908082640 (LocalCertificateSelectionCallback_t512298711 * __this, Il2CppObject * ___sender, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___localCertificates, X509Certificate_t1429855556 * ___remoteCertificate, StringU5BU5D_t3764931161* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t1429855556 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t512298711(Il2CppObject* delegate, Il2CppObject * ___sender, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___localCertificates, X509Certificate_t1429855556 * ___remoteCertificate, StringU5BU5D_t3764931161* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LocalCertificateSelectionCallback_BeginInvoke_m2931049388 (LocalCertificateSelectionCallback_t512298711 * __this, Il2CppObject * ___sender, String_t* ___targetHost, X509CertificateCollection_t2821278614 * ___localCertificates, X509Certificate_t1429855556 * ___remoteCertificate, StringU5BU5D_t3764931161* ___acceptableIssuers, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t1429855556 * LocalCertificateSelectionCallback_EndInvoke_m3245477004 (LocalCertificateSelectionCallback_t512298711 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
