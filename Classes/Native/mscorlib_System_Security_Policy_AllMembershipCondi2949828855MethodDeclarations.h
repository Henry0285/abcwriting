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

// System.Security.Policy.AllMembershipCondition
struct AllMembershipCondition_t2949828855;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t3967137383;
// System.Object
struct Il2CppObject;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"

// System.Void System.Security.Policy.AllMembershipCondition::.ctor()
extern "C"  void AllMembershipCondition__ctor_m3030940917 (AllMembershipCondition_t2949828855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool AllMembershipCondition_Check_m2220623045 (AllMembershipCondition_t2949828855 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.AllMembershipCondition::Copy()
extern "C"  Il2CppObject * AllMembershipCondition_Copy_m700552086 (AllMembershipCondition_t2949828855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Equals(System.Object)
extern "C"  bool AllMembershipCondition_Equals_m1746200512 (AllMembershipCondition_t2949828855 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void AllMembershipCondition_FromXml_m529416165 (AllMembershipCondition_t2949828855 * __this, SecurityElement_t2623103667 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void AllMembershipCondition_FromXml_m1021488674 (AllMembershipCondition_t2949828855 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.AllMembershipCondition::GetHashCode()
extern "C"  int32_t AllMembershipCondition_GetHashCode_m1752988244 (AllMembershipCondition_t2949828855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.AllMembershipCondition::ToString()
extern "C"  String_t* AllMembershipCondition_ToString_m3894000262 (AllMembershipCondition_t2949828855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml()
extern "C"  SecurityElement_t2623103667 * AllMembershipCondition_ToXml_m2771543339 (AllMembershipCondition_t2949828855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2623103667 * AllMembershipCondition_ToXml_m662214302 (AllMembershipCondition_t2949828855 * __this, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
