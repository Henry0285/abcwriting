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

// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2322360381;
// System.Data.Common.DbTransaction
struct DbTransaction_t2380109150;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t1985130020;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Collections.Generic.SortedList`2<System.String,System.String>
struct SortedList_2_t3093821685;
// System.Transactions.Transaction
struct Transaction_t1371701312;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t4104482225;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"
#include "System_Data_System_Data_ConnectionState1356093486.h"
#include "System_Data_System_Data_IsolationLevel3029761637.h"
#include "System_Transactions_System_Transactions_Transactio1371701312.h"

// System.Void Mono.Data.Sqlite.SqliteConnection::.ctor()
extern "C"  void SqliteConnection__ctor_m954248961 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::.ctor(System.String)
extern "C"  void SqliteConnection__ctor_m1770256311 (SqliteConnection_t196696233 * __this, String_t* ___connectionString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::.ctor(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteConnection__ctor_m897236434 (SqliteConnection_t196696233 * __this, SqliteConnection_t196696233 * ___connection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteConnection::Clone()
extern "C"  Il2CppObject * SqliteConnection_Clone_m4079009895 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::Dispose(System.Boolean)
extern "C"  void SqliteConnection_Dispose_m1585209373 (SqliteConnection_t196696233 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::OnStateChange(System.Data.ConnectionState)
extern "C"  void SqliteConnection_OnStateChange_m3081039901 (SqliteConnection_t196696233 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteConnection::BeginTransaction()
extern "C"  SqliteTransaction_t2322360381 * SqliteConnection_BeginTransaction_m9422390 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbTransaction Mono.Data.Sqlite.SqliteConnection::BeginDbTransaction(System.Data.IsolationLevel)
extern "C"  DbTransaction_t2380109150 * SqliteConnection_BeginDbTransaction_m1666314844 (SqliteConnection_t196696233 * __this, int32_t ___isolationLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::Close()
extern "C"  void SqliteConnection_Close_m3410116383 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConnection::get_ConnectionString()
extern "C"  String_t* SqliteConnection_get_ConnectionString_m1816508948 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::set_ConnectionString(System.String)
extern "C"  void SqliteConnection_set_ConnectionString_m1346458597 (SqliteConnection_t196696233 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
extern "C"  SqliteCommand_t1985130020 * SqliteConnection_CreateCommand_m2109131011 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand Mono.Data.Sqlite.SqliteConnection::CreateDbCommand()
extern "C"  DbCommand_t637345143 * SqliteConnection_CreateDbCommand_m2041232558 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::MapMonoKeyword(System.String[],System.Collections.Generic.SortedList`2<System.String,System.String>)
extern "C"  void SqliteConnection_MapMonoKeyword_m1053129421 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t3764931161* ___arPiece, SortedList_2_t3093821685 * ___ls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConnection::MapMonoUriPath(System.String)
extern "C"  String_t* SqliteConnection_MapMonoUriPath_m2306159380 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConnection::MapUriPath(System.String)
extern "C"  String_t* SqliteConnection_MapUriPath_m4211630053 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedList`2<System.String,System.String> Mono.Data.Sqlite.SqliteConnection::ParseConnectionString(System.String)
extern "C"  SortedList_2_t3093821685 * SqliteConnection_ParseConnectionString_m62224634 (Il2CppObject * __this /* static, unused */, String_t* ___connectionString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::EnlistTransaction(System.Transactions.Transaction)
extern "C"  void SqliteConnection_EnlistTransaction_m2863375942 (SqliteConnection_t196696233 * __this, Transaction_t1371701312 * ___transaction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConnection::FindKey(System.Collections.Generic.SortedList`2<System.String,System.String>,System.String,System.String)
extern "C"  String_t* SqliteConnection_FindKey_m2176296728 (Il2CppObject * __this /* static, unused */, SortedList_2_t3093821685 * ___items, String_t* ___key, String_t* ___defValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnection::Open()
extern "C"  void SqliteConnection_Open_m3529561857 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteConnection::get_DefaultTimeout()
extern "C"  int32_t SqliteConnection_get_DefaultTimeout_m360842554 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::get_State()
extern "C"  int32_t SqliteConnection_get_State_m1995332038 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConnection::ExpandFileName(System.String)
extern "C"  String_t* SqliteConnection_ExpandFileName_m2311022529 (SqliteConnection_t196696233 * __this, String_t* ___sourceFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::GetSchema(System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_GetSchema_m3114472126 (SqliteConnection_t196696233 * __this, String_t* ___collectionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::GetSchema(System.String,System.String[])
extern "C"  DataTable_t1931745339 * SqliteConnection_GetSchema_m2233968338 (SqliteConnection_t196696233 * __this, String_t* ___collectionName, StringU5BU5D_t3764931161* ___restrictionValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_ReservedWords()
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_ReservedWords_m388186846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_MetaDataCollections()
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_MetaDataCollections_m95008571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_DataSourceInformation()
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_DataSourceInformation_m24863486 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_Columns(System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_Columns_m3765966166 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strTable, String_t* ___strColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_Indexes(System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_Indexes_m2958989681 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strTable, String_t* ___strIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_Triggers(System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_Triggers_m3821785912 (SqliteConnection_t196696233 * __this, String_t* ___catalog, String_t* ___table, String_t* ___triggerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_Tables(System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_Tables_m1614405336 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strTable, String_t* ___strType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_Views(System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_Views_m1147635949 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_Catalogs(System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_Catalogs_m244823333 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_DataTypes()
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_DataTypes_m3193158218 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_IndexColumns(System.String,System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_IndexColumns_m2454495394 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strTable, String_t* ___strIndex, String_t* ___strColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_ViewColumns(System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_ViewColumns_m873851833 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strView, String_t* ___strColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::Schema_ForeignKeys(System.String,System.String,System.String)
extern "C"  DataTable_t1931745339 * SqliteConnection_Schema_ForeignKeys_m1089070447 (SqliteConnection_t196696233 * __this, String_t* ___strCatalog, String_t* ___strTable, String_t* ___strKeyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbProviderFactory Mono.Data.Sqlite.SqliteConnection::get_DbProviderFactory()
extern "C"  DbProviderFactory_t4104482225 * SqliteConnection_get_DbProviderFactory_m2583833169 (SqliteConnection_t196696233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
