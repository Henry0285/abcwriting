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

// System.Data.DataRowCollection
struct DataRowCollection_t851321131;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t609236864;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataRowAction1490589201.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataViewRowState4009542207.h"
#include "System_System_ComponentModel_ListChangedEventArgs609236864.h"
#include "mscorlib_System_Array4136897760.h"

// System.Void System.Data.DataRowCollection::.ctor(System.Data.DataTable)
extern "C"  void DataRowCollection__ctor_m3263022972 (DataRowCollection_t851321131 * __this, DataTable_t1931745339 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
extern "C"  DataRow_t3422932271 * DataRowCollection_get_Item_m850194680 (DataRowCollection_t851321131 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
extern "C"  void DataRowCollection_Add_m3829541117 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::IndexOf(System.Data.DataRow)
extern "C"  int32_t DataRowCollection_IndexOf_m76095287 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow)
extern "C"  void DataRowCollection_AddInternal_m3743157370 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::AddInternal(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataRowCollection_AddInternal_m3062819217 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
extern "C"  DataRow_t3422932271 * DataRowCollection_Add_m3513641452 (DataRowCollection_t851321131 * __this, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object)
extern "C"  DataRow_t3422932271 * DataRowCollection_Find_m117501962 (DataRowCollection_t851321131 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[])
extern "C"  DataRow_t3422932271 * DataRowCollection_Find_m2843148006 (DataRowCollection_t851321131 * __this, ObjectU5BU5D_t3632007997* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRowCollection::Find(System.Object[],System.Data.DataViewRowState)
extern "C"  DataRow_t3422932271 * DataRowCollection_Find_m2894196553 (DataRowCollection_t851321131 * __this, ObjectU5BU5D_t3632007997* ___keys, int32_t ___rowStateFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::InsertAt(System.Data.DataRow,System.Int32)
extern "C"  void DataRowCollection_InsertAt_m3710637541 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::RemoveInternal(System.Data.DataRow)
extern "C"  void DataRowCollection_RemoveInternal_m709603263 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::Remove(System.Data.DataRow)
extern "C"  void DataRowCollection_Remove_m1645542232 (DataRowCollection_t851321131 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::RemoveAt(System.Int32)
extern "C"  void DataRowCollection_RemoveAt_m3578993601 (DataRowCollection_t851321131 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::OnListChanged(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C"  void DataRowCollection_OnListChanged_m2222344596 (DataRowCollection_t851321131 * __this, Il2CppObject * ___sender, ListChangedEventArgs_t609236864 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRowCollection::get_Count()
extern "C"  int32_t DataRowCollection_get_Count_m1120248131 (DataRowCollection_t851321131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Data.DataRow[],System.Int32)
extern "C"  void DataRowCollection_CopyTo_m2722040823 (DataRowCollection_t851321131 * __this, DataRowU5BU5D_t3098821942* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowCollection::CopyTo(System.Array,System.Int32)
extern "C"  void DataRowCollection_CopyTo_m597131290 (DataRowCollection_t851321131 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Data.DataRowCollection::GetEnumerator()
extern "C"  Il2CppObject * DataRowCollection_GetEnumerator_m3089739725 (DataRowCollection_t851321131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
