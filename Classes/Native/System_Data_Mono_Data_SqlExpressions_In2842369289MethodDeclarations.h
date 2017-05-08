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

// Mono.Data.SqlExpressions.In
struct In_t2842369289;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Collections.IList
struct IList_t2346154967;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.In::.ctor(Mono.Data.SqlExpressions.IExpression,System.Collections.IList)
extern "C"  void In__ctor_m1469698191 (In_t2842369289 * __this, Il2CppObject * ___e, Il2CppObject * ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::Equals(System.Object)
extern "C"  bool In_Equals_m69810534 (In_t2842369289 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.In::GetHashCode()
extern "C"  int32_t In_GetHashCode_m541925130 (In_t2842369289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.In::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * In_Eval_m3714271945 (In_t2842369289 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::EvalBoolean(System.Data.DataRow)
extern "C"  bool In_EvalBoolean_m2706620352 (In_t2842369289 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
