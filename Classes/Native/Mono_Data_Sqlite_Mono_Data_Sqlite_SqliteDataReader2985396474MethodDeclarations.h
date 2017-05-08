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

// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t2985396474;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t1985130020;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// Mono.Data.Sqlite.SQLiteType
struct SQLiteType_t2725963705;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteCommand1985130020.h"
#include "System_Data_System_Data_CommandBehavior371028736.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_TypeAffinity422422069.h"
#include "System_Data_System_Data_DbType824390233.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Data.Sqlite.SqliteDataReader::.ctor(Mono.Data.Sqlite.SqliteCommand,System.Data.CommandBehavior)
extern "C"  void SqliteDataReader__ctor_m2408068370 (SqliteDataReader_t2985396474 * __this, SqliteCommand_t1985130020 * ___cmd, int32_t ___behave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataReader::Close()
extern "C"  void SqliteDataReader_Close_m1436903758 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataReader::CheckClosed()
extern "C"  void SqliteDataReader_CheckClosed_m1409335810 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataReader::CheckValidRow()
extern "C"  void SqliteDataReader_CheckValidRow_m597497532 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteDataReader::GetEnumerator()
extern "C"  Il2CppObject * SqliteDataReader_GetEnumerator_m524745390 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_FieldCount()
extern "C"  int32_t SqliteDataReader_get_FieldCount_m3573579022 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_VisibleFieldCount()
extern "C"  int32_t SqliteDataReader_get_VisibleFieldCount_m3339191572 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteDataReader::VerifyType(System.Int32,System.Data.DbType)
extern "C"  int32_t SqliteDataReader_VerifyType_m3083586053 (SqliteDataReader_t2985396474 * __this, int32_t ___i, int32_t ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::GetBoolean(System.Int32)
extern "C"  bool SqliteDataReader_GetBoolean_m4079405073 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteDataReader::GetDataTypeName(System.Int32)
extern "C"  String_t* SqliteDataReader_GetDataTypeName_m918156639 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Data.Sqlite.SqliteDataReader::GetFieldType(System.Int32)
extern "C"  Type_t * SqliteDataReader_GetFieldType_m462091119 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetInt32(System.Int32)
extern "C"  int32_t SqliteDataReader_GetInt32_m2500022289 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SqliteDataReader::GetInt64(System.Int32)
extern "C"  int64_t SqliteDataReader_GetInt64_m3801319953 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteDataReader::GetName(System.Int32)
extern "C"  String_t* SqliteDataReader_GetName_m3971816119 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetOrdinal(System.String)
extern "C"  int32_t SqliteDataReader_GetOrdinal_m1574936199 (SqliteDataReader_t2985396474 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable()
extern "C"  DataTable_t1931745339 * SqliteDataReader_GetSchemaTable_m4236670855 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable(System.Boolean,System.Boolean)
extern "C"  DataTable_t1931745339 * SqliteDataReader_GetSchemaTable_m950175915 (SqliteDataReader_t2985396474 * __this, bool ___wantUniqueInfo, bool ___wantDefaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteDataReader::GetString(System.Int32)
extern "C"  String_t* SqliteDataReader_GetString_m2459858105 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteDataReader::GetValue(System.Int32)
extern "C"  Il2CppObject * SqliteDataReader_GetValue_m27798391 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetValues(System.Object[])
extern "C"  int32_t SqliteDataReader_GetValues_m1234223068 (SqliteDataReader_t2985396474 * __this, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::IsDBNull(System.Int32)
extern "C"  bool SqliteDataReader_IsDBNull_m2859389946 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::NextResult()
extern "C"  bool SqliteDataReader_NextResult_m1562581240 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SQLiteType Mono.Data.Sqlite.SqliteDataReader::GetSQLiteType(System.Int32)
extern "C"  SQLiteType_t2725963705 * SqliteDataReader_GetSQLiteType_m2686807609 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::Read()
extern "C"  bool SqliteDataReader_Read_m657069940 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::get_RecordsAffected()
extern "C"  int32_t SqliteDataReader_get_RecordsAffected_m2250607097 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteDataReader::get_Item(System.String)
extern "C"  Il2CppObject * SqliteDataReader_get_Item_m2972831253 (SqliteDataReader_t2985396474 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteDataReader::get_Item(System.Int32)
extern "C"  Il2CppObject * SqliteDataReader_get_Item_m1614902370 (SqliteDataReader_t2985396474 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataReader::LoadKeyInfo()
extern "C"  void SqliteDataReader_LoadKeyInfo_m1626395593 (SqliteDataReader_t2985396474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
