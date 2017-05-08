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

// System.Security.IPermission
struct IPermission_t2506060457;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Security.PermissionBuilder::.cctor()
extern "C"  void PermissionBuilder__cctor_m4211719202 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.Permissions.PermissionState)
extern "C"  Il2CppObject * PermissionBuilder_Create_m2085370112 (Il2CppObject * __this /* static, unused */, String_t* ___fullname, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_Create_m4163673188 (Il2CppObject * __this /* static, unused */, SecurityElement_t2623103667 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_Create_m1633853692 (Il2CppObject * __this /* static, unused */, String_t* ___fullname, SecurityElement_t2623103667 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Type)
extern "C"  Il2CppObject * PermissionBuilder_Create_m3724973246 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::CreatePermission(System.String,System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_CreatePermission_m2550422833 (Il2CppObject * __this /* static, unused */, String_t* ___fullname, SecurityElement_t2623103667 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
