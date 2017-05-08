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

// System.Data.DataColumnCollection
struct DataColumnCollection_t2212631745;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t1537071935;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Type
struct Type_t;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t2303381684;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3995238283;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_System_ComponentModel_CollectionChangeEvent1537071935.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "mscorlib_System_Type77837473.h"
#include "System_System_ComponentModel_CollectionChangeEvent2303381684.h"
#include "mscorlib_System_Object707969140.h"
#include "System_System_ComponentModel_PropertyChangedEventA3995238283.h"

// System.Void System.Data.DataColumnCollection::.ctor(System.Data.DataTable)
extern "C"  void DataColumnCollection__ctor_m2622663562 (DataColumnCollection_t2212631745 * __this, DataTable_t1931745339 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::.cctor()
extern "C"  void DataColumnCollection__cctor_m3752498938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataColumnCollection_add_CollectionChanged_m729410076 (DataColumnCollection_t2212631745 * __this, CollectionChangeEventHandler_t1537071935 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C"  void DataColumnCollection_remove_CollectionChanged_m2226670081 (DataColumnCollection_t2212631745 * __this, CollectionChangeEventHandler_t1537071935 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.Int32)
extern "C"  DataColumn_t1080745049 * DataColumnCollection_get_Item_m330535932 (DataColumnCollection_t2212631745 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.String)
extern "C"  DataColumn_t1080745049 * DataColumnCollection_get_Item_m1114833311 (DataColumnCollection_t2212631745 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_List()
extern "C"  ArrayList_t1468494371 * DataColumnCollection_get_List_m664376552 (DataColumnCollection_t2212631745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_AutoIncrmentColumns()
extern "C"  ArrayList_t1468494371 * DataColumnCollection_get_AutoIncrmentColumns_m1047380742 (DataColumnCollection_t2212631745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add()
extern "C"  DataColumn_t1080745049 * DataColumnCollection_Add_m122413616 (DataColumnCollection_t2212631745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::RegisterName(System.String,System.Data.DataColumn)
extern "C"  void DataColumnCollection_RegisterName_m2614167456 (DataColumnCollection_t2212631745 * __this, String_t* ___name, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UnregisterName(System.String)
extern "C"  void DataColumnCollection_UnregisterName_m4114106500 (DataColumnCollection_t2212631745 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::GetNextDefaultColumnName()
extern "C"  String_t* DataColumnCollection_GetNextDefaultColumnName_m3738337955 (DataColumnCollection_t2212631745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::MakeName(System.Int32)
extern "C"  String_t* DataColumnCollection_MakeName_m1936782642 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::Add(System.Data.DataColumn)
extern "C"  void DataColumnCollection_Add_m1535510655 (DataColumnCollection_t2212631745 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add(System.String,System.Type)
extern "C"  DataColumn_t1080745049 * DataColumnCollection_Add_m3814998095 (DataColumnCollection_t2212631745 * __this, String_t* ___columnName, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumnCollection::Contains(System.String)
extern "C"  bool DataColumnCollection_Contains_m91325880 (DataColumnCollection_t2212631745 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.Data.DataColumn)
extern "C"  int32_t DataColumnCollection_IndexOf_m3998212239 (DataColumnCollection_t2212631745 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String)
extern "C"  int32_t DataColumnCollection_IndexOf_m2960511136 (DataColumnCollection_t2212631745 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataColumnCollection_OnCollectionChanged_m2298669684 (DataColumnCollection_t2212631745 * __this, CollectionChangeEventArgs_t2303381684 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UpdateAutoIncrement(System.Data.DataColumn,System.Boolean)
extern "C"  void DataColumnCollection_UpdateAutoIncrement_m1903451048 (DataColumnCollection_t2212631745 * __this, DataColumn_t1080745049 * ___col, bool ___isAutoIncrement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String,System.Boolean)
extern "C"  int32_t DataColumnCollection_IndexOf_m407761505 (DataColumnCollection_t2212631745 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionMetaDataChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void DataColumnCollection_OnCollectionMetaDataChanged_m1230521015 (DataColumnCollection_t2212631745 * __this, CollectionChangeEventArgs_t2303381684 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::ColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void DataColumnCollection_ColumnPropertyChanged_m376032347 (DataColumnCollection_t2212631745 * __this, Il2CppObject * ___sender, PropertyChangedEventArgs_t3995238283 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
