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

// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.Data.IDbConnection
struct IDbConnection_t1049020466;
// System.Data.IDataReader
struct IDataReader_t1583822747;
// System.Data.Common.DbConnection
struct DbConnection_t233213810;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_t730125587;
// System.Data.Common.DbTransaction
struct DbTransaction_t2380109150;
// System.Data.Common.DbParameter
struct DbParameter_t2495940673;
// System.Data.Common.DbDataReader
struct DbDataReader_t271574017;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_CommandBehavior371028736.h"
#include "System_Data_System_Data_Common_DbConnection233213810.h"
#include "System_Data_System_Data_Common_DbTransaction2380109150.h"

// System.Void System.Data.Common.DbCommand::.ctor()
extern "C"  void DbCommand__ctor_m3009211325 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDbConnection System.Data.Common.DbCommand::System.Data.IDbCommand.get_Connection()
extern "C"  Il2CppObject * DbCommand_System_Data_IDbCommand_get_Connection_m2950562242 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDataReader System.Data.Common.DbCommand::System.Data.IDbCommand.ExecuteReader()
extern "C"  Il2CppObject * DbCommand_System_Data_IDbCommand_ExecuteReader_m3104741264 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDataReader System.Data.Common.DbCommand::System.Data.IDbCommand.ExecuteReader(System.Data.CommandBehavior)
extern "C"  Il2CppObject * DbCommand_System_Data_IDbCommand_ExecuteReader_m1030570494 (DbCommand_t637345143 * __this, int32_t ___behavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbConnection System.Data.Common.DbCommand::get_Connection()
extern "C"  DbConnection_t233213810 * DbCommand_get_Connection_m4085935113 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommand::set_Connection(System.Data.Common.DbConnection)
extern "C"  void DbCommand_set_Connection_m2099873922 (DbCommand_t637345143 * __this, DbConnection_t233213810 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameterCollection System.Data.Common.DbCommand::get_Parameters()
extern "C"  DbParameterCollection_t730125587 * DbCommand_get_Parameters_m971364592 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbTransaction System.Data.Common.DbCommand::get_Transaction()
extern "C"  DbTransaction_t2380109150 * DbCommand_get_Transaction_m1801669913 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbCommand::set_Transaction(System.Data.Common.DbTransaction)
extern "C"  void DbCommand_set_Transaction_m3987418442 (DbCommand_t637345143 * __this, DbTransaction_t2380109150 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter System.Data.Common.DbCommand::CreateParameter()
extern "C"  DbParameter_t2495940673 * DbCommand_CreateParameter_m3592379778 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbDataReader System.Data.Common.DbCommand::ExecuteReader()
extern "C"  DbDataReader_t271574017 * DbCommand_ExecuteReader_m3105536687 (DbCommand_t637345143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbDataReader System.Data.Common.DbCommand::ExecuteReader(System.Data.CommandBehavior)
extern "C"  DbDataReader_t271574017 * DbCommand_ExecuteReader_m1348136093 (DbCommand_t637345143 * __this, int32_t ___behavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
