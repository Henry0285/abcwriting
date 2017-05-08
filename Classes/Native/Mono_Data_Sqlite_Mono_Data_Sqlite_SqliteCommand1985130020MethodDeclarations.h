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

// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t1985130020;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2322360381;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;
// System.Data.Common.DbParameter
struct DbParameter_t2495940673;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t4187736858;
// System.Data.Common.DbConnection
struct DbConnection_t233213810;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t3688613832;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_t730125587;
// System.Data.Common.DbTransaction
struct DbTransaction_t2380109150;
// System.Data.Common.DbDataReader
struct DbDataReader_t271574017;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t2985396474;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteCommand1985130020.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteTransactio2322360381.h"
#include "System_Data_System_Data_CommandType2603309696.h"
#include "System_Data_System_Data_Common_DbConnection233213810.h"
#include "System_Data_System_Data_Common_DbTransaction2380109150.h"
#include "System_Data_System_Data_CommandBehavior371028736.h"
#include "System_Data_System_Data_UpdateRowSource403866257.h"

// System.Void Mono.Data.Sqlite.SqliteCommand::.ctor()
extern "C"  void SqliteCommand__ctor_m3361951736 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::.ctor(System.String,Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteCommand__ctor_m3471727521 (SqliteCommand_t1985130020 * __this, String_t* ___commandText, SqliteConnection_t196696233 * ___connection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::.ctor(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteCommand__ctor_m1436146455 (SqliteCommand_t1985130020 * __this, SqliteConnection_t196696233 * ___connection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::.ctor(Mono.Data.Sqlite.SqliteCommand)
extern "C"  void SqliteCommand__ctor_m3577478568 (SqliteCommand_t1985130020 * __this, SqliteCommand_t1985130020 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::.ctor(System.String,Mono.Data.Sqlite.SqliteConnection,Mono.Data.Sqlite.SqliteTransaction)
extern "C"  void SqliteCommand__ctor_m2015446104 (SqliteCommand_t1985130020 * __this, String_t* ___commandText, SqliteConnection_t196696233 * ___connection, SqliteTransaction_t2322360381 * ___transaction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::Dispose(System.Boolean)
extern "C"  void SqliteCommand_Dispose_m1892682316 (SqliteCommand_t1985130020 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::ClearCommands()
extern "C"  void SqliteCommand_ClearCommands_m3468117473 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteCommand::BuildNextCommand()
extern "C"  SqliteStatement_t3556180586 * SqliteCommand_BuildNextCommand_m3431934565 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteCommand::GetStatement(System.Int32)
extern "C"  SqliteStatement_t3556180586 * SqliteCommand_GetStatement_m4023257717 (SqliteCommand_t1985130020 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommand::get_CommandText()
extern "C"  String_t* SqliteCommand_get_CommandText_m4041125766 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandText(System.String)
extern "C"  void SqliteCommand_set_CommandText_m3920849105 (SqliteCommand_t1985130020 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteCommand::get_CommandTimeout()
extern "C"  int32_t SqliteCommand_get_CommandTimeout_m1894518279 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandTimeout(System.Int32)
extern "C"  void SqliteCommand_set_CommandTimeout_m944091150 (SqliteCommand_t1985130020 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandType(System.Data.CommandType)
extern "C"  void SqliteCommand_set_CommandType_m1538770018 (SqliteCommand_t1985130020 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteCommand::CreateDbParameter()
extern "C"  DbParameter_t2495940673 * SqliteCommand_CreateDbParameter_m3587890773 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteCommand::CreateParameter()
extern "C"  SqliteParameter_t4187736858 * SqliteCommand_CreateParameter_m430304730 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::get_Connection()
extern "C"  SqliteConnection_t196696233 * SqliteCommand_get_Connection_m4178334547 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_Connection(Mono.Data.Sqlite.SqliteConnection)
extern "C"  void SqliteCommand_set_Connection_m1088246086 (SqliteCommand_t1985130020 * __this, SqliteConnection_t196696233 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbConnection Mono.Data.Sqlite.SqliteCommand::get_DbConnection()
extern "C"  DbConnection_t233213810 * SqliteCommand_get_DbConnection_m1653119744 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_DbConnection(System.Data.Common.DbConnection)
extern "C"  void SqliteCommand_set_DbConnection_m1844391587 (SqliteCommand_t1985130020 * __this, DbConnection_t233213810 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::get_Parameters()
extern "C"  SqliteParameterCollection_t3688613832 * SqliteCommand_get_Parameters_m986022120 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameterCollection Mono.Data.Sqlite.SqliteCommand::get_DbParameterCollection()
extern "C"  DbParameterCollection_t730125587 * SqliteCommand_get_DbParameterCollection_m2335615962 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::get_Transaction()
extern "C"  SqliteTransaction_t2322360381 * SqliteCommand_get_Transaction_m3436771039 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_Transaction(Mono.Data.Sqlite.SqliteTransaction)
extern "C"  void SqliteCommand_set_Transaction_m881328064 (SqliteCommand_t1985130020 * __this, SqliteTransaction_t2322360381 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbTransaction Mono.Data.Sqlite.SqliteCommand::get_DbTransaction()
extern "C"  DbTransaction_t2380109150 * SqliteCommand_get_DbTransaction_m4283904442 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_DbTransaction(System.Data.Common.DbTransaction)
extern "C"  void SqliteCommand_set_DbTransaction_m1648605011 (SqliteCommand_t1985130020 * __this, DbTransaction_t2380109150 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::InitializeForReader()
extern "C"  void SqliteCommand_InitializeForReader_m2092882122 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteDbDataReader(System.Data.CommandBehavior)
extern "C"  DbDataReader_t271574017 * SqliteCommand_ExecuteDbDataReader_m3289602040 (SqliteCommand_t1985130020 * __this, int32_t ___behavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader(System.Data.CommandBehavior)
extern "C"  SqliteDataReader_t2985396474 * SqliteCommand_ExecuteReader_m1887329539 (SqliteCommand_t1985130020 * __this, int32_t ___behavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader()
extern "C"  SqliteDataReader_t2985396474 * SqliteCommand_ExecuteReader_m1931210397 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::ClearDataReader()
extern "C"  void SqliteCommand_ClearDataReader_m957110474 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteCommand::ExecuteNonQuery()
extern "C"  int32_t SqliteCommand_ExecuteNonQuery_m1232322478 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::get_UpdatedRowSource()
extern "C"  int32_t SqliteCommand_get_UpdatedRowSource_m973547779 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_UpdatedRowSource(System.Data.UpdateRowSource)
extern "C"  void SqliteCommand_set_UpdatedRowSource_m460226616 (SqliteCommand_t1985130020 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteCommand::get_DesignTimeVisible()
extern "C"  bool SqliteCommand_get_DesignTimeVisible_m274391792 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommand::set_DesignTimeVisible(System.Boolean)
extern "C"  void SqliteCommand_set_DesignTimeVisible_m3103049299 (SqliteCommand_t1985130020 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteCommand::Clone()
extern "C"  Il2CppObject * SqliteCommand_Clone_m1126359508 (SqliteCommand_t1985130020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
