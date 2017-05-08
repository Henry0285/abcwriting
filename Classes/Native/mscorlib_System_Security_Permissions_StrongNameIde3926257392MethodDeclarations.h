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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2247038062;
// System.String
struct String_t;
// System.Version
struct Version_t2956351477;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNameIde3926257392.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2247038062.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Version2956351477.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission/SNIP::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void SNIP__ctor_m1818038516 (SNIP_t3926257392 * __this, StrongNamePublicKeyBlob_t2247038062 * ___pk, String_t* ___name, Version_t2956351477 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission/SNIP::CreateDefault()
extern "C"  SNIP_t3926257392  SNIP_CreateDefault_m2910580750 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsNameSubsetOf(System.String)
extern "C"  bool SNIP_IsNameSubsetOf_m2680140283 (SNIP_t3926257392 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsSubsetOf(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool SNIP_IsSubsetOf_m1312559857 (SNIP_t3926257392 * __this, SNIP_t3926257392  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
