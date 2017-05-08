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

// Mono.Data.Sqlite.SQLite3_UTF16
struct SQLite3_UTF16_t1831429821;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteDateFormat1592298981.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteOpenFlagsEn360223551.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatement3556180586.h"
#include "mscorlib_System_DateTime2933746480.h"

// System.Void Mono.Data.Sqlite.SQLite3_UTF16::.ctor(Mono.Data.Sqlite.SQLiteDateFormats)
extern "C"  void SQLite3_UTF16__ctor_m2465485424 (SQLite3_UTF16_t1831429821 * __this, int32_t ___fmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::ToString(System.IntPtr,System.Int32)
extern "C"  String_t* SQLite3_UTF16_ToString_m588079703 (SQLite3_UTF16_t1831429821 * __this, IntPtr_t ___b, int32_t ___nbytelen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::UTF16ToString(System.IntPtr,System.Int32)
extern "C"  String_t* SQLite3_UTF16_UTF16ToString_m4190961363 (Il2CppObject * __this /* static, unused */, IntPtr_t ___b, int32_t ___nbytelen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3_UTF16::Open(System.String,Mono.Data.Sqlite.SQLiteOpenFlagsEnum,System.Int32,System.Boolean)
extern "C"  void SQLite3_UTF16_Open_m871029912 (SQLite3_UTF16_t1831429821 * __this, String_t* ___strFilename, int32_t ___flags, int32_t ___maxPoolSize, bool ___usePool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3_UTF16::Bind_DateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.DateTime)
extern "C"  void SQLite3_UTF16_Bind_DateTime_m2300737003 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, DateTime_t2933746480  ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3_UTF16::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String)
extern "C"  void SQLite3_UTF16_Bind_Text_m982093103 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Data.Sqlite.SQLite3_UTF16::GetDateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  DateTime_t2933746480  SQLite3_UTF16_GetDateTime_m3816364436 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::ColumnName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_UTF16_ColumnName_m1469175946 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::GetText(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_UTF16_GetText_m1925035862 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::ColumnOriginalName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_UTF16_ColumnOriginalName_m475893171 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::ColumnDatabaseName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_UTF16_ColumnDatabaseName_m2913785043 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::ColumnTableName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_UTF16_ColumnTableName_m3547333960 (SQLite3_UTF16_t1831429821 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3_UTF16::GetParamValueText(System.IntPtr)
extern "C"  String_t* SQLite3_UTF16_GetParamValueText_m761464543 (SQLite3_UTF16_t1831429821 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3_UTF16::ReturnError(System.IntPtr,System.String)
extern "C"  void SQLite3_UTF16_ReturnError_m4017073017 (SQLite3_UTF16_t1831429821 * __this, IntPtr_t ___context, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3_UTF16::ReturnText(System.IntPtr,System.String)
extern "C"  void SQLite3_UTF16_ReturnText_m1638527140 (SQLite3_UTF16_t1831429821 * __this, IntPtr_t ___context, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
