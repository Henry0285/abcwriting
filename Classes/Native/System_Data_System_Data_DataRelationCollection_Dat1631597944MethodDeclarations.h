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

// System.Data.DataRelationCollection/DataTableRelationCollection
struct DataTableRelationCollection_t1631597944;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataRelation3033993051.h"

// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::.ctor(System.Data.DataTable)
extern "C"  void DataTableRelationCollection__ctor_m4221685739 (DataTableRelationCollection_t1631597944 * __this, DataTable_t1931745339 * ___dataTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataTableRelationCollection::GetDataSet()
extern "C"  DataSet_t646994783 * DataTableRelationCollection_GetDataSet_m239054706 (DataTableRelationCollection_t1631597944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.String)
extern "C"  DataRelation_t3033993051 * DataTableRelationCollection_get_Item_m2632608048 (DataTableRelationCollection_t1631597944 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.Int32)
extern "C"  DataRelation_t3033993051 * DataTableRelationCollection_get_Item_m1504628617 (DataTableRelationCollection_t1631597944 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataTableRelationCollection_AddCore_m2037615085 (DataTableRelationCollection_t1631597944 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataTableRelationCollection::get_List()
extern "C"  ArrayList_t1468494371 * DataTableRelationCollection_get_List_m3480677091 (DataTableRelationCollection_t1631597944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
