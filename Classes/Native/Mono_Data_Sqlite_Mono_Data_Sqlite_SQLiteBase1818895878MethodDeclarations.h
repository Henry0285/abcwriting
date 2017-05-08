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

// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1818895878;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteConnectionHandle
struct SqliteConnectionHandle_t1221216963;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t1378415992;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteDateFormat1592298981.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection1221216963.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatementH1378415992.h"

// System.Void Mono.Data.Sqlite.SQLiteBase::.ctor(Mono.Data.Sqlite.SQLiteDateFormats)
extern "C"  void SQLiteBase__ctor_m3456795263 (SQLiteBase_t1818895878 * __this, int32_t ___fmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::.cctor()
extern "C"  void SQLiteBase__cctor_m680906613 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::Dispose(System.Boolean)
extern "C"  void SQLiteBase_Dispose_m3874199172 (SQLiteBase_t1818895878 * __this, bool ___bDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::Dispose()
extern "C"  void SQLiteBase_Dispose_m2051824505 (SQLiteBase_t1818895878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLiteBase::SQLiteLastError(Mono.Data.Sqlite.SqliteConnectionHandle)
extern "C"  String_t* SQLiteBase_SQLiteLastError_m697548904 (Il2CppObject * __this /* static, unused */, SqliteConnectionHandle_t1221216963 * ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::FinalizeStatement(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C"  void SQLiteBase_FinalizeStatement_m2684560291 (Il2CppObject * __this /* static, unused */, SqliteStatementHandle_t1378415992 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::CloseConnection(Mono.Data.Sqlite.SqliteConnectionHandle)
extern "C"  void SQLiteBase_CloseConnection_m4227457243 (Il2CppObject * __this /* static, unused */, SqliteConnectionHandle_t1221216963 * ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteBase::ResetConnection(Mono.Data.Sqlite.SqliteConnectionHandle)
extern "C"  void SQLiteBase_ResetConnection_m4145945824 (Il2CppObject * __this /* static, unused */, SqliteConnectionHandle_t1221216963 * ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
