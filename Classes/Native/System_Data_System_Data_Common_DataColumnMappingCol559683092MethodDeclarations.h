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

// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t559683092;
// System.Object
struct Il2CppObject;
// System.Data.Common.DataColumnMapping
struct DataColumnMapping_t775562592;
// System.String
struct String_t;
// System.Data.Common.DataColumnMapping[]
struct DataColumnMappingU5BU5D_t1462024481;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataColumnMapping775562592.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Array4136897760.h"
#include "System_Data_System_Data_Common_DataColumnMappingCol559683092.h"
#include "System_Data_System_Data_MissingMappingAction3124835611.h"

// System.Void System.Data.Common.DataColumnMappingCollection::.ctor()
extern "C"  void DataColumnMappingCollection__ctor_m4236477332 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMappingCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * DataColumnMappingCollection_System_Collections_ICollection_get_SyncRoot_m547097832 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool DataColumnMappingCollection_System_Collections_ICollection_get_IsSynchronized_m4113849716 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * DataColumnMappingCollection_System_Collections_IList_get_Item_m216186459 (DataColumnMappingCollection_t559683092 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void DataColumnMappingCollection_System_Collections_IList_set_Item_m2617203118 (DataColumnMappingCollection_t559683092 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool DataColumnMappingCollection_System_Collections_IList_get_IsReadOnly_m2737917632 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool DataColumnMappingCollection_System_Collections_IList_get_IsFixedSize_m447207299 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::get_Count()
extern "C"  int32_t DataColumnMappingCollection_get_Count_m65205972 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::get_Item(System.Int32)
extern "C"  DataColumnMapping_t775562592 * DataColumnMappingCollection_get_Item_m876747838 (DataColumnMappingCollection_t559683092 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::set_Item(System.Int32,System.Data.Common.DataColumnMapping)
extern "C"  void DataColumnMappingCollection_set_Item_m1600040647 (DataColumnMappingCollection_t559683092 * __this, int32_t ___index, DataColumnMapping_t775562592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::get_Item(System.String)
extern "C"  DataColumnMapping_t775562592 * DataColumnMappingCollection_get_Item_m2228749499 (DataColumnMappingCollection_t559683092 * __this, String_t* ___sourceColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::Add(System.Object)
extern "C"  int32_t DataColumnMappingCollection_Add_m1780046163 (DataColumnMappingCollection_t559683092 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::Add(System.String,System.String)
extern "C"  DataColumnMapping_t775562592 * DataColumnMappingCollection_Add_m3668619728 (DataColumnMappingCollection_t559683092 * __this, String_t* ___sourceColumn, String_t* ___dataSetColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::AddRange(System.Data.Common.DataColumnMapping[])
extern "C"  void DataColumnMappingCollection_AddRange_m1117984612 (DataColumnMappingCollection_t559683092 * __this, DataColumnMappingU5BU5D_t1462024481* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Clear()
extern "C"  void DataColumnMappingCollection_Clear_m3431662539 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::Contains(System.Object)
extern "C"  bool DataColumnMappingCollection_Contains_m1494414403 (DataColumnMappingCollection_t559683092 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataColumnMappingCollection::Contains(System.String)
extern "C"  bool DataColumnMappingCollection_Contains_m171341071 (DataColumnMappingCollection_t559683092 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::CopyTo(System.Array,System.Int32)
extern "C"  void DataColumnMappingCollection_CopyTo_m2987255391 (DataColumnMappingCollection_t559683092 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::CopyTo(System.Data.Common.DataColumnMapping[],System.Int32)
extern "C"  void DataColumnMappingCollection_CopyTo_m1261971439 (DataColumnMappingCollection_t559683092 * __this, DataColumnMappingU5BU5D_t1462024481* ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMapping System.Data.Common.DataColumnMappingCollection::GetColumnMappingBySchemaAction(System.Data.Common.DataColumnMappingCollection,System.String,System.Data.MissingMappingAction)
extern "C"  DataColumnMapping_t775562592 * DataColumnMappingCollection_GetColumnMappingBySchemaAction_m116707076 (Il2CppObject * __this /* static, unused */, DataColumnMappingCollection_t559683092 * ___columnMappings, String_t* ___sourceColumn, int32_t ___mappingAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.Common.DataColumnMappingCollection::GetEnumerator()
extern "C"  Il2CppObject * DataColumnMappingCollection_GetEnumerator_m824329240 (DataColumnMappingCollection_t559683092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataColumnMappingCollection::IndexOf(System.Object)
extern "C"  int32_t DataColumnMappingCollection_IndexOf_m985786277 (DataColumnMappingCollection_t559683092 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Insert(System.Int32,System.Object)
extern "C"  void DataColumnMappingCollection_Insert_m3414326772 (DataColumnMappingCollection_t559683092 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::Remove(System.Object)
extern "C"  void DataColumnMappingCollection_Remove_m116528050 (DataColumnMappingCollection_t559683092 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataColumnMappingCollection::RemoveAt(System.Int32)
extern "C"  void DataColumnMappingCollection_RemoveAt_m3215901886 (DataColumnMappingCollection_t559683092 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
