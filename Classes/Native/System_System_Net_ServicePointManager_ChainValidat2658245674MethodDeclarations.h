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

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t2658245674;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t750127348;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1416839208;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3653580638;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077789;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo1157533550.h"
#include "System_System_Security_Cryptography_X509Certificat1416839208.h"
#include "System_System_Net_Security_SslPolicyErrors2347475853.h"
#include "System_System_Security_Cryptography_X509Certificat3653580638.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate4061077788.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C"  void ChainValidationHelper__ctor_m383905695 (ChainValidationHelper_t2658245674 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C"  void ChainValidationHelper__cctor_m2829708252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C"  String_t* ChainValidationHelper_get_Host_m2966189161 (ChainValidationHelper_t2658245674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t750127348 * ChainValidationHelper_ValidateChain_m2891897375 (ChainValidationHelper_t2658245674 * __this, X509CertificateCollection_t1157533551 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  int32_t ChainValidationHelper_GetStatusFromChain_m3385791814 (Il2CppObject * __this /* static, unused */, X509Chain_t1416839208 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  int32_t ChainValidationHelper_GetErrorsFromChain_m1054613167 (Il2CppObject * __this /* static, unused */, X509Chain_t1416839208 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool ChainValidationHelper_CheckCertificateUsage_m3045989123 (Il2CppObject * __this /* static, unused */, X509Certificate2_t3653580638 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C"  bool ChainValidationHelper_CheckServerIdentity_m3917137456 (Il2CppObject * __this /* static, unused */, X509Certificate_t4061077789 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C"  bool ChainValidationHelper_CheckDomainName_m967333392 (Il2CppObject * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C"  bool ChainValidationHelper_Match_m893347302 (Il2CppObject * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
