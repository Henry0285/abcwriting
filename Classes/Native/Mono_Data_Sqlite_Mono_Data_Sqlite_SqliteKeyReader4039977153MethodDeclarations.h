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

// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_t4039977153;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t2985396474;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Data.DataTable
struct DataTable_t1931745339;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteDataReader2985396474.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatement3556180586.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataTable1931745339.h"

// System.Void Mono.Data.Sqlite.SqliteKeyReader::.ctor(Mono.Data.Sqlite.SqliteConnection,Mono.Data.Sqlite.SqliteDataReader,Mono.Data.Sqlite.SqliteStatement)
extern "C"  void SqliteKeyReader__ctor_m3430323564 (SqliteKeyReader_t4039977153 * __this, SqliteConnection_t196696233 * ___cnn, SqliteDataReader_t2985396474 * ___reader, SqliteStatement_t3556180586 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::get_Count()
extern "C"  int32_t SqliteKeyReader_get_Count_m248159789 (SqliteKeyReader_t4039977153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
extern "C"  void SqliteKeyReader_Sync_m2798726623 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
extern "C"  void SqliteKeyReader_Sync_m2095183524 (SqliteKeyReader_t4039977153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Reset()
extern "C"  void SqliteKeyReader_Reset_m2982065504 (SqliteKeyReader_t4039977153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Dispose()
extern "C"  void SqliteKeyReader_Dispose_m1274987406 (SqliteKeyReader_t4039977153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetDataTypeName(System.Int32)
extern "C"  String_t* SqliteKeyReader_GetDataTypeName_m417765994 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Data.Sqlite.SqliteKeyReader::GetFieldType(System.Int32)
extern "C"  Type_t * SqliteKeyReader_GetFieldType_m1615394520 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetName(System.Int32)
extern "C"  String_t* SqliteKeyReader_GetName_m3348334298 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetOrdinal(System.String)
extern "C"  int32_t SqliteKeyReader_GetOrdinal_m1893058136 (SqliteKeyReader_t4039977153 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::GetBoolean(System.Int32)
extern "C"  bool SqliteKeyReader_GetBoolean_m2760026298 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetInt32(System.Int32)
extern "C"  int32_t SqliteKeyReader_GetInt32_m3554248922 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
extern "C"  int64_t SqliteKeyReader_GetInt64_m3195117112 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetString(System.Int32)
extern "C"  String_t* SqliteKeyReader_GetString_m2920672184 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteKeyReader::GetValue(System.Int32)
extern "C"  Il2CppObject * SqliteKeyReader_GetValue_m4087670368 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
extern "C"  bool SqliteKeyReader_IsDBNull_m1793085851 (SqliteKeyReader_t4039977153 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader::AppendSchemaTable(System.Data.DataTable)
extern "C"  void SqliteKeyReader_AppendSchemaTable_m1033899195 (SqliteKeyReader_t4039977153 * __this, DataTable_t1931745339 * ___tbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
