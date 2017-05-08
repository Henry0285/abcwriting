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

// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t3193967118;
// System.String
struct String_t;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3529288303;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Policy_DefaultPolicies_Ke2293551073.h"

// System.Void System.Security.Policy.DefaultPolicies::.cctor()
extern "C"  void DefaultPolicies__cctor_m1520033919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_FullTrust()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_FullTrust_m2321075171 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_LocalIntranet()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_LocalIntranet_m917665752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Internet()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_Internet_m2662194351 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_SkipVerification()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_SkipVerification_m22150790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Execution()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_Execution_m3690761490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Nothing()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_Nothing_m2318328717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Everything()
extern "C"  PermissionSet_t20502880 * DefaultPolicies_get_Everything_m1343364285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.StrongNameMembershipCondition System.Security.Policy.DefaultPolicies::FullTrustMembership(System.String,System.Security.Policy.DefaultPolicies/Key)
extern "C"  StrongNameMembershipCondition_t3193967118 * DefaultPolicies_FullTrustMembership_m2011629716 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildFullTrust()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildFullTrust_m1392093839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildLocalIntranet()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildLocalIntranet_m3239292372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildInternet()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildInternet_m2597158851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildSkipVerification()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildSkipVerification_m3819517738 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildExecution()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildExecution_m883746054 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildNothing()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildNothing_m490586361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildEverything()
extern "C"  NamedPermissionSet_t3529288303 * DefaultPolicies_BuildEverything_m3432996137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.DefaultPolicies::PrintingPermission(System.String)
extern "C"  SecurityElement_t2623103667 * DefaultPolicies_PrintingPermission_m1574366926 (Il2CppObject * __this /* static, unused */, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
