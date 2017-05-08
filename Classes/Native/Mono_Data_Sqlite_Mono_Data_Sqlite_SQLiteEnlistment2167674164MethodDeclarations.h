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

// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_t2167674164;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;
// System.Transactions.Transaction
struct Transaction_t1371701312;
// System.Transactions.Enlistment
struct Enlistment_t86096201;
// System.Transactions.PreparingEnlistment
struct PreparingEnlistment_t522094769;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"
#include "System_Transactions_System_Transactions_Transactio1371701312.h"
#include "System_Transactions_System_Transactions_Enlistment86096201.h"
#include "System_Transactions_System_Transactions_PreparingEn522094769.h"

// System.Void Mono.Data.Sqlite.SQLiteEnlistment::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Transactions.Transaction)
extern "C"  void SQLiteEnlistment__ctor_m729024045 (SQLiteEnlistment_t2167674164 * __this, SqliteConnection_t196696233 * ___cnn, Transaction_t1371701312 * ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Cleanup(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SQLiteEnlistment_Cleanup_m3944030215 (SQLiteEnlistment_t2167674164 * __this, SqliteConnection_t196696233 * ___cnn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Commit(System.Transactions.Enlistment)
extern "C"  void SQLiteEnlistment_Commit_m503740594 (SQLiteEnlistment_t2167674164 * __this, Enlistment_t86096201 * ___enlistment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Prepare(System.Transactions.PreparingEnlistment)
extern "C"  void SQLiteEnlistment_Prepare_m2736668954 (SQLiteEnlistment_t2167674164 * __this, PreparingEnlistment_t522094769 * ___preparingEnlistment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteEnlistment::Rollback(System.Transactions.Enlistment)
extern "C"  void SQLiteEnlistment_Rollback_m762837319 (SQLiteEnlistment_t2167674164 * __this, Enlistment_t86096201 * ___enlistment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
