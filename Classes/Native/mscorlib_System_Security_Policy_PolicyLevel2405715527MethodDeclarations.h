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

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3529288303;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2378311282;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Reflection.Assembly
struct Assembly_t141003736;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_PolicyLevelType2580829573.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Reflection_Assembly141003736.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C"  void PolicyLevel__ctor_m4016051886 (PolicyLevel_t2405715527 * __this, String_t* ___label, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C"  void PolicyLevel_LoadFromFile_m2609176111 (PolicyLevel_t2405715527 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C"  SecurityElement_t2623103667 * PolicyLevel_FromString_m3622354478 (PolicyLevel_t2405715527 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyLevel_FromXml_m3103267607 (PolicyLevel_t2405715527 * __this, SecurityElement_t2623103667 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C"  NamedPermissionSet_t3529288303 * PolicyLevel_GetNamedPermissionSet_m303862399 (PolicyLevel_t2405715527 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t2378311282 * PolicyLevel_Resolve_m3623819288 (PolicyLevel_t2405715527 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C"  SecurityElement_t2623103667 * PolicyLevel_ToXml_m982032765 (PolicyLevel_t2405715527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C"  void PolicyLevel_Save_m4218523756 (PolicyLevel_t2405715527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C"  void PolicyLevel_CreateDefaultLevel_m3071557551 (PolicyLevel_t2405715527 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C"  void PolicyLevel_CreateDefaultFullTrustAssemblies_m2429779347 (PolicyLevel_t2405715527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C"  void PolicyLevel_CreateDefaultNamedPermissionSets_m1342504509 (PolicyLevel_t2405715527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C"  String_t* PolicyLevel_ResolveClassName_m3893481061 (PolicyLevel_t2405715527 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C"  bool PolicyLevel_IsFullTrustAssembly_m303163802 (PolicyLevel_t2405715527 * __this, Assembly_t141003736 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
