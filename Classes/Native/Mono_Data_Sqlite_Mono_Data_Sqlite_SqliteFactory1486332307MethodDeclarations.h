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

// Mono.Data.Sqlite.SqliteFactory
struct SqliteFactory_t1486332307;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.Data.Common.DbConnection
struct DbConnection_t233213810;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t3862711131;
// System.Data.Common.DbParameter
struct DbParameter_t2495940673;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"

// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
extern "C"  void SqliteFactory__ctor_m2190402695 (SqliteFactory_t1486332307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFactory::.cctor()
extern "C"  void SqliteFactory__cctor_m3683927688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteFactory::System.IServiceProvider.GetService(System.Type)
extern "C"  Il2CppObject * SqliteFactory_System_IServiceProvider_GetService_m1922456574 (SqliteFactory_t1486332307 * __this, Type_t * ___serviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand Mono.Data.Sqlite.SqliteFactory::CreateCommand()
extern "C"  DbCommand_t637345143 * SqliteFactory_CreateCommand_m2471994446 (SqliteFactory_t1486332307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbConnection Mono.Data.Sqlite.SqliteFactory::CreateConnection()
extern "C"  DbConnection_t233213810 * SqliteFactory_CreateConnection_m1599423068 (SqliteFactory_t1486332307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbDataAdapter Mono.Data.Sqlite.SqliteFactory::CreateDataAdapter()
extern "C"  DbDataAdapter_t3862711131 * SqliteFactory_CreateDataAdapter_m3641128718 (SqliteFactory_t1486332307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteFactory::CreateParameter()
extern "C"  DbParameter_t2495940673 * SqliteFactory_CreateParameter_m3300037582 (SqliteFactory_t1486332307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
extern "C"  Il2CppObject * SqliteFactory_GetSQLiteProviderServicesInstance_m4039260790 (SqliteFactory_t1486332307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
