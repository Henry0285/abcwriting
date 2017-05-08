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

// Mono.Data.SqlExpressions.Literal
struct Literal_t3962810865;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataColumn1080745049.h"

// System.Void Mono.Data.SqlExpressions.Literal::.ctor(System.Object)
extern "C"  void Literal__ctor_m1968283475 (Literal_t3962810865 * __this, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::Equals(System.Object)
extern "C"  bool Literal_Equals_m3724557176 (Literal_t3962810865 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Literal::GetHashCode()
extern "C"  int32_t Literal_GetHashCode_m1573464772 (Literal_t3962810865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Literal::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Literal_Eval_m3266011037 (Literal_t3962810865 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::DependsOn(System.Data.DataColumn)
extern "C"  bool Literal_DependsOn_m4288386118 (Literal_t3962810865 * __this, DataColumn_t1080745049 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
