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

// System.Data.DataRelationCollection
struct DataRelationCollection_t3900360787;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t1537071935;
// System.String
struct String_t;
// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t2303381684;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_CollectionChangeEvent1537071935.h"
#include "System_Data_System_Data_DataRelation3033993051.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_ComponentModel_CollectionChangeEvent2303381684.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"

// System.Void System.Data.DataRelationCollection::.ctor()
extern "C"  void DataRelationCollection__ctor_m3716994545 (DataRelationCollection_t3900360787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataRelationCollection_add_CollectionChanged_m3440053230 (DataRelationCollection_t3900360787 * __this, CollectionChangeEventHandler_t1537071935 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataRelationCollection_remove_CollectionChanged_m3013998057 (DataRelationCollection_t3900360787 * __this, CollectionChangeEventHandler_t1537071935 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelationCollection::GetNextDefaultRelationName()
extern "C"  String_t* DataRelationCollection_GetNextDefaultRelationName_m1543218531 (DataRelationCollection_t3900360787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::Add(System.Data.DataRelation)
extern "C"  void DataRelationCollection_Add_m2126525247 (DataRelationCollection_t3900360787 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelationCollection::GenerateRelationName()
extern "C"  String_t* DataRelationCollection_GenerateRelationName_m772452932 (DataRelationCollection_t3900360787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection::Add(System.String,System.Data.DataColumn[],System.Data.DataColumn[],System.Boolean)
extern "C"  DataRelation_t3033993051 * DataRelationCollection_Add_m3135274249 (DataRelationCollection_t3900360787 * __this, String_t* ___name, DataColumnU5BU5D_t2781139492* ___parentColumns, DataColumnU5BU5D_t2781139492* ___childColumns, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::AddCore(System.Data.DataRelation)
extern "C"  void DataRelationCollection_AddCore_m4132298942 (DataRelationCollection_t3900360787 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelationCollection::Contains(System.String)
extern "C"  bool DataRelationCollection_Contains_m1604088338 (DataRelationCollection_t3900360787 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.Data.DataRelation)
extern "C"  int32_t DataRelationCollection_IndexOf_m1806707215 (DataRelationCollection_t3900360787 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.String)
extern "C"  int32_t DataRelationCollection_IndexOf_m720084874 (DataRelationCollection_t3900360787 * __this, String_t* ___relationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataRelationCollection_IndexOf_m3510744937 (DataRelationCollection_t3900360787 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataRelationCollection_OnCollectionChanged_m2957241718 (DataRelationCollection_t3900360787 * __this, CollectionChangeEventArgs_t2303381684 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataRelationCollection_OnCollectionChanging_m2163012423 (DataRelationCollection_t3900360787 * __this, CollectionChangeEventArgs_t2303381684 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataRelationCollection_BinarySerialize_m1305325017 (DataRelationCollection_t3900360787 * __this, SerializationInfo_t1029367511 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
