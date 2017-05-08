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

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t3625916582;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t3967137383;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3479199835;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t939419601;
// System.Object
struct Il2CppObject;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2378311282;
// System.Security.Policy.Evidence
struct Evidence_t435860;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C"  void NetCodeGroup__ctor_m3976990461 (NetCodeGroup_t3625916582 * __this, Il2CppObject * ___membershipCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup__ctor_m521556244 (NetCodeGroup_t3625916582 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C"  void NetCodeGroup__cctor_m3026471647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C"  CodeGroup_t3479199835 * NetCodeGroup_Copy_m1974749581 (NetCodeGroup_t3625916582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C"  bool NetCodeGroup_Equals_m1813340979 (NetCodeGroup_t3625916582 * __this, CodeConnectAccessU5BU5D_t939419601* ___rules1, CodeConnectAccessU5BU5D_t939419601* ___rules2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C"  bool NetCodeGroup_Equals_m2843695629 (NetCodeGroup_t3625916582 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C"  int32_t NetCodeGroup_GetHashCode_m2535540011 (NetCodeGroup_t3625916582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t2378311282 * NetCodeGroup_Resolve_m71716657 (NetCodeGroup_t3625916582 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup_CreateXml_m1997058701 (NetCodeGroup_t3625916582 * __this, SecurityElement_t2623103667 * ___element, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup_ParseXml_m3668606686 (NetCodeGroup_t3625916582 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
