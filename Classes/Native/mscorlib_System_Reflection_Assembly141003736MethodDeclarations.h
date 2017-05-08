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
// System.String
struct String_t;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.Module
struct Module_t2520131484;
// System.IO.Stream
struct Stream_t2768948945;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.AssemblyName
struct AssemblyName_t2136338539;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Version
struct Version_t2956351477;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2210175605;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Reflection.AssemblyName[]
struct AssemblyNameU5BU5D_t3441844618;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t4014693957;
// System.Security.PermissionSet
struct PermissionSet_t20502880;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_Module2520131484.h"
#include "mscorlib_System_Reflection_Assembly141003736.h"
#include "mscorlib_System_Reflection_AssemblyName2136338539.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Version2956351477.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Reflection_ManifestResourceInfo4014693957.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C"  void Assembly__ctor_m1050192922 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C"  String_t* Assembly_get_code_base_m3637877060 (Assembly_t141003736 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C"  String_t* Assembly_get_fullname_m3149819070 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C"  String_t* Assembly_get_location_m2976332497 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C"  String_t* Assembly_GetCodeBase_m2735209720 (Assembly_t141003736 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_EscapedCodeBase()
extern "C"  String_t* Assembly_get_EscapedCodeBase_m3889544901 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C"  String_t* Assembly_get_FullName_m1064037566 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Reflection.Assembly::UnprotectedGetEvidence()
extern "C"  Evidence_t435860 * Assembly_UnprotectedGetEvidence_m3769776501 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_global_assembly_cache()
extern "C"  bool Assembly_get_global_assembly_cache_m1706922704 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::get_GlobalAssemblyCache()
extern "C"  bool Assembly_get_GlobalAssemblyCache_m3940139190 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C"  String_t* Assembly_get_Location_m3981013809 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Assembly_GetObjectData_m1845599246 (Assembly_t141003736 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C"  bool Assembly_IsDefined_m2841897391 (Assembly_t141003736 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* Assembly_GetCustomAttributes_m95309865 (Assembly_t141003736 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C"  IntPtr_t Assembly_GetManifestResourceInternal_m2581727816 (Assembly_t141003736 * __this, String_t* ___name, int32_t* ___size, Module_t2520131484 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String)
extern "C"  Stream_t2768948945 * Assembly_GetManifestResourceStream_m2017116557 (Assembly_t141003736 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.Type,System.String)
extern "C"  Stream_t2768948945 * Assembly_GetManifestResourceStream_m3733792582 (Assembly_t141003736 * __this, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t2442356668* Assembly_GetTypes_m1317253146 (Assembly_t141003736 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C"  TypeU5BU5D_t2442356668* Assembly_GetTypes_m382057419 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m2805031155 (Assembly_t141003736 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C"  Type_t * Assembly_GetType_m2378249586 (Assembly_t141003736 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_InternalGetType_m1990879055 (Assembly_t141003736 * __this, Module_t2520131484 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m2765594712 (Assembly_t141003736 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C"  void Assembly_FillName_m1934025015 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___ass, AssemblyName_t2136338539 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C"  AssemblyName_t2136338539 * Assembly_GetName_m3984565618 (Assembly_t141003736 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C"  AssemblyName_t2136338539 * Assembly_GetName_m790410837 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C"  AssemblyName_t2136338539 * Assembly_UnprotectedGetName_m3014607408 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C"  String_t* Assembly_ToString_m3970658759 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C"  Assembly_t141003736 * Assembly_GetEntryAssembly_m3358047247 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetSatelliteAssemblyNoThrow(System.Globalization.CultureInfo,System.Version)
extern "C"  Assembly_t141003736 * Assembly_GetSatelliteAssemblyNoThrow_m1608615974 (Assembly_t141003736 * __this, CultureInfo_t634113868 * ___culture, Version_t2956351477 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetSatelliteAssembly(System.Globalization.CultureInfo,System.Version,System.Boolean)
extern "C"  Assembly_t141003736 * Assembly_GetSatelliteAssembly_m1636586734 (Assembly_t141003736 * __this, CultureInfo_t634113868 * ___culture, Version_t2956351477 * ___version, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadFrom(System.String,System.Boolean)
extern "C"  Assembly_t141003736 * Assembly_LoadFrom_m1294915694 (Il2CppObject * __this /* static, unused */, String_t* ___assemblyFile, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadFrom(System.String)
extern "C"  Assembly_t141003736 * Assembly_LoadFrom_m3713447085 (Il2CppObject * __this /* static, unused */, String_t* ___assemblyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t141003736 * Assembly_Load_m902205655 (Il2CppObject * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String)
extern "C"  Assembly_t141003736 * Assembly_LoadWithPartialName_m3069126665 (Il2CppObject * __this /* static, unused */, String_t* ___partialName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t141003736 * Assembly_load_with_partial_name_m374080690 (Il2CppObject * __this /* static, unused */, String_t* ___name, Evidence_t435860 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence)
extern "C"  Assembly_t141003736 * Assembly_LoadWithPartialName_m1407914987 (Il2CppObject * __this /* static, unused */, String_t* ___partialName, Evidence_t435860 * ___securityEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadWithPartialName(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t141003736 * Assembly_LoadWithPartialName_m700013884 (Il2CppObject * __this /* static, unused */, String_t* ___partialName, Evidence_t435860 * ___securityEvidence, bool ___oldBehavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t2520131484 * Assembly_GetModule_m2064378601 (Assembly_t141003736 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C"  ModuleU5BU5D_t2210175605* Assembly_GetModulesInternal_m666827793 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C"  ModuleU5BU5D_t2210175605* Assembly_GetModules_m2242070953 (Assembly_t141003736 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Assembly::GetManifestResourceNames()
extern "C"  StringU5BU5D_t3764931161* Assembly_GetManifestResourceNames_m3343625082 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C"  Assembly_t141003736 * Assembly_GetExecutingAssembly_m776016337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
extern "C"  Assembly_t141003736 * Assembly_GetCallingAssembly_m3174927549 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName[] System.Reflection.Assembly::GetReferencedAssemblies()
extern "C"  AssemblyNameU5BU5D_t3441844618* Assembly_GetReferencedAssemblies_m1306870935 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::GetManifestResourceInfoInternal(System.String,System.Reflection.ManifestResourceInfo)
extern "C"  bool Assembly_GetManifestResourceInfoInternal_m2267238653 (Assembly_t141003736 * __this, String_t* ___name, ManifestResourceInfo_t4014693957 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Assembly::GetManifestResourceInfo(System.String)
extern "C"  ManifestResourceInfo_t4014693957 * Assembly_GetManifestResourceInfo_m3945472169 (Assembly_t141003736 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModule()
extern "C"  Module_t2520131484 * Assembly_GetManifestModule_m767264474 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetManifestModuleInternal()
extern "C"  Module_t2520131484 * Assembly_GetManifestModuleInternal_m2617649543 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::Resolve()
extern "C"  void Assembly_Resolve_m2614621802 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_GrantedPermissionSet()
extern "C"  PermissionSet_t20502880 * Assembly_get_GrantedPermissionSet_m1719046080 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Reflection.Assembly::get_DeniedPermissionSet()
extern "C"  PermissionSet_t20502880 * Assembly_get_DeniedPermissionSet_m210913442 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::LoadPermissions(System.Reflection.Assembly,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
extern "C"  bool Assembly_LoadPermissions_m896192105 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___a, IntPtr_t* ___minimum, int32_t* ___minLength, IntPtr_t* ___optional, int32_t* ___optLength, IntPtr_t* ___refused, int32_t* ___refLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::LoadAssemblyPermissions()
extern "C"  void Assembly_LoadAssemblyPermissions_m928034946 (Assembly_t141003736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
