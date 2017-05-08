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

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t905466020;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4061077788;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Security.PKCS7/SignedData
struct SignedData_t33388332;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3752677216;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t3333122010;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_Mono_Security_X509_X509Certificate4061077788.h"
#include "mscorlib_Mono_Security_PKCS7_SignedData33388332.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith3752677216.h"
#include "mscorlib_Mono_Security_PKCS7_SignerInfo3333122010.h"

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C"  void AuthenticodeDeformatter__ctor_m3488478874 (AuthenticodeDeformatter_t905466020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C"  void AuthenticodeDeformatter__ctor_m2003177880 (AuthenticodeDeformatter_t905466020 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C"  void AuthenticodeDeformatter_set_FileName_m3928259686 (AuthenticodeDeformatter_t905466020 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C"  X509Certificate_t4061077788 * AuthenticodeDeformatter_get_SigningCertificate_m1585154734 (AuthenticodeDeformatter_t905466020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C"  bool AuthenticodeDeformatter_CheckSignature_m3044613536 (AuthenticodeDeformatter_t905466020 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C"  bool AuthenticodeDeformatter_CompareIssuerSerial_m3532686177 (AuthenticodeDeformatter_t905466020 * __this, String_t* ___issuer, ByteU5BU5D_t3835026402* ___serial, X509Certificate_t4061077788 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C"  bool AuthenticodeDeformatter_VerifySignature_m2341869550 (AuthenticodeDeformatter_t905466020 * __this, SignedData_t33388332 * ___sd, ByteU5BU5D_t3835026402* ___calculatedMessageDigest, HashAlgorithm_t3752677216 * ___ha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C"  bool AuthenticodeDeformatter_VerifyCounterSignature_m1893533540 (AuthenticodeDeformatter_t905466020 * __this, SignerInfo_t3333122010 * ___cs, ByteU5BU5D_t3835026402* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C"  void AuthenticodeDeformatter_Reset_m4180233591 (AuthenticodeDeformatter_t905466020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
