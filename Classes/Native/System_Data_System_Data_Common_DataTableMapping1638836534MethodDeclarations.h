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

// System.Data.Common.DataTableMapping
struct DataTableMapping_t1638836534;
// System.String
struct String_t;
// System.Data.Common.DataColumnMapping[]
struct DataColumnMappingU5BU5D_t1462024481;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t559683092;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.Common.DataTableMapping::.ctor()
extern "C"  void DataTableMapping__ctor_m4043302668 (DataTableMapping_t1638836534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::.ctor(System.String,System.String)
extern "C"  void DataTableMapping__ctor_m1551207262 (DataTableMapping_t1638836534 * __this, String_t* ___sourceTable, String_t* ___dataSetTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::.ctor(System.String,System.String,System.Data.Common.DataColumnMapping[])
extern "C"  void DataTableMapping__ctor_m3806435098 (DataTableMapping_t1638836534 * __this, String_t* ___sourceTable, String_t* ___dataSetTable, DataColumnMappingU5BU5D_t1462024481* ___columnMappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataTableMapping::System.ICloneable.Clone()
extern "C"  Il2CppObject * DataTableMapping_System_ICloneable_Clone_m3015011351 (DataTableMapping_t1638836534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::get_ColumnMappings()
extern "C"  DataColumnMappingCollection_t559683092 * DataTableMapping_get_ColumnMappings_m795140473 (DataTableMapping_t1638836534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::get_DataSetTable()
extern "C"  String_t* DataTableMapping_get_DataSetTable_m2267317196 (DataTableMapping_t1638836534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::set_DataSetTable(System.String)
extern "C"  void DataTableMapping_set_DataSetTable_m1320755627 (DataTableMapping_t1638836534 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::get_SourceTable()
extern "C"  String_t* DataTableMapping_get_SourceTable_m3919135243 (DataTableMapping_t1638836534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::set_SourceTable(System.String)
extern "C"  void DataTableMapping_set_SourceTable_m1893004374 (DataTableMapping_t1638836534 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::ToString()
extern "C"  String_t* DataTableMapping_ToString_m1536203659 (DataTableMapping_t1638836534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
