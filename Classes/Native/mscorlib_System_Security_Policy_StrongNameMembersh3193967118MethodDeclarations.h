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

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t3193967118;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2247038062;
// System.String
struct String_t;
// System.Version
struct Version_t2956351477;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t3967137383;
// System.Object
struct Il2CppObject;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub2247038062.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Version2956351477.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameMembershipCondition__ctor_m3405387459 (StrongNameMembershipCondition_t3193967118 * __this, StrongNamePublicKeyBlob_t2247038062 * ___blob, String_t* ___name, Version_t2956351477 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition__ctor_m1991913659 (StrongNameMembershipCondition_t3193967118 * __this, SecurityElement_t2623103667 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C"  void StrongNameMembershipCondition__ctor_m387170946 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C"  String_t* StrongNameMembershipCondition_get_Name_m4134365911 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C"  Version_t2956351477 * StrongNameMembershipCondition_get_Version_m3729648137 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t2247038062 * StrongNameMembershipCondition_get_PublicKey_m4104186190 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool StrongNameMembershipCondition_Check_m1326098828 (StrongNameMembershipCondition_t3193967118 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C"  Il2CppObject * StrongNameMembershipCondition_Copy_m3043253263 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C"  bool StrongNameMembershipCondition_Equals_m815748533 (StrongNameMembershipCondition_t3193967118 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C"  int32_t StrongNameMembershipCondition_GetHashCode_m107097991 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition_FromXml_m2708993138 (StrongNameMembershipCondition_t3193967118 * __this, SecurityElement_t2623103667 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void StrongNameMembershipCondition_FromXml_m1805798131 (StrongNameMembershipCondition_t3193967118 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C"  String_t* StrongNameMembershipCondition_ToString_m561679659 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C"  SecurityElement_t2623103667 * StrongNameMembershipCondition_ToXml_m852611928 (StrongNameMembershipCondition_t3193967118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2623103667 * StrongNameMembershipCondition_ToXml_m286344309 (StrongNameMembershipCondition_t3193967118 * __this, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
