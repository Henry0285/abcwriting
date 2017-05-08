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

// Mono.Data.Sqlite.SqliteCommandBuilder
struct SqliteCommandBuilder_t3106750017;
// Mono.Data.Sqlite.SqliteDataAdapter
struct SqliteDataAdapter_t3946922080;
// System.Data.Common.DbParameter
struct DbParameter_t2495940673;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.String
struct String_t;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t3862711131;
// System.Object
struct Il2CppObject;
// System.Data.Common.RowUpdatingEventArgs
struct RowUpdatingEventArgs_t2844185243;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteDataAdapte3946922080.h"
#include "System_Data_System_Data_Common_DbParameter2495940673.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_StatementType1932463478.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_Common_DbDataAdapter3862711131.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_RowUpdatingEventArg2844185243.h"

// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::.ctor()
extern "C"  void SqliteCommandBuilder__ctor_m1018707113 (SqliteCommandBuilder_t3106750017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::.ctor(Mono.Data.Sqlite.SqliteDataAdapter)
extern "C"  void SqliteCommandBuilder__ctor_m3905562195 (SqliteCommandBuilder_t3106750017 * __this, SqliteDataAdapter_t3946922080 * ___adp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::ApplyParameterInfo(System.Data.Common.DbParameter,System.Data.DataRow,System.Data.StatementType,System.Boolean)
extern "C"  void SqliteCommandBuilder_ApplyParameterInfo_m1944937819 (SqliteCommandBuilder_t3106750017 * __this, DbParameter_t2495940673 * ___parameter, DataRow_t3422932271 * ___row, int32_t ___statementType, bool ___whereClause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::GetParameterName(System.String)
extern "C"  String_t* SqliteCommandBuilder_GetParameterName_m4264859522 (SqliteCommandBuilder_t3106750017 * __this, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::GetParameterName(System.Int32)
extern "C"  String_t* SqliteCommandBuilder_GetParameterName_m954622961 (SqliteCommandBuilder_t3106750017 * __this, int32_t ___parameterOrdinal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::SetRowUpdatingHandler(System.Data.Common.DbDataAdapter)
extern "C"  void SqliteCommandBuilder_SetRowUpdatingHandler_m2689902372 (SqliteCommandBuilder_t3106750017 * __this, DbDataAdapter_t3862711131 * ___adapter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::RowUpdatingEventHandler(System.Object,System.Data.Common.RowUpdatingEventArgs)
extern "C"  void SqliteCommandBuilder_RowUpdatingEventHandler_m1436800964 (SqliteCommandBuilder_t3106750017 * __this, Il2CppObject * ___sender, RowUpdatingEventArgs_t2844185243 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::set_DataAdapter(Mono.Data.Sqlite.SqliteDataAdapter)
extern "C"  void SqliteCommandBuilder_set_DataAdapter_m3072890329 (SqliteCommandBuilder_t3106750017 * __this, SqliteDataAdapter_t3946922080 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::get_QuotePrefix()
extern "C"  String_t* SqliteCommandBuilder_get_QuotePrefix_m3609135743 (SqliteCommandBuilder_t3106750017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::set_QuotePrefix(System.String)
extern "C"  void SqliteCommandBuilder_set_QuotePrefix_m65988802 (SqliteCommandBuilder_t3106750017 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::get_QuoteSuffix()
extern "C"  String_t* SqliteCommandBuilder_get_QuoteSuffix_m518297156 (SqliteCommandBuilder_t3106750017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::set_QuoteSuffix(System.String)
extern "C"  void SqliteCommandBuilder_set_QuoteSuffix_m1045699711 (SqliteCommandBuilder_t3106750017 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::QuoteIdentifier(System.String)
extern "C"  String_t* SqliteCommandBuilder_QuoteIdentifier_m3882779919 (SqliteCommandBuilder_t3106750017 * __this, String_t* ___unquotedIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::UnquoteIdentifier(System.String)
extern "C"  String_t* SqliteCommandBuilder_UnquoteIdentifier_m430952570 (SqliteCommandBuilder_t3106750017 * __this, String_t* ___quotedIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
