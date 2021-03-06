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

// System.Security.Permissions.ReflectionPermission
struct ReflectionPermission_t688653073;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_ReflectionPerm923340559.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"

// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void ReflectionPermission__ctor_m348024504 (ReflectionPermission_t688653073 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.ReflectionPermissionFlag)
extern "C"  void ReflectionPermission__ctor_m2440356950 (ReflectionPermission_t688653073 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::get_Flags()
extern "C"  int32_t ReflectionPermission_get_Flags_m2546654261 (ReflectionPermission_t688653073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::set_Flags(System.Security.Permissions.ReflectionPermissionFlag)
extern "C"  void ReflectionPermission_set_Flags_m3811241042 (ReflectionPermission_t688653073 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Copy()
extern "C"  Il2CppObject * ReflectionPermission_Copy_m888412694 (ReflectionPermission_t688653073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ReflectionPermission_FromXml_m3665335477 (ReflectionPermission_t688653073 * __this, SecurityElement_t2623103667 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * ReflectionPermission_Intersect_m3406545219 (ReflectionPermission_t688653073 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ReflectionPermission_IsSubsetOf_m833440805 (ReflectionPermission_t688653073 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsUnrestricted()
extern "C"  bool ReflectionPermission_IsUnrestricted_m7741241 (ReflectionPermission_t688653073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ReflectionPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * ReflectionPermission_ToXml_m3264232363 (ReflectionPermission_t688653073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * ReflectionPermission_Union_m3306712837 (ReflectionPermission_t688653073 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermission System.Security.Permissions.ReflectionPermission::Cast(System.Security.IPermission)
extern "C"  ReflectionPermission_t688653073 * ReflectionPermission_Cast_m1712707075 (ReflectionPermission_t688653073 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
