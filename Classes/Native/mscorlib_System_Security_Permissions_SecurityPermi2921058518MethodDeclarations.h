﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2921058518;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_SecurityPermi1006644722.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void SecurityPermission__ctor_m2647758977 (SecurityPermission_t2921058518 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C"  void SecurityPermission__ctor_m4280201110 (SecurityPermission_t2921058518 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C"  void SecurityPermission_set_Flags_m3897501266 (SecurityPermission_t2921058518 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C"  bool SecurityPermission_IsUnrestricted_m114549980 (SecurityPermission_t2921058518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Copy()
extern "C"  Il2CppObject * SecurityPermission_Copy_m3895182871 (SecurityPermission_t2921058518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * SecurityPermission_Intersect_m3571261540 (SecurityPermission_t2921058518 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.SecurityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * SecurityPermission_Union_m1741107198 (SecurityPermission_t2921058518 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool SecurityPermission_IsSubsetOf_m1087302418 (SecurityPermission_t2921058518 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void SecurityPermission_FromXml_m2552149020 (SecurityPermission_t2921058518 * __this, SecurityElement_t2623103667 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * SecurityPermission_ToXml_m2307599106 (SecurityPermission_t2921058518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C"  bool SecurityPermission_IsEmpty_m1869313067 (SecurityPermission_t2921058518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C"  SecurityPermission_t2921058518 * SecurityPermission_Cast_m807141983 (SecurityPermission_t2921058518 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
