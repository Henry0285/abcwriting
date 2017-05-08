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

// System.Data.Common.DbCommandBuilder
struct DbCommandBuilder_t25394394;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.Data.Common.DbParameter
struct DbParameter_t2495940673;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t3862711131;
// System.Data.Common.RowUpdatingEventArgs
struct RowUpdatingEventArgs_t2844185243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_Common_DbCommand637345143.h"
#include "System_Data_System_Data_Common_DbDataAdapter3862711131.h"
#include "System_Data_System_Data_Common_RowUpdatingEventArg2844185243.h"

// System.Void System.Data.Common.DbCommandBuilder::.ctor()
extern "C"  void DbCommandBuilder__ctor_m2537431582 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::.cctor()
extern "C"  void DbCommandBuilder__cctor_m4099758853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::BuildCache(System.Boolean)
extern "C"  void DbCommandBuilder_BuildCache_m410597803 (DbCommandBuilder_t25394394 * __this, bool ___closeConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbCommandBuilder::get_QuotedTableName()
extern "C"  String_t* DbCommandBuilder_get_QuotedTableName_m3882250549 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DbCommandBuilder::get_IsCommandGenerated()
extern "C"  bool DbCommandBuilder_get_IsCommandGenerated_m2615688605 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbCommandBuilder::GetQuotedString(System.String)
extern "C"  String_t* DbCommandBuilder_GetQuotedString_m629306474 (DbCommandBuilder_t25394394 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::BuildInformation(System.Data.DataTable)
extern "C"  void DbCommandBuilder_BuildInformation_m2158051743 (DbCommandBuilder_t25394394 * __this, DataTable_t1931745339 * ___schemaTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DbCommandBuilder::IncludedInInsert(System.Data.DataRow)
extern "C"  bool DbCommandBuilder_IncludedInInsert_m258290021 (DbCommandBuilder_t25394394 * __this, DataRow_t3422932271 * ___schemaRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DbCommandBuilder::IncludedInUpdate(System.Data.DataRow)
extern "C"  bool DbCommandBuilder_IncludedInUpdate_m4059218571 (DbCommandBuilder_t25394394 * __this, DataRow_t3422932271 * ___schemaRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DbCommandBuilder::IncludedInWhereClause(System.Data.DataRow)
extern "C"  bool DbCommandBuilder_IncludedInWhereClause_m2616127670 (DbCommandBuilder_t25394394 * __this, DataRow_t3422932271 * ___schemaRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::CreateDeleteCommand(System.Boolean)
extern "C"  DbCommand_t637345143 * DbCommandBuilder_CreateDeleteCommand_m3714059135 (DbCommandBuilder_t25394394 * __this, bool ___option, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::CreateInsertCommand(System.Boolean,System.Data.DataRow)
extern "C"  DbCommand_t637345143 * DbCommandBuilder_CreateInsertCommand_m2439625500 (DbCommandBuilder_t25394394 * __this, bool ___option, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::CreateNewCommand(System.Data.Common.DbCommand&)
extern "C"  void DbCommandBuilder_CreateNewCommand_m3666404498 (DbCommandBuilder_t25394394 * __this, DbCommand_t637345143 ** ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::CreateUpdateCommand(System.Boolean)
extern "C"  DbCommand_t637345143 * DbCommandBuilder_CreateUpdateCommand_m3023048899 (DbCommandBuilder_t25394394 * __this, bool ___option, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter System.Data.Common.DbCommandBuilder::CreateParameter(System.Data.Common.DbCommand,System.Data.DataRow,System.Boolean)
extern "C"  DbParameter_t2495940673 * DbCommandBuilder_CreateParameter_m2101399424 (DbCommandBuilder_t25394394 * __this, DbCommand_t637345143 * ____dbCommand, DataRow_t3422932271 * ___schemaRow, bool ___whereClause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter System.Data.Common.DbCommandBuilder::CreateParameter(System.Data.Common.DbCommand,System.Int32,System.Data.DataRow)
extern "C"  DbParameter_t2495940673 * DbCommandBuilder_CreateParameter_m63553406 (DbCommandBuilder_t25394394 * __this, DbCommand_t637345143 * ____dbCommand, int32_t ___paramIndex, DataRow_t3422932271 * ___schemaRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbDataAdapter System.Data.Common.DbCommandBuilder::get_DataAdapter()
extern "C"  DbDataAdapter_t3862711131 * DbCommandBuilder_get_DataAdapter_m3650863862 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::set_DataAdapter(System.Data.Common.DbDataAdapter)
extern "C"  void DbCommandBuilder_set_DataAdapter_m264392469 (DbCommandBuilder_t25394394 * __this, DbDataAdapter_t3862711131 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbCommandBuilder::get_QuotePrefix()
extern "C"  String_t* DbCommandBuilder_get_QuotePrefix_m2788320792 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::set_QuotePrefix(System.String)
extern "C"  void DbCommandBuilder_set_QuotePrefix_m3948829101 (DbCommandBuilder_t25394394 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbCommandBuilder::get_QuoteSuffix()
extern "C"  String_t* DbCommandBuilder_get_QuoteSuffix_m1639227025 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::set_QuoteSuffix(System.String)
extern "C"  void DbCommandBuilder_set_QuoteSuffix_m4141290158 (DbCommandBuilder_t25394394 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::get_SourceCommand()
extern "C"  DbCommand_t637345143 * DbCommandBuilder_get_SourceCommand_m3711791097 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::Dispose(System.Boolean)
extern "C"  void DbCommandBuilder_Dispose_m1766393284 (DbCommandBuilder_t25394394 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::GetDeleteCommand()
extern "C"  DbCommand_t637345143 * DbCommandBuilder_GetDeleteCommand_m2558907444 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::GetDeleteCommand(System.Boolean)
extern "C"  DbCommand_t637345143 * DbCommandBuilder_GetDeleteCommand_m2358972341 (DbCommandBuilder_t25394394 * __this, bool ___option, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::GetInsertCommand(System.Boolean,System.Data.DataRow)
extern "C"  DbCommand_t637345143 * DbCommandBuilder_GetInsertCommand_m2806161078 (DbCommandBuilder_t25394394 * __this, bool ___option, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::GetUpdateCommand()
extern "C"  DbCommand_t637345143 * DbCommandBuilder_GetUpdateCommand_m373972470 (DbCommandBuilder_t25394394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::GetUpdateCommand(System.Boolean)
extern "C"  DbCommand_t637345143 * DbCommandBuilder_GetUpdateCommand_m574402609 (DbCommandBuilder_t25394394 * __this, bool ___option, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbCommandBuilder::QuoteIdentifier(System.String)
extern "C"  String_t* DbCommandBuilder_QuoteIdentifier_m4086398068 (DbCommandBuilder_t25394394 * __this, String_t* ___unquotedIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbCommandBuilder::UnquoteIdentifier(System.String)
extern "C"  String_t* DbCommandBuilder_UnquoteIdentifier_m2785289383 (DbCommandBuilder_t25394394 * __this, String_t* ___quotedIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommandBuilder::RowUpdatingHandler(System.Data.Common.RowUpdatingEventArgs)
extern "C"  void DbCommandBuilder_RowUpdatingHandler_m832000425 (DbCommandBuilder_t25394394 * __this, RowUpdatingEventArgs_t2844185243 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
