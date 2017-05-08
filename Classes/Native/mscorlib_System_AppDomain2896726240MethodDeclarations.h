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

// System.AppDomain
struct AppDomain_t2896726240;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3535650289;
// System.AppDomainSetup
struct AppDomainSetup_t3972061713;
// System.String
struct String_t;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t759339468;
// System.Reflection.AssemblyName
struct AssemblyName_t2136338539;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t3892531657;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4239045173;
// System.AppDomainManager
struct AppDomainManager_t3862818659;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_UnhandledExceptionEventHandler3535650289.h"
#include "mscorlib_System_Reflection_AssemblyName2136338539.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc2908146548.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Security_PermissionSet20502880.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context4239045173.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_add_UnhandledException_m3486048175 (AppDomain_t2896726240 * __this, UnhandledExceptionEventHandler_t3535650289 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_remove_UnhandledException_m3083947570 (AppDomain_t2896726240 * __this, UnhandledExceptionEventHandler_t3535650289 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::getSetup()
extern "C"  AppDomainSetup_t3972061713 * AppDomain_getSetup_m3701419097 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformationNoCopy()
extern "C"  AppDomainSetup_t3972061713 * AppDomain_get_SetupInformationNoCopy_m4081917706 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformation()
extern "C"  AppDomainSetup_t3972061713 * AppDomain_get_SetupInformation_m3036574060 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_BaseDirectory()
extern "C"  String_t* AppDomain_get_BaseDirectory_m838346232 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C"  String_t* AppDomain_getFriendlyName_m3264018353 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C"  String_t* AppDomain_get_FriendlyName_m4088940918 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C"  AppDomain_t2896726240 * AppDomain_getCurDomain_m591611373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C"  AppDomain_t2896726240 * AppDomain_get_CurrentDomain_m3432767403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C"  AssemblyBuilder_t759339468 * AppDomain_DefineDynamicAssembly_m395616624 (AppDomain_t2896726240 * __this, AssemblyName_t2136338539 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C"  AssemblyBuilder_t759339468 * AppDomain_DefineDynamicAssembly_m3109990261 (AppDomain_t2896726240 * __this, AssemblyName_t2136338539 * ___name, int32_t ___access, String_t* ___dir, Evidence_t435860 * ___evidence, PermissionSet_t20502880 * ___requiredPermissions, PermissionSet_t20502880 * ___optionalPermissions, PermissionSet_t20502880 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C"  AssemblyBuilder_t759339468 * AppDomain_DefineInternalDynamicAssembly_m2806202559 (AppDomain_t2896726240 * __this, AssemblyName_t2136338539 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies(System.Boolean)
extern "C"  AssemblyU5BU5D_t3892531657* AppDomain_GetAssemblies_m1688435944 (AppDomain_t2896726240 * __this, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
extern "C"  AssemblyU5BU5D_t3892531657* AppDomain_GetAssemblies_m2208916529 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::GetData(System.String)
extern "C"  Il2CppObject * AppDomain_GetData_m1411657935 (AppDomain_t2896726240 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C"  Il2CppObject * AppDomain_InitializeLifetimeService_m1673301205 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t141003736 * AppDomain_LoadAssembly_m1537679648 (AppDomain_t2896726240 * __this, String_t* ___assemblyRef, Evidence_t435860 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadSatellite(System.Reflection.AssemblyName,System.Boolean)
extern "C"  Assembly_t141003736 * AppDomain_LoadSatellite_m31492978 (AppDomain_t2896726240 * __this, AssemblyName_t2136338539 * ___assemblyRef, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C"  Assembly_t141003736 * AppDomain_Load_m3276140461 (AppDomain_t2896726240 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t141003736 * AppDomain_Load_m119378364 (AppDomain_t2896726240 * __this, String_t* ___assemblyString, Evidence_t435860 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t4239045173 * AppDomain_InternalSetContext_m1264487503 (Il2CppObject * __this /* static, unused */, Context_t4239045173 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C"  Context_t4239045173 * AppDomain_InternalGetContext_m2631190946 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C"  Context_t4239045173 * AppDomain_InternalGetDefaultContext_m978759799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C"  String_t* AppDomain_InternalGetProcessGuid_m1278588156 (Il2CppObject * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C"  String_t* AppDomain_GetProcessGuid_m2969006389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C"  String_t* AppDomain_ToString_m3523588193 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C"  void AppDomain_ValidateAssemblyName_m1517758367 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C"  Assembly_t141003736 * AppDomain_DoTypeResolve_m381738210 (AppDomain_t2896726240 * __this, Il2CppObject * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C"  AppDomainManager_t3862818659 * AppDomain_get_DomainManager_m1763303232 (AppDomain_t2896726240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
