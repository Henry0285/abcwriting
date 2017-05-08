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

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t2713284989;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t3967137383;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3479199835;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2378311282;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_FileIOPermiss3356789344.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileCodeGroup__ctor_m1755317344 (FileCodeGroup_t2713284989 * __this, Il2CppObject * ___membershipCondition, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup__ctor_m1981837369 (FileCodeGroup_t2713284989 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C"  CodeGroup_t3479199835 * FileCodeGroup_Copy_m2713630122 (FileCodeGroup_t2713284989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t2378311282 * FileCodeGroup_Resolve_m3271851422 (FileCodeGroup_t2713284989 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C"  bool FileCodeGroup_Equals_m3005398378 (FileCodeGroup_t2713284989 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C"  int32_t FileCodeGroup_GetHashCode_m53205002 (FileCodeGroup_t2713284989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_ParseXml_m1874382825 (FileCodeGroup_t2713284989 * __this, SecurityElement_t2623103667 * ___e, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_CreateXml_m575148212 (FileCodeGroup_t2713284989 * __this, SecurityElement_t2623103667 * ___element, PolicyLevel_t2405715527 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
