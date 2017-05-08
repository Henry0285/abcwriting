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

// Mono.Data.SqlExpressions.IifFunction
struct IifFunction_t3895703996;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.IifFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void IifFunction__ctor_m3809024231 (IifFunction_t3895703996 * __this, Il2CppObject * ___e, Il2CppObject * ___trueExpr, Il2CppObject * ___falseExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IifFunction::Equals(System.Object)
extern "C"  bool IifFunction_Equals_m1049583507 (IifFunction_t3895703996 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IifFunction::GetHashCode()
extern "C"  int32_t IifFunction_GetHashCode_m3501749217 (IifFunction_t3895703996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IifFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * IifFunction_Eval_m2016566110 (IifFunction_t3895703996 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
