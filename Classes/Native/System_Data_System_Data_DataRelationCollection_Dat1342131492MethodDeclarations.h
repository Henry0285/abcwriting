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

// System.Data.DataRelationCollection/DataSetRelationCollection
struct DataSetRelationCollection_t1342131492;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Data_System_Data_DataRelation3033993051.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::.ctor(System.Data.DataSet)
extern "C"  void DataSetRelationCollection__ctor_m353410995 (DataSetRelationCollection_t1342131492 * __this, DataSet_t646994783 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::GetDataSet()
extern "C"  DataSet_t646994783 * DataSetRelationCollection_GetDataSet_m2326140310 (DataSetRelationCollection_t1342131492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataSetRelationCollection_AddCore_m587435913 (DataSetRelationCollection_t1342131492 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataSetRelationCollection::get_List()
extern "C"  ArrayList_t1468494371 * DataSetRelationCollection_get_List_m1957793519 (DataSetRelationCollection_t1342131492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.String)
extern "C"  DataRelation_t3033993051 * DataSetRelationCollection_get_Item_m2964252676 (DataSetRelationCollection_t1342131492 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.Int32)
extern "C"  DataRelation_t3033993051 * DataSetRelationCollection_get_Item_m2004723285 (DataSetRelationCollection_t1342131492 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
