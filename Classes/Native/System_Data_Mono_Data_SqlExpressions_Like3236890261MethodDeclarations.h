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

// Mono.Data.SqlExpressions.Like
struct Like_t3236890261;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.Like::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Like__ctor_m3937506345 (Like_t3236890261 * __this, Il2CppObject * ___e, Il2CppObject * ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::Equals(System.Object)
extern "C"  bool Like_Equals_m2533816990 (Like_t3236890261 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Like::GetHashCode()
extern "C"  int32_t Like_GetHashCode_m1554872782 (Like_t3236890261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Like::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Like_Eval_m2921912417 (Like_t3236890261 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::EvalBoolean(System.Data.DataRow)
extern "C"  bool Like_EvalBoolean_m900524248 (Like_t3236890261 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
