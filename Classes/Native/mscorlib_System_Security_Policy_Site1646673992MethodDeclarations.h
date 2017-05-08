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

// System.Security.Policy.Site
struct Site_t1646673992;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.Policy.Site::.ctor(System.String)
extern "C"  void Site__ctor_m2411705510 (Site_t1646673992 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Site System.Security.Policy.Site::CreateFromUrl(System.String)
extern "C"  Site_t1646673992 * Site_CreateFromUrl_m186416276 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Site::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Site_CreateIdentityPermission_m3913039123 (Site_t1646673992 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::Equals(System.Object)
extern "C"  bool Site_Equals_m1328088847 (Site_t1646673992 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Site::GetHashCode()
extern "C"  int32_t Site_GetHashCode_m3991423249 (Site_t1646673992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::ToString()
extern "C"  String_t* Site_ToString_m2018383745 (Site_t1646673992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::get_Name()
extern "C"  String_t* Site_get_Name_m976887625 (Site_t1646673992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::IsValid(System.String)
extern "C"  bool Site_IsValid_m2761509348 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::UrlToSite(System.String)
extern "C"  String_t* Site_UrlToSite_m1601068948 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
