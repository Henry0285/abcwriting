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

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t3377926842;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t3967137383;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2378311282;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3479199835;
// System.Security.Policy.Evidence
struct Evidence_t435860;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement2378311282.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void UnionCodeGroup__ctor_m1784279237 (UnionCodeGroup_t3377926842 * __this, Il2CppObject * ___membershipCondition, PolicyStatement_t2378311282 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void UnionCodeGroup__ctor_m3249353768 (UnionCodeGroup_t3377926842 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C"  CodeGroup_t3479199835 * UnionCodeGroup_Copy_m2479501449 (UnionCodeGroup_t3377926842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C"  CodeGroup_t3479199835 * UnionCodeGroup_Copy_m1291994320 (UnionCodeGroup_t3377926842 * __this, bool ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t2378311282 * UnionCodeGroup_Resolve_m2561608333 (UnionCodeGroup_t3377926842 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
