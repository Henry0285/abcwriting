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

// Mono.Data.SqlExpressions.Aggregation
struct Aggregation_t3220896770;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;
// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t285489283;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.IConvertible
struct IConvertible_t1670284251;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t1049210364;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_AggregationFu1670459954.h"
#include "System_Data_Mono_Data_SqlExpressions_ColumnReferenc285489283.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "System_Data_System_Data_DataRowChangeEventArgs1049210364.h"

// System.Void Mono.Data.SqlExpressions.Aggregation::.ctor(System.Boolean,System.Data.DataRow[],Mono.Data.SqlExpressions.AggregationFunction,Mono.Data.SqlExpressions.ColumnReference)
extern "C"  void Aggregation__ctor_m2535285851 (Aggregation_t3220896770 * __this, bool ___cacheResults, DataRowU5BU5D_t3098821942* ___rows, int32_t ___function, ColumnReference_t285489283 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::Equals(System.Object)
extern "C"  bool Aggregation_Equals_m3066718575 (Aggregation_t3220896770 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Aggregation::GetHashCode()
extern "C"  int32_t Aggregation_GetHashCode_m3032721081 (Aggregation_t3220896770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Aggregation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Aggregation_Eval_m217142548 (Aggregation_t3220896770 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::DependsOn(System.Data.DataColumn)
extern "C"  bool Aggregation_DependsOn_m1720488977 (Aggregation_t3220896770 * __this, DataColumn_t1080745049 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::Aggregate(System.IConvertible)
extern "C"  void Aggregation_Aggregate_m2716034488 (Aggregation_t3220896770 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Aggregation::CalcStatisticalFunction(System.Object[])
extern "C"  Il2CppObject * Aggregation_CalcStatisticalFunction_m1682456970 (Aggregation_t3220896770 * __this, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::InvalidateCache(System.Object,System.Data.DataRowChangeEventArgs)
extern "C"  void Aggregation_InvalidateCache_m3766765971 (Aggregation_t3220896770 * __this, Il2CppObject * ___sender, DataRowChangeEventArgs_t1049210364 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
