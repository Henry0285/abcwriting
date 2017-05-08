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

// System.Security.Permissions.StrongNameIdentityPermission
struct StrongNameIdentityPermission_t1829929934;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2247038062;
// System.String
struct String_t;
// System.Version
struct Version_t2956351477;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2247038062.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Version2956351477.h"
#include "mscorlib_System_Security_Permissions_StrongNameIde1829929934.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Permissions_StrongNameIde3926257392.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void StrongNameIdentityPermission__ctor_m187822057 (StrongNameIdentityPermission_t1829929934 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameIdentityPermission__ctor_m1030709403 (StrongNameIdentityPermission_t1829929934 * __this, StrongNamePublicKeyBlob_t2247038062 * ___blob, String_t* ___name, Version_t2956351477 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNameIdentityPermission)
extern "C"  void StrongNameIdentityPermission__ctor_m2269785344 (StrongNameIdentityPermission_t1829929934 * __this, StrongNameIdentityPermission_t1829929934 * ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.cctor()
extern "C"  void StrongNameIdentityPermission__cctor_m3618080291 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNameIdentityPermission::get_Name()
extern "C"  String_t* StrongNameIdentityPermission_get_Name_m965408607 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2247038062 * StrongNameIdentityPermission_get_PublicKey_m4040624160 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Permissions.StrongNameIdentityPermission::get_Version()
extern "C"  Version_t2956351477 * StrongNameIdentityPermission_get_Version_m1351965085 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Copy()
extern "C"  Il2CppObject * StrongNameIdentityPermission_Copy_m4058082155 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameIdentityPermission_FromXml_m1767543284 (StrongNameIdentityPermission_t1829929934 * __this, SecurityElement_t2623103667 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission::FromSecurityElement(System.Security.SecurityElement)
extern "C"  SNIP_t3926257392  StrongNameIdentityPermission_FromSecurityElement_m3321721849 (StrongNameIdentityPermission_t1829929934 * __this, SecurityElement_t2623103667 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * StrongNameIdentityPermission_Intersect_m766169000 (StrongNameIdentityPermission_t1829929934 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool StrongNameIdentityPermission_IsSubsetOf_m904503354 (StrongNameIdentityPermission_t1829929934 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.StrongNameIdentityPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * StrongNameIdentityPermission_ToXml_m3706349526 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::ToSecurityElement(System.Security.SecurityElement,System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  void StrongNameIdentityPermission_ToSecurityElement_m358177375 (StrongNameIdentityPermission_t1829929934 * __this, SecurityElement_t2623103667 * ___se, SNIP_t3926257392  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * StrongNameIdentityPermission_Union_m2967786606 (StrongNameIdentityPermission_t1829929934 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsUnrestricted()
extern "C"  bool StrongNameIdentityPermission_IsUnrestricted_m938502364 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Contains(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_Contains_m4122047764 (StrongNameIdentityPermission_t1829929934 * __this, SNIP_t3926257392  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m304024982 (StrongNameIdentityPermission_t1829929934 * __this, SNIP_t3926257392  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty()
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m1579653063 (StrongNameIdentityPermission_t1829929934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission System.Security.Permissions.StrongNameIdentityPermission::Cast(System.Security.IPermission)
extern "C"  StrongNameIdentityPermission_t1829929934 * StrongNameIdentityPermission_Cast_m1969513967 (StrongNameIdentityPermission_t1829929934 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Match(System.String)
extern "C"  bool StrongNameIdentityPermission_Match_m3346288909 (StrongNameIdentityPermission_t1829929934 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
