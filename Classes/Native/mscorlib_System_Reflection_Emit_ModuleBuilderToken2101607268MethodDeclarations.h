﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t2101607268;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t142627928;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t2442356668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder142627928.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilderTokenGenerator__ctor_m1041652642 (ModuleBuilderTokenGenerator_t2101607268 * __this, ModuleBuilder_t142627928 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m1429572107 (ModuleBuilderTokenGenerator_t2101607268 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m3427457873 (ModuleBuilderTokenGenerator_t2101607268 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m919467687 (ModuleBuilderTokenGenerator_t2101607268 * __this, MethodInfo_t * ___method, TypeU5BU5D_t2442356668* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
