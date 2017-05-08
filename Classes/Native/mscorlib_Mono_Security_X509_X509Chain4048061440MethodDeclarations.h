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

// Mono.Security.X509.X509Chain
struct X509Chain_t4048061440;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533550;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077788;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_X509_X509CertificateCollect1157533550.h"
#include "mscorlib_Mono_Security_X509_X509Certificate4061077788.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m3819457830 (X509Chain_t4048061440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t1157533550 * X509Chain_get_TrustAnchors_m3673637552 (X509Chain_t4048061440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain_LoadCertificates_m2048974896 (X509Chain_t4048061440 * __this, X509CertificateCollection_t1157533550 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m3597492778 (X509Chain_t4048061440 * __this, X509Certificate_t4061077788 * ___leaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m2833056363 (X509Chain_t4048061440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m1490186796 (X509Chain_t4048061440 * __this, X509Certificate_t4061077788 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t4061077788 * X509Chain_FindCertificateParent_m1709041205 (X509Chain_t4048061440 * __this, X509Certificate_t4061077788 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t4061077788 * X509Chain_FindCertificateRoot_m4034911679 (X509Chain_t4048061440 * __this, X509Certificate_t4061077788 * ___potentialRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m572580563 (X509Chain_t4048061440 * __this, X509Certificate_t4061077788 * ___potentialTrusted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m591885742 (X509Chain_t4048061440 * __this, X509Certificate_t4061077788 * ___child, X509Certificate_t4061077788 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
