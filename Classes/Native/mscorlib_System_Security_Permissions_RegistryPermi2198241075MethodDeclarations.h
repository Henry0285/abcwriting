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

// System.Security.Permissions.RegistryPermission
struct RegistryPermission_t2198241075;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Collections.IList
struct IList_t2346154967;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_RegistryPermi1083938253.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void System.Security.Permissions.RegistryPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void RegistryPermission__ctor_m1290311946 (RegistryPermission_t2198241075 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C"  void RegistryPermission_AddPathList_m1883871814 (RegistryPermission_t2198241075 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Security.Permissions.RegistryPermissionAccess)
extern "C"  String_t* RegistryPermission_GetPathList_m2457794834 (RegistryPermission_t2198241075 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::SetPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C"  void RegistryPermission_SetPathList_m1745269947 (RegistryPermission_t2198241075 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Copy()
extern "C"  Il2CppObject * RegistryPermission_Copy_m3990506316 (RegistryPermission_t2198241075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::FromXml(System.Security.SecurityElement)
extern "C"  void RegistryPermission_FromXml_m45095667 (RegistryPermission_t2198241075 * __this, SecurityElement_t2623103667 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * RegistryPermission_Intersect_m1734157549 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool RegistryPermission_IsSubsetOf_m3243372203 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsUnrestricted()
extern "C"  bool RegistryPermission_IsUnrestricted_m554746079 (RegistryPermission_t2198241075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.RegistryPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * RegistryPermission_ToXml_m160628985 (RegistryPermission_t2198241075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * RegistryPermission_Union_m1362455111 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsEmpty()
extern "C"  bool RegistryPermission_IsEmpty_m107477614 (RegistryPermission_t2198241075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.RegistryPermission System.Security.Permissions.RegistryPermission::Cast(System.Security.IPermission)
extern "C"  RegistryPermission_t2198241075 * RegistryPermission_Cast_m3611585979 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::ThrowInvalidFlag(System.Security.Permissions.RegistryPermissionAccess,System.Boolean)
extern "C"  void RegistryPermission_ThrowInvalidFlag_m2659713362 (RegistryPermission_t2198241075 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Collections.ArrayList)
extern "C"  String_t* RegistryPermission_GetPathList_m813565476 (RegistryPermission_t2198241075 * __this, ArrayList_t1468494371 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C"  bool RegistryPermission_KeyIsSubsetOf_m3631046285 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___local, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddWithUnionKey(System.Collections.IList,System.String)
extern "C"  void RegistryPermission_AddWithUnionKey_m1196516941 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___list, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C"  void RegistryPermission_IntersectKeys_m3180640745 (RegistryPermission_t2198241075 * __this, Il2CppObject * ___local, Il2CppObject * ___target, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
