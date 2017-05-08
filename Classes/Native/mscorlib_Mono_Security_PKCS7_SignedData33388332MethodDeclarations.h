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

// Mono.Security.PKCS7/SignedData
struct SignedData_t33388332;
// Mono.Security.ASN1
struct ASN1_t2605720234;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533550;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t837233981;
// System.String
struct String_t;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t3333122010;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN12605720234.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
extern "C"  void SignedData__ctor_m2823395776 (SignedData_t33388332 * __this, ASN1_t2605720234 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
extern "C"  X509CertificateCollection_t1157533550 * SignedData_get_Certificates_m1609019514 (SignedData_t33388332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
extern "C"  ContentInfo_t837233981 * SignedData_get_ContentInfo_m1343188732 (SignedData_t33388332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignedData::set_HashName(System.String)
extern "C"  void SignedData_set_HashName_m1215449070 (SignedData_t33388332 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
extern "C"  SignerInfo_t3333122010 * SignedData_get_SignerInfo_m3146689246 (SignedData_t33388332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignedData::OidToName(System.String)
extern "C"  String_t* SignedData_OidToName_m3027901413 (SignedData_t33388332 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
