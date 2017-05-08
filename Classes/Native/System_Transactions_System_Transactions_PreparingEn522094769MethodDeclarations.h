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

// System.Transactions.PreparingEnlistment
struct PreparingEnlistment_t522094769;
// System.Transactions.Transaction
struct Transaction_t1371701312;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_t3171851689;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "System_Transactions_System_Transactions_Transactio1371701312.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void System.Transactions.PreparingEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.IEnlistmentNotification)
extern "C"  void PreparingEnlistment__ctor_m842975745 (PreparingEnlistment_t522094769 * __this, Transaction_t1371701312 * ___tx, Il2CppObject * ___enlisted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.PreparingEnlistment::ForceRollback()
extern "C"  void PreparingEnlistment_ForceRollback_m385646317 (PreparingEnlistment_t522094769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.PreparingEnlistment::ForceRollback(System.Exception)
extern "C"  void PreparingEnlistment_ForceRollback_m2622594285 (PreparingEnlistment_t522094769 * __this, Exception_t1145979430 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.PreparingEnlistment::Prepared()
extern "C"  void PreparingEnlistment_Prepared_m3911164755 (PreparingEnlistment_t522094769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.PreparingEnlistment::get_IsPrepared()
extern "C"  bool PreparingEnlistment_get_IsPrepared_m724409356 (PreparingEnlistment_t522094769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
