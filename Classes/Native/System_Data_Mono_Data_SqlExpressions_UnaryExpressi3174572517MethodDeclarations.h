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

// Mono.Data.SqlExpressions.UnaryExpression
struct UnaryExpression_t3174572517;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.UnaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void UnaryExpression__ctor_m1381704450 (UnaryExpression_t3174572517 * __this, Il2CppObject * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::Equals(System.Object)
extern "C"  bool UnaryExpression_Equals_m3022227326 (UnaryExpression_t3174572517 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.UnaryExpression::GetHashCode()
extern "C"  int32_t UnaryExpression_GetHashCode_m3011131974 (UnaryExpression_t3174572517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::DependsOn(System.Data.DataColumn)
extern "C"  bool UnaryExpression_DependsOn_m160585396 (UnaryExpression_t3174572517 * __this, DataColumn_t1080745049 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::EvalBoolean(System.Data.DataRow)
extern "C"  bool UnaryExpression_EvalBoolean_m2605276128 (UnaryExpression_t3174572517 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
