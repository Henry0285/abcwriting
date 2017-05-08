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

// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2405715527;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Reflection.MethodBase
struct MethodBase_t591550820;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly141003736.h"
#include "mscorlib_System_Security_PermissionSet20502880.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Security_Policy_PolicyLevel2405715527.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Reflection_MethodBase591550820.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityAction1328511788.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m3929275401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C"  bool SecurityManager_get_CheckExecutionRights_m3149836832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m51574294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C"  bool SecurityManager_IsGranted_m2438055908 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___a, Il2CppObject * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C"  Il2CppObject * SecurityManager_CheckPermissionSet_m3892417640 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___a, PermissionSet_t20502880 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C"  PermissionSet_t20502880 * SecurityManager_ResolvePolicy_m1347232993 (Il2CppObject * __this /* static, unused */, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C"  PermissionSet_t20502880 * SecurityManager_ResolvePolicy_m1069076191 (Il2CppObject * __this /* static, unused */, Evidence_t435860 * ___evidence, PermissionSet_t20502880 * ___reqdPset, PermissionSet_t20502880 * ___optPset, PermissionSet_t20502880 * ___denyPset, PermissionSet_t20502880 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C"  Il2CppObject * SecurityManager_get_Hierarchy_m2985322036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C"  void SecurityManager_InitializePolicyHierarchy_m3054073013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C"  bool SecurityManager_ResolvePolicyLevel_m3039881993 (Il2CppObject * __this /* static, unused */, PermissionSet_t20502880 ** ___ps, PolicyLevel_t2405715527 * ___pl, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C"  void SecurityManager_ResolveIdentityPermissions_m1481575524 (Il2CppObject * __this /* static, unused */, PermissionSet_t20502880 * ___ps, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C"  PolicyLevel_t2405715527 * SecurityManager_get_ResolvingPolicyLevel_m158118460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C"  void SecurityManager_set_ResolvingPolicyLevel_m18996727 (Il2CppObject * __this /* static, unused */, PolicyLevel_t2405715527 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t20502880 * SecurityManager_Decode_m3784014484 (Il2CppObject * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t20502880 * SecurityManager_Decode_m470212436 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_GetLinkDemandSecurity_m467965909 (Il2CppObject * __this /* static, unused */, MethodBase_t591550820 * ___method, RuntimeDeclSecurityActions_t1328511788 * ___cdecl, RuntimeDeclSecurityActions_t1328511788 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C"  void SecurityManager_ReflectedLinkDemandInvoke_m2864340559 (Il2CppObject * __this /* static, unused */, MethodBase_t591550820 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C"  bool SecurityManager_ReflectedLinkDemandQuery_m2408661465 (Il2CppObject * __this /* static, unused */, MethodBase_t591550820 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_LinkDemand_m4132789037 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___a, RuntimeDeclSecurityActions_t1328511788 * ___klass, RuntimeDeclSecurityActions_t1328511788 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
