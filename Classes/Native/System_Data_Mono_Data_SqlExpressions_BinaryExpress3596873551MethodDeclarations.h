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

// Mono.Data.SqlExpressions.BinaryExpression
struct BinaryExpression_t3596873551;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataColumn1080745049.h"

// System.Void Mono.Data.SqlExpressions.BinaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void BinaryExpression__ctor_m90183519 (BinaryExpression_t3596873551 * __this, Il2CppObject * ___e1, Il2CppObject * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::Equals(System.Object)
extern "C"  bool BinaryExpression_Equals_m3042133974 (BinaryExpression_t3596873551 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BinaryExpression::GetHashCode()
extern "C"  int32_t BinaryExpression_GetHashCode_m2306795542 (BinaryExpression_t3596873551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::DependsOn(System.Data.DataColumn)
extern "C"  bool BinaryExpression_DependsOn_m3910072432 (BinaryExpression_t3596873551 * __this, DataColumn_t1080745049 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
