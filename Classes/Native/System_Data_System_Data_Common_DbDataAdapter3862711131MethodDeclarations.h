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

// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t3862711131;
// System.Data.IDbCommand
struct IDbCommand_t3795299841;
// System.Object
struct Il2CppObject;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.Data.DataTable
struct DataTable_t1931745339;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_Common_DbCommand637345143.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_CommandBehavior371028736.h"

// System.Void System.Data.Common.DbDataAdapter::.ctor()
extern "C"  void DbDataAdapter__ctor_m141506889 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDbCommand System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.get_SelectCommand()
extern "C"  Il2CppObject * DbDataAdapter_System_Data_IDbDataAdapter_get_SelectCommand_m4190398678 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.set_SelectCommand(System.Data.IDbCommand)
extern "C"  void DbDataAdapter_System_Data_IDbDataAdapter_set_SelectCommand_m199263891 (DbDataAdapter_t3862711131 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDbCommand System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.get_UpdateCommand()
extern "C"  Il2CppObject * DbDataAdapter_System_Data_IDbDataAdapter_get_UpdateCommand_m797589549 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.set_UpdateCommand(System.Data.IDbCommand)
extern "C"  void DbDataAdapter_System_Data_IDbDataAdapter_set_UpdateCommand_m318292880 (DbDataAdapter_t3862711131 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDbCommand System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.get_DeleteCommand()
extern "C"  Il2CppObject * DbDataAdapter_System_Data_IDbDataAdapter_get_DeleteCommand_m4187585793 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.set_DeleteCommand(System.Data.IDbCommand)
extern "C"  void DbDataAdapter_System_Data_IDbDataAdapter_set_DeleteCommand_m318300930 (DbDataAdapter_t3862711131 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.IDbCommand System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.get_InsertCommand()
extern "C"  Il2CppObject * DbDataAdapter_System_Data_IDbDataAdapter_get_InsertCommand_m2047911415 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::System.Data.IDbDataAdapter.set_InsertCommand(System.Data.IDbCommand)
extern "C"  void DbDataAdapter_System_Data_IDbDataAdapter_set_InsertCommand_m2611161380 (DbDataAdapter_t3862711131 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DbDataAdapter::System.ICloneable.Clone()
extern "C"  Il2CppObject * DbDataAdapter_System_ICloneable_Clone_m1041275844 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbDataAdapter::get_SelectCommand()
extern "C"  DbCommand_t637345143 * DbDataAdapter_get_SelectCommand_m3472173541 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::set_SelectCommand(System.Data.Common.DbCommand)
extern "C"  void DbDataAdapter_set_SelectCommand_m82164378 (DbDataAdapter_t3862711131 * __this, DbCommand_t637345143 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbDataAdapter::get_DeleteCommand()
extern "C"  DbCommand_t637345143 * DbDataAdapter_get_DeleteCommand_m3219218070 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::set_DeleteCommand(System.Data.Common.DbCommand)
extern "C"  void DbDataAdapter_set_DeleteCommand_m338389103 (DbDataAdapter_t3862711131 * __this, DbCommand_t637345143 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbDataAdapter::get_InsertCommand()
extern "C"  DbCommand_t637345143 * DbDataAdapter_get_InsertCommand_m4028418076 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::set_InsertCommand(System.Data.Common.DbCommand)
extern "C"  void DbDataAdapter_set_InsertCommand_m1466307425 (DbDataAdapter_t3862711131 * __this, DbCommand_t637345143 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbDataAdapter::get_UpdateCommand()
extern "C"  DbCommand_t637345143 * DbDataAdapter_get_UpdateCommand_m1788287672 (DbDataAdapter_t3862711131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::set_UpdateCommand(System.Data.Common.DbCommand)
extern "C"  void DbDataAdapter_set_UpdateCommand_m2228637603 (DbDataAdapter_t3862711131 * __this, DbCommand_t637345143 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbDataAdapter::Dispose(System.Boolean)
extern "C"  void DbDataAdapter_Dispose_m480336643 (DbDataAdapter_t3862711131 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DbDataAdapter::Fill(System.Data.DataTable)
extern "C"  int32_t DbDataAdapter_Fill_m4168882145 (DbDataAdapter_t3862711131 * __this, DataTable_t1931745339 * ___dataTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DbDataAdapter::Fill(System.Data.DataTable,System.Data.IDbCommand,System.Data.CommandBehavior)
extern "C"  int32_t DbDataAdapter_Fill_m103403276 (DbDataAdapter_t3862711131 * __this, DataTable_t1931745339 * ___dataTable, Il2CppObject * ___command, int32_t ___behavior, const MethodInfo* method) IL2CPP_METHOD_ATTR;
