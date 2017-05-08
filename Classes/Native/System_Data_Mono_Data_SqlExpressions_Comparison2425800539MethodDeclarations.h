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

// Mono.Data.SqlExpressions.Comparison
struct Comparison_t2425800539;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.IComparable
struct IComparable_t2223233772;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation2041914555.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.Comparison::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Comparison__ctor_m3895839914 (Comparison_t2425800539 * __this, int32_t ___op, Il2CppObject * ___e1, Il2CppObject * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Comparison::.cctor()
extern "C"  void Comparison__cctor_m2846942712 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Comparison::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Comparison_Eval_m3913725359 (Comparison_t2425800539 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Comparison::EvalBoolean(System.Data.DataRow)
extern "C"  bool Comparison_EvalBoolean_m1652502742 (Comparison_t2425800539 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Comparison::Compare(System.IComparable,System.IComparable,System.Boolean)
extern "C"  int32_t Comparison_Compare_m3926507249 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o1, Il2CppObject * ___o2, bool ___caseSensitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
