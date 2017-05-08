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

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2378311282;
// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_PermissionSet20502880.h"
#include "mscorlib_System_Security_Policy_PolicyStatementAttr857336846.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet)
extern "C"  void PolicyStatement__ctor_m2989666634 (PolicyStatement_t2378311282 * __this, PermissionSet_t20502880 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet,System.Security.Policy.PolicyStatementAttribute)
extern "C"  void PolicyStatement__ctor_m693127962 (PolicyStatement_t2378311282 * __this, PermissionSet_t20502880 * ___permSet, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C"  PermissionSet_t20502880 * PolicyStatement_get_PermissionSet_m1071771261 (PolicyStatement_t2378311282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::set_PermissionSet(System.Security.PermissionSet)
extern "C"  void PolicyStatement_set_PermissionSet_m2564884192 (PolicyStatement_t2378311282 * __this, PermissionSet_t20502880 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::get_Attributes()
extern "C"  int32_t PolicyStatement_get_Attributes_m2111435437 (PolicyStatement_t2378311282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Copy()
extern "C"  PolicyStatement_t2378311282 * PolicyStatement_Copy_m1520612318 (PolicyStatement_t2378311282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement)
extern "C"  void PolicyStatement_FromXml_m2697946348 (PolicyStatement_t2378311282 * __this, SecurityElement_t2623103667 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void PolicyStatement_FromXml_m1781382447 (PolicyStatement_t2378311282 * __this, SecurityElement_t2623103667 * ___et, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml()
extern "C"  SecurityElement_t2623103667 * PolicyStatement_ToXml_m3005196626 (PolicyStatement_t2378311282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2623103667 * PolicyStatement_ToXml_m3890171721 (PolicyStatement_t2378311282 * __this, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C"  bool PolicyStatement_Equals_m318008089 (PolicyStatement_t2378311282 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C"  int32_t PolicyStatement_GetHashCode_m2861152979 (PolicyStatement_t2378311282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Empty()
extern "C"  PolicyStatement_t2378311282 * PolicyStatement_Empty_m2596594982 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
