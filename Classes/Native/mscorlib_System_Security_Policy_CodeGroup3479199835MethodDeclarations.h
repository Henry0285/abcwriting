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

// System.Security.Policy.CodeGroup
struct CodeGroup_t3479199835;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t3967137383;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2378311282;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t2346154967;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement2378311282.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Policy_CodeGroup3479199835.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup__ctor_m948048116 (CodeGroup_t3479199835 * __this, Il2CppObject * ___membershipCondition, PolicyStatement_t2378311282 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup__ctor_m3875936259 (CodeGroup_t3479199835 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C"  PolicyStatement_t2378311282 * CodeGroup_get_PolicyStatement_m641914790 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C"  void CodeGroup_set_PolicyStatement_m579863247 (CodeGroup_t3479199835 * __this, PolicyStatement_t2378311282 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C"  String_t* CodeGroup_get_Description_m3858027485 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C"  void CodeGroup_set_Description_m3480950046 (CodeGroup_t3479199835 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C"  Il2CppObject * CodeGroup_get_MembershipCondition_m381298989 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C"  String_t* CodeGroup_get_Name_m762940702 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C"  void CodeGroup_set_Name_m4201618007 (CodeGroup_t3479199835 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C"  Il2CppObject * CodeGroup_get_Children_m4076602301 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C"  void CodeGroup_AddChild_m187306483 (CodeGroup_t3479199835 * __this, CodeGroup_t3479199835 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C"  bool CodeGroup_Equals_m2029023592 (CodeGroup_t3479199835 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C"  bool CodeGroup_Equals_m2258580796 (CodeGroup_t3479199835 * __this, CodeGroup_t3479199835 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C"  int32_t CodeGroup_GetHashCode_m1843501624 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_FromXml_m2194903050 (CodeGroup_t3479199835 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_ParseXml_m1706267343 (CodeGroup_t3479199835 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C"  SecurityElement_t2623103667 * CodeGroup_ToXml_m4247539845 (CodeGroup_t3479199835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2623103667 * CodeGroup_ToXml_m2183978134 (CodeGroup_t3479199835 * __this, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void CodeGroup_CreateXml_m425182810 (CodeGroup_t3479199835 * __this, SecurityElement_t2623103667 * ___element, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  CodeGroup_t3479199835 * CodeGroup_CreateFromXml_m308031542 (Il2CppObject * __this /* static, unused */, SecurityElement_t2623103667 * ___se, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
