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

// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t845819338;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataTableMapping
struct DataTableMapping_t1638836534;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataTableMapping1638836534.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Array4136897760.h"
#include "System_Data_System_Data_Common_DataTableMappingColl845819338.h"
#include "System_Data_System_Data_MissingMappingAction3124835611.h"

// System.Void System.Data.Common.DataTableMappingCollection::.ctor()
extern "C"  void DataTableMappingCollection__ctor_m1072020100 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataTableMappingCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * DataTableMappingCollection_System_Collections_IList_get_Item_m1079733259 (DataTableMappingCollection_t845819338 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void DataTableMappingCollection_System_Collections_IList_set_Item_m4214970742 (DataTableMappingCollection_t845819338 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataTableMappingCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool DataTableMappingCollection_System_Collections_ICollection_get_IsSynchronized_m746570132 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataTableMappingCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * DataTableMappingCollection_System_Collections_ICollection_get_SyncRoot_m2510543170 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataTableMappingCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool DataTableMappingCollection_System_Collections_IList_get_IsFixedSize_m2032807551 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataTableMappingCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool DataTableMappingCollection_System_Collections_IList_get_IsReadOnly_m2693453408 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataTableMappingCollection::get_Count()
extern "C"  int32_t DataTableMappingCollection_get_Count_m3931308140 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataTableMapping System.Data.Common.DataTableMappingCollection::get_Item(System.Int32)
extern "C"  DataTableMapping_t1638836534 * DataTableMappingCollection_get_Item_m3579629102 (DataTableMappingCollection_t845819338 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::set_Item(System.Int32,System.Data.Common.DataTableMapping)
extern "C"  void DataTableMappingCollection_set_Item_m3840799219 (DataTableMappingCollection_t845819338 * __this, int32_t ___index, DataTableMapping_t1638836534 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataTableMapping System.Data.Common.DataTableMappingCollection::get_Item(System.String)
extern "C"  DataTableMapping_t1638836534 * DataTableMappingCollection_get_Item_m57315491 (DataTableMappingCollection_t845819338 * __this, String_t* ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataTableMappingCollection::Add(System.Object)
extern "C"  int32_t DataTableMappingCollection_Add_m3442917655 (DataTableMappingCollection_t845819338 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::Clear()
extern "C"  void DataTableMappingCollection_Clear_m1321878383 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataTableMappingCollection::Contains(System.Object)
extern "C"  bool DataTableMappingCollection_Contains_m2890420607 (DataTableMappingCollection_t845819338 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataTableMappingCollection::Contains(System.String)
extern "C"  bool DataTableMappingCollection_Contains_m2895274467 (DataTableMappingCollection_t845819338 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::CopyTo(System.Array,System.Int32)
extern "C"  void DataTableMappingCollection_CopyTo_m947924203 (DataTableMappingCollection_t845819338 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataTableMapping System.Data.Common.DataTableMappingCollection::GetTableMappingBySchemaAction(System.Data.Common.DataTableMappingCollection,System.String,System.String,System.Data.MissingMappingAction)
extern "C"  DataTableMapping_t1638836534 * DataTableMappingCollection_GetTableMappingBySchemaAction_m3690781104 (Il2CppObject * __this /* static, unused */, DataTableMappingCollection_t845819338 * ___tableMappings, String_t* ___sourceTable, String_t* ___dataSetTable, int32_t ___mappingAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.Common.DataTableMappingCollection::GetEnumerator()
extern "C"  Il2CppObject * DataTableMappingCollection_GetEnumerator_m2797589136 (DataTableMappingCollection_t845819338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataTableMappingCollection::IndexOf(System.Object)
extern "C"  int32_t DataTableMappingCollection_IndexOf_m4283682221 (DataTableMappingCollection_t845819338 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataTableMappingCollection::IndexOfDataSetTable(System.String)
extern "C"  int32_t DataTableMappingCollection_IndexOfDataSetTable_m2461459377 (DataTableMappingCollection_t845819338 * __this, String_t* ___dataSetTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::Insert(System.Int32,System.Object)
extern "C"  void DataTableMappingCollection_Insert_m2010785988 (DataTableMappingCollection_t845819338 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::Remove(System.Object)
extern "C"  void DataTableMappingCollection_Remove_m1409489058 (DataTableMappingCollection_t845819338 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMappingCollection::RemoveAt(System.Int32)
extern "C"  void DataTableMappingCollection_RemoveAt_m3965123798 (DataTableMappingCollection_t845819338 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
