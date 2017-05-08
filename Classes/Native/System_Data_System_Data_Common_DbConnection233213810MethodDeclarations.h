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

// System.Data.Common.DbConnection
struct DbConnection_t233213810;
// System.Data.IDbCommand
struct IDbCommand_t3795299841;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.Transactions.Transaction
struct Transaction_t1371701312;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t4104482225;

#include "codegen/il2cpp-codegen.h"
#include "System_Transactions_System_Transactions_Transactio1371701312.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_Common_DbCommand637345143.h"
#include "System_Data_System_Data_DbType824390233.h"

// System.Void System.Data.Common.DbConnection::.ctor()
extern "C"  void DbConnection__ctor_m2985444318 (DbConnection_t233213810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDbCommand System.Data.Common.DbConnection::System.Data.IDbConnection.CreateCommand()
extern "C"  Il2CppObject * DbConnection_System_Data_IDbConnection_CreateCommand_m3556790249 (DbConnection_t233213810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbConnection::CreateCommand()
extern "C"  DbCommand_t637345143 * DbConnection_CreateCommand_m1562783513 (DbConnection_t233213810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbConnection::EnlistTransaction(System.Transactions.Transaction)
extern "C"  void DbConnection_EnlistTransaction_m1210261181 (DbConnection_t233213810 * __this, Transaction_t1371701312 * ___transaction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.DbConnection::GetSchema(System.String)
extern "C"  DataTable_t1931745339 * DbConnection_GetSchema_m1658951375 (DbConnection_t233213810 * __this, String_t* ___collectionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbConnection::AddParameter(System.Data.Common.DbCommand,System.String,System.Data.DbType,System.Int32)
extern "C"  void DbConnection_AddParameter_m2383548141 (DbConnection_t233213810 * __this, DbCommand_t637345143 * ___command, String_t* ___parameterName, int32_t ___parameterType, int32_t ___parameterSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.DbConnection::GetSchema(System.String,System.String[])
extern "C"  DataTable_t1931745339 * DbConnection_GetSchema_m4142908883 (DbConnection_t233213810 * __this, String_t* ___collectionName, StringU5BU5D_t3764931161* ___restrictionValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbProviderFactory System.Data.Common.DbConnection::get_DbProviderFactory()
extern "C"  DbProviderFactory_t4104482225 * DbConnection_get_DbProviderFactory_m1130898014 (DbConnection_t233213810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
