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

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t142627928;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t759339468;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3766580690;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t40021671;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t3949125329;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder759339468.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder142627928.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_TypeAttributes2928897129.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder3766580690.h"
#include "mscorlib_System_Reflection_Emit_PackingSize2603375769.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ModuleBuilder__ctor_m1395205506 (ModuleBuilder_t142627928 * __this, AssemblyBuilder_t759339468 * ___assb, String_t* ___name, String_t* ___fullyqname, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C"  void ModuleBuilder__cctor_m2985766025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilder_basic_init_m3993543327 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t142627928 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C"  void ModuleBuilder_set_wrappers_type_m104357409 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t142627928 * ___mb, Type_t * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C"  bool ModuleBuilder_IsTransient_m3442266478 (ModuleBuilder_t142627928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type)
extern "C"  TypeBuilder_t3766580690 * ModuleBuilder_DefineType_m1879122726 (ModuleBuilder_t142627928 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::AddType(System.Reflection.Emit.TypeBuilder)
extern "C"  void ModuleBuilder_AddType_m1958721423 (ModuleBuilder_t142627928 * __this, TypeBuilder_t3766580690 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32)
extern "C"  TypeBuilder_t3766580690 * ModuleBuilder_DefineType_m1942672173 (ModuleBuilder_t142627928 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t2442356668* ___interfaces, int32_t ___packingSize, int32_t ___typesize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[])
extern "C"  TypeBuilder_t3766580690 * ModuleBuilder_DefineType_m4075747517 (ModuleBuilder_t142627928 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t2442356668* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String)
extern "C"  Type_t * ModuleBuilder_GetType_m2040677648 (ModuleBuilder_t142627928 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C"  TypeBuilder_t3766580690 * ModuleBuilder_search_in_array_m3465486322 (ModuleBuilder_t142627928 * __this, TypeBuilderU5BU5D_t40021671* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_nested_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C"  TypeBuilder_t3766580690 * ModuleBuilder_search_nested_in_array_m2606822480 (ModuleBuilder_t142627928 * __this, TypeBuilderU5BU5D_t40021671* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)
extern "C"  Type_t * ModuleBuilder_create_modified_type_m3230029977 (Il2CppObject * __this /* static, unused */, TypeBuilder_t3766580690 * ___tb, String_t* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::GetMaybeNested(System.Reflection.Emit.TypeBuilder,System.String)
extern "C"  TypeBuilder_t3766580690 * ModuleBuilder_GetMaybeNested_m2833878104 (ModuleBuilder_t142627928 * __this, TypeBuilder_t3766580690 * ___t, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * ModuleBuilder_GetType_m78381410 (ModuleBuilder_t142627928 * __this, String_t* ___className, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ModuleBuilder_get_next_table_index_m1552645388 (ModuleBuilder_t142627928 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C"  TypeU5BU5D_t2442356668* ModuleBuilder_GetTypes_m93550753 (ModuleBuilder_t142627928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)
extern "C"  int32_t ModuleBuilder_getUSIndex_m523803422 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t142627928 * ___mb, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C"  int32_t ModuleBuilder_getToken_m972612049 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t142627928 * ___mb, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilder_getMethodToken_m1648919204 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t142627928 * ___mb, MethodInfo_t * ___method, TypeU5BU5D_t2442356668* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.String)
extern "C"  int32_t ModuleBuilder_GetToken_m3325192999 (ModuleBuilder_t142627928 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilder_GetToken_m4190668737 (ModuleBuilder_t142627928 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilder_GetToken_m1373937259 (ModuleBuilder_t142627928 * __this, MethodInfo_t * ___method, TypeU5BU5D_t2442356668* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C"  void ModuleBuilder_RegisterToken_m1388342515 (ModuleBuilder_t142627928 * __this, Il2CppObject * ___obj, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C"  Il2CppObject * ModuleBuilder_GetTokenGenerator_m4006065550 (ModuleBuilder_t142627928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C"  String_t* ModuleBuilder_get_FileName_m1646923051 (ModuleBuilder_t142627928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern "C"  void ModuleBuilder_CreateGlobalType_m2419987093 (ModuleBuilder_t142627928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
