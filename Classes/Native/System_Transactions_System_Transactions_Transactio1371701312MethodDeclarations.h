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

// System.Transactions.Transaction
struct Transaction_t1371701312;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Transactions.TransactionInformation
struct TransactionInformation_t392815506;
// System.Transactions.Enlistment
struct Enlistment_t86096201;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_t3171851689;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1145979430;
// System.Transactions.TransactionScope
struct TransactionScope_t2839726848;
// System.Transactions.ISinglePhaseNotification
struct ISinglePhaseNotification_t4088712495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "System_Transactions_System_Transactions_Transactio1371701312.h"
#include "System_Transactions_System_Transactions_Enlistment4129840277.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_Transactions_System_Transactions_Transactio2839726848.h"

// System.Void System.Transactions.Transaction::.ctor()
extern "C"  void Transaction__ctor_m3765812309 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m2362374728 (Transaction_t1371701312 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Transactions.Transaction System.Transactions.Transaction::get_Current()
extern "C"  Transaction_t1371701312 * Transaction_get_Current_m1694135828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
extern "C"  Transaction_t1371701312 * Transaction_get_CurrentInternal_m3298618427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::set_CurrentInternal(System.Transactions.Transaction)
extern "C"  void Transaction_set_CurrentInternal_m1169074502 (Il2CppObject * __this /* static, unused */, Transaction_t1371701312 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
extern "C"  TransactionInformation_t392815506 * Transaction_get_TransactionInformation_m2678919253 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::Dispose()
extern "C"  void Transaction_Dispose_m838977436 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatile(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C"  Enlistment_t86096201 * Transaction_EnlistVolatile_m3039283060 (Transaction_t1371701312 * __this, Il2CppObject * ___notification, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatileInternal(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C"  Enlistment_t86096201 * Transaction_EnlistVolatileInternal_m2003285957 (Transaction_t1371701312 * __this, Il2CppObject * ___notification, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.Transaction::Equals(System.Object)
extern "C"  bool Transaction_Equals_m1809643446 (Transaction_t1371701312 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
extern "C"  bool Transaction_Equals_m1743910422 (Transaction_t1371701312 * __this, Transaction_t1371701312 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Transactions.Transaction::GetHashCode()
extern "C"  int32_t Transaction_GetHashCode_m1043939158 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::Rollback()
extern "C"  void Transaction_Rollback_m3801978495 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
extern "C"  void Transaction_Rollback_m1146972055 (Transaction_t1371701312 * __this, Exception_t1145979430 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Transactions.IEnlistmentNotification)
extern "C"  void Transaction_Rollback_m601490000 (Transaction_t1371701312 * __this, Exception_t1145979430 * ___ex, Il2CppObject * ___enlisted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
extern "C"  void Transaction_set_Aborted_m920233168 (Transaction_t1371701312 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
extern "C"  TransactionScope_t2839726848 * Transaction_get_Scope_m1949711221 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::set_Scope(System.Transactions.TransactionScope)
extern "C"  void Transaction_set_Scope_m3247888584 (Transaction_t1371701312 * __this, TransactionScope_t2839726848 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::CommitInternal()
extern "C"  void Transaction_CommitInternal_m797838023 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::DoCommit()
extern "C"  void Transaction_DoCommit_m1072896187 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::Complete()
extern "C"  void Transaction_Complete_m2515926970 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::DoPreparePhase()
extern "C"  void Transaction_DoPreparePhase_m1200442966 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::DoCommitPhase()
extern "C"  void Transaction_DoCommitPhase_m4149984918 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.ISinglePhaseNotification)
extern "C"  void Transaction_DoSingleCommit_m2979426744 (Transaction_t1371701312 * __this, Il2CppObject * ___single, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::CheckAborted()
extern "C"  void Transaction_CheckAborted_m2786769474 (Transaction_t1371701312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
extern "C"  void Transaction_EnsureIncompleteCurrentScope_m3481446252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C"  bool Transaction_op_Equality_m518739941 (Il2CppObject * __this /* static, unused */, Transaction_t1371701312 * ___x, Transaction_t1371701312 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C"  bool Transaction_op_Inequality_m1585364914 (Il2CppObject * __this /* static, unused */, Transaction_t1371701312 * ___x, Transaction_t1371701312 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
