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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Transactions_System_Transactions_Transactio2510613230.h"
#include "System_Transactions_System_Transactions_IsolationL3450808514.h"
#include "mscorlib_System_TimeSpan1834055012.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
extern "C"  void TransactionOptions__ctor_m3596369679 (TransactionOptions_t2510613230 * __this, int32_t ___level, TimeSpan_t1834055012  ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
extern "C"  bool TransactionOptions_Equals_m1088096644 (TransactionOptions_t2510613230 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
extern "C"  int32_t TransactionOptions_GetHashCode_m2584502036 (TransactionOptions_t2510613230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
extern "C"  bool TransactionOptions_op_Equality_m1351512005 (Il2CppObject * __this /* static, unused */, TransactionOptions_t2510613230  ___o1, TransactionOptions_t2510613230  ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TransactionOptions_t2510613230;
struct TransactionOptions_t2510613230_marshaled_pinvoke;

extern "C" void TransactionOptions_t2510613230_marshal_pinvoke(const TransactionOptions_t2510613230& unmarshaled, TransactionOptions_t2510613230_marshaled_pinvoke& marshaled);
extern "C" void TransactionOptions_t2510613230_marshal_pinvoke_back(const TransactionOptions_t2510613230_marshaled_pinvoke& marshaled, TransactionOptions_t2510613230& unmarshaled);
extern "C" void TransactionOptions_t2510613230_marshal_pinvoke_cleanup(TransactionOptions_t2510613230_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TransactionOptions_t2510613230;
struct TransactionOptions_t2510613230_marshaled_com;

extern "C" void TransactionOptions_t2510613230_marshal_com(const TransactionOptions_t2510613230& unmarshaled, TransactionOptions_t2510613230_marshaled_com& marshaled);
extern "C" void TransactionOptions_t2510613230_marshal_com_back(const TransactionOptions_t2510613230_marshaled_com& marshaled, TransactionOptions_t2510613230& unmarshaled);
extern "C" void TransactionOptions_t2510613230_marshal_com_cleanup(TransactionOptions_t2510613230_marshaled_com& marshaled);
