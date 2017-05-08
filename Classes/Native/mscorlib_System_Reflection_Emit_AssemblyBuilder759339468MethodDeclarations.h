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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t759339468;
// System.Reflection.AssemblyName
struct AssemblyName_t2136338539;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t142627928;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2210175605;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t4014693957;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.IO.Stream
struct Stream_t2768948945;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t2520131484;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_AssemblyName2136338539.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc2908146548.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder759339468.h"
#include "mscorlib_System_Security_PermissionSet20502880.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C"  void AssemblyBuilder__ctor_m1611900080 (AssemblyBuilder_t759339468 * __this, AssemblyName_t2136338539 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C"  void AssemblyBuilder_basic_init_m3398634471 (Il2CppObject * __this /* static, unused */, AssemblyBuilder_t759339468 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m554656855 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void AssemblyBuilder_AddPermissionRequests_m1188328356 (AssemblyBuilder_t759339468 * __this, PermissionSet_t20502880 * ___required, PermissionSet_t20502880 * ___optional, PermissionSet_t20502880 * ___refused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C"  ModuleBuilder_t142627928 * AssemblyBuilder_DefineDynamicModule_m3694658763 (AssemblyBuilder_t759339468 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C"  ModuleBuilder_t142627928 * AssemblyBuilder_DefineDynamicModule_m3406090246 (AssemblyBuilder_t759339468 * __this, String_t* ___name, bool ___emitSymbolInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  ModuleBuilder_t142627928 * AssemblyBuilder_DefineDynamicModule_m2213376157 (AssemblyBuilder_t759339468 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t2210175605* AssemblyBuilder_GetModulesInternal_m3379844831 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t2442356668* AssemblyBuilder_GetTypes_m2527954992 (AssemblyBuilder_t759339468 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Emit.AssemblyBuilder::GetManifestResourceInfo(System.String)
extern "C"  ManifestResourceInfo_t4014693957 * AssemblyBuilder_GetManifestResourceInfo_m526368075 (AssemblyBuilder_t759339468 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Emit.AssemblyBuilder::GetManifestResourceNames()
extern "C"  StringU5BU5D_t3764931161* AssemblyBuilder_GetManifestResourceNames_m3593199824 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.String)
extern "C"  Stream_t2768948945 * AssemblyBuilder_GetManifestResourceStream_m3920095515 (AssemblyBuilder_t759339468 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.Type,System.String)
extern "C"  Stream_t2768948945 * AssemblyBuilder_GetManifestResourceStream_m2412661188 (AssemblyBuilder_t759339468 * __this, Type_t * ___type, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m2864230005 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C"  bool AssemblyBuilder_get_IsSave_m3100330618 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C"  bool AssemblyBuilder_get_IsRun_m1608974594 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C"  String_t* AssemblyBuilder_get_AssemblyDir_m3907616403 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C"  Module_t2520131484 * AssemblyBuilder_GetManifestModule_m1908848220 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t1145979430 * AssemblyBuilder_not_supported_m383946865 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C"  void AssemblyBuilder_check_name_and_filename_m1357620065 (AssemblyBuilder_t759339468 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t2136338539 * AssemblyBuilder_UnprotectedGetName_m2328641134 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
