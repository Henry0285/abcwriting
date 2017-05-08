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

// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3529288303;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_NamedPermissionSet3529288303.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.NamedPermissionSet::.ctor()
extern "C"  void NamedPermissionSet__ctor_m1942136181 (NamedPermissionSet_t3529288303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.String,System.Security.Permissions.PermissionState)
extern "C"  void NamedPermissionSet__ctor_m3597060186 (NamedPermissionSet_t3529288303 * __this, String_t* ___name, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.Security.NamedPermissionSet)
extern "C"  void NamedPermissionSet__ctor_m3440182560 (NamedPermissionSet_t3529288303 * __this, NamedPermissionSet_t3529288303 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.NamedPermissionSet::get_Name()
extern "C"  String_t* NamedPermissionSet_get_Name_m638787712 (NamedPermissionSet_t3529288303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::set_Name(System.String)
extern "C"  void NamedPermissionSet_set_Name_m2838296237 (NamedPermissionSet_t3529288303 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.NamedPermissionSet::Copy()
extern "C"  PermissionSet_t20502880 * NamedPermissionSet_Copy_m2397189205 (NamedPermissionSet_t3529288303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void NamedPermissionSet_FromXml_m489048261 (NamedPermissionSet_t3529288303 * __this, SecurityElement_t2623103667 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.NamedPermissionSet::ToXml()
extern "C"  SecurityElement_t2623103667 * NamedPermissionSet_ToXml_m3904841935 (NamedPermissionSet_t3529288303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.NamedPermissionSet::Equals(System.Object)
extern "C"  bool NamedPermissionSet_Equals_m382040646 (NamedPermissionSet_t3529288303 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.NamedPermissionSet::GetHashCode()
extern "C"  int32_t NamedPermissionSet_GetHashCode_m55865882 (NamedPermissionSet_t3529288303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
