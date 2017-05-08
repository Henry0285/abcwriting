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

// Mono.Data.SqlExpressions.ConcatFunction
struct ConcatFunction_t2126527356;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void Mono.Data.SqlExpressions.ConcatFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void ConcatFunction__ctor_m1214989278 (ConcatFunction_t2126527356 * __this, Il2CppObject * ___e, Il2CppObject * ___add, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ConcatFunction::Equals(System.Object)
extern "C"  bool ConcatFunction_Equals_m785743509 (ConcatFunction_t2126527356 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ConcatFunction::GetHashCode()
extern "C"  int32_t ConcatFunction_GetHashCode_m106306239 (ConcatFunction_t2126527356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ConcatFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ConcatFunction_Eval_m3327795446 (ConcatFunction_t2126527356 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
