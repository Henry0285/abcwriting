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

// Mono.Data.SqlExpressions.IsNullFunction
struct IsNullFunction_t351317945;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.IsNullFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void IsNullFunction__ctor_m2143542025 (IsNullFunction_t351317945 * __this, Il2CppObject * ___e, Il2CppObject * ___defaultExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IsNullFunction::Equals(System.Object)
extern "C"  bool IsNullFunction_Equals_m3373180116 (IsNullFunction_t351317945 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IsNullFunction::GetHashCode()
extern "C"  int32_t IsNullFunction_GetHashCode_m2750205988 (IsNullFunction_t351317945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IsNullFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * IsNullFunction_Eval_m3759960801 (IsNullFunction_t351317945 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
