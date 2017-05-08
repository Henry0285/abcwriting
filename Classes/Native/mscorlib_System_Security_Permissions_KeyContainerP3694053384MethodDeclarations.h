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

// System.Security.Permissions.KeyContainerPermission
struct KeyContainerPermission_t3694053384;
// System.Security.Permissions.KeyContainerPermissionAccessEntry[]
struct KeyContainerPermissionAccessEntryU5BU5D_t1799741717;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_KeyContainerP4194819387.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"

// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void KeyContainerPermission__ctor_m1454994059 (KeyContainerPermission_t3694053384 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission__ctor_m2127660491 (KeyContainerPermission_t3694053384 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags,System.Security.Permissions.KeyContainerPermissionAccessEntry[])
extern "C"  void KeyContainerPermission__ctor_m1492422707 (KeyContainerPermission_t3694053384 * __this, int32_t ___flags, KeyContainerPermissionAccessEntryU5BU5D_t1799741717* ___accessList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Copy()
extern "C"  Il2CppObject * KeyContainerPermission_Copy_m4281063797 (KeyContainerPermission_t3694053384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::FromXml(System.Security.SecurityElement)
extern "C"  void KeyContainerPermission_FromXml_m652965212 (KeyContainerPermission_t3694053384 * __this, SecurityElement_t2623103667 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * KeyContainerPermission_Intersect_m4090042412 (KeyContainerPermission_t3694053384 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool KeyContainerPermission_IsSubsetOf_m2079747774 (KeyContainerPermission_t3694053384 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsUnrestricted()
extern "C"  bool KeyContainerPermission_IsUnrestricted_m2478546348 (KeyContainerPermission_t3694053384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.KeyContainerPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * KeyContainerPermission_ToXml_m657508794 (KeyContainerPermission_t3694053384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * KeyContainerPermission_Union_m3990445094 (KeyContainerPermission_t3694053384 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::SetFlags(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission_SetFlags_m138120612 (KeyContainerPermission_t3694053384 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermission System.Security.Permissions.KeyContainerPermission::Cast(System.Security.IPermission)
extern "C"  KeyContainerPermission_t3694053384 * KeyContainerPermission_Cast_m378630887 (KeyContainerPermission_t3694053384 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
