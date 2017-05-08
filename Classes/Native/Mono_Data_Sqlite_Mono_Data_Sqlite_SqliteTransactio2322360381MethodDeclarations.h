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

// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2322360381;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"

// System.Void Mono.Data.Sqlite.SqliteTransaction::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Boolean)
extern "C"  void SqliteTransaction__ctor_m235721791 (SqliteTransaction_t2322360381 * __this, SqliteConnection_t196696233 * ___connection, bool ___deferredLock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteTransaction::Commit()
extern "C"  void SqliteTransaction_Commit_m299670358 (SqliteTransaction_t2322360381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::get_Connection()
extern "C"  SqliteConnection_t196696233 * SqliteTransaction_get_Connection_m4261987646 (SqliteTransaction_t2322360381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteTransaction::Dispose(System.Boolean)
extern "C"  void SqliteTransaction_Dispose_m1208270359 (SqliteTransaction_t2322360381 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
extern "C"  void SqliteTransaction_Rollback_m2980438049 (SqliteTransaction_t2322360381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteTransaction_IssueRollback_m1558156951 (Il2CppObject * __this /* static, unused */, SqliteConnection_t196696233 * ___cnn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
extern "C"  bool SqliteTransaction_IsValid_m1474150736 (SqliteTransaction_t2322360381 * __this, bool ___throwError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
