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

// System.Security.Permissions.UrlIdentityPermission
struct UrlIdentityPermission_t45206603;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"

// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void UrlIdentityPermission__ctor_m539553458 (UrlIdentityPermission_t45206603 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.String)
extern "C"  void UrlIdentityPermission__ctor_m1548248837 (UrlIdentityPermission_t45206603 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::set_Url(System.String)
extern "C"  void UrlIdentityPermission_set_Url_m1311163875 (UrlIdentityPermission_t45206603 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Copy()
extern "C"  Il2CppObject * UrlIdentityPermission_Copy_m2964323524 (UrlIdentityPermission_t45206603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void UrlIdentityPermission_FromXml_m605537743 (UrlIdentityPermission_t45206603 * __this, SecurityElement_t2623103667 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * UrlIdentityPermission_Intersect_m412270865 (UrlIdentityPermission_t45206603 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool UrlIdentityPermission_IsSubsetOf_m486299159 (UrlIdentityPermission_t45206603 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UrlIdentityPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * UrlIdentityPermission_ToXml_m3701653449 (UrlIdentityPermission_t45206603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * UrlIdentityPermission_Union_m303663659 (UrlIdentityPermission_t45206603 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsEmpty()
extern "C"  bool UrlIdentityPermission_IsEmpty_m1716094610 (UrlIdentityPermission_t45206603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UrlIdentityPermission System.Security.Permissions.UrlIdentityPermission::Cast(System.Security.IPermission)
extern "C"  UrlIdentityPermission_t45206603 * UrlIdentityPermission_Cast_m406659727 (UrlIdentityPermission_t45206603 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::Match(System.String)
extern "C"  bool UrlIdentityPermission_Match_m3053276920 (UrlIdentityPermission_t45206603 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
