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

// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1818895878;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t1378415992;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t4187736858;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteBase1818895878.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatementH1378415992.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatement3556180586.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteParameter4187736858.h"

// System.Void Mono.Data.Sqlite.SqliteStatement::.ctor(Mono.Data.Sqlite.SQLiteBase,Mono.Data.Sqlite.SqliteStatementHandle,System.String,Mono.Data.Sqlite.SqliteStatement)
extern "C"  void SqliteStatement__ctor_m3705907298 (SqliteStatement_t3556180586 * __this, SQLiteBase_t1818895878 * ___sqlbase, SqliteStatementHandle_t1378415992 * ___stmt, String_t* ___strCommand, SqliteStatement_t3556180586 * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
extern "C"  bool SqliteStatement_MapParameter_m3421976017 (SqliteStatement_t3556180586 * __this, String_t* ___s, SqliteParameter_t4187736858 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteStatement::Dispose()
extern "C"  void SqliteStatement_Dispose_m2914942309 (SqliteStatement_t3556180586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameters()
extern "C"  void SqliteStatement_BindParameters_m3187122349 (SqliteStatement_t3556180586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
extern "C"  void SqliteStatement_BindParameter_m1067317071 (SqliteStatement_t3556180586 * __this, int32_t ___index, SqliteParameter_t4187736858 * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Data.Sqlite.SqliteStatement::get_TypeDefinitions()
extern "C"  StringU5BU5D_t3764931161* SqliteStatement_get_TypeDefinitions_m2691691414 (SqliteStatement_t3556180586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteStatement::SetTypes(System.String)
extern "C"  void SqliteStatement_SetTypes_m2069379721 (SqliteStatement_t3556180586 * __this, String_t* ___typedefs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
