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

// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t4104482225;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataSet
struct DataSet_t646994783;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.Common.DbProviderFactories::.cctor()
extern "C"  void DbProviderFactories__cctor_m4236067748 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbProviderFactory System.Data.Common.DbProviderFactories::GetFactory(System.Data.DataRow)
extern "C"  DbProviderFactory_t4104482225 * DbProviderFactories_GetFactory_m923008416 (Il2CppObject * __this /* static, unused */, DataRow_t3422932271 * ___providerRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbProviderFactory System.Data.Common.DbProviderFactories::GetFactory(System.String)
extern "C"  DbProviderFactory_t4104482225 * DbProviderFactories_GetFactory_m1837670949 (Il2CppObject * __this /* static, unused */, String_t* ___providerInvariantName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.DbProviderFactories::GetFactoryClasses()
extern "C"  DataTable_t1931745339 * DbProviderFactories_GetFactoryClasses_m11728653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.Common.DbProviderFactories::GetConfigEntries()
extern "C"  DataSet_t646994783 * DbProviderFactories_GetConfigEntries_m948477493 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
