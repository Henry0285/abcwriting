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

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t1238747376;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3752677216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith3752677216.h"

// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
extern "C"  void AuthenticodeBase__ctor_m2619404988 (AuthenticodeBase_t1238747376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
extern "C"  int32_t AuthenticodeBase_get_PEOffset_m2227434753 (AuthenticodeBase_t1238747376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
extern "C"  void AuthenticodeBase_Open_m1005778380 (AuthenticodeBase_t1238747376 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
extern "C"  void AuthenticodeBase_Close_m3389478704 (AuthenticodeBase_t1238747376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
extern "C"  bool AuthenticodeBase_ReadFirstBlock_m810864283 (AuthenticodeBase_t1238747376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
extern "C"  ByteU5BU5D_t3835026402* AuthenticodeBase_GetSecurityEntry_m2086284884 (AuthenticodeBase_t1238747376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
extern "C"  ByteU5BU5D_t3835026402* AuthenticodeBase_GetHash_m2866089926 (AuthenticodeBase_t1238747376 * __this, HashAlgorithm_t3752677216 * ___hash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
