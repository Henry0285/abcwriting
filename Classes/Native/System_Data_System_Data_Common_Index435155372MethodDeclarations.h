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

// System.Data.Common.Index
struct Index_t435155372;
// System.Data.Common.Key
struct Key_t1996112397;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_Common_Key1996112397.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"
#include "System_Data_System_Data_DataRowState3204394958.h"

// System.Void System.Data.Common.Index::.ctor(System.Data.Common.Key)
extern "C"  void Index__ctor_m1159332121 (Index_t435155372 * __this, Key_t1996112397 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::.cctor()
extern "C"  void Index__cctor_m1293211543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Key System.Data.Common.Index::get_Key()
extern "C"  Key_t1996112397 * Index_get_Key_m1438381814 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::get_RefCount()
extern "C"  int32_t Index_get_RefCount_m3784589285 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::IndexToRecord(System.Int32)
extern "C"  int32_t Index_IndexToRecord_m4070928883 (Index_t435155372 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Index::get_HasDuplicates()
extern "C"  bool Index_get_HasDuplicates_m447060123 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::get_Duplicates()
extern "C"  Int32U5BU5D_t3315407976* Index_get_Duplicates_m59690841 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Reset()
extern "C"  void Index_Reset_m1278025753 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::RebuildIndex()
extern "C"  void Index_RebuildIndex_m507148575 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Sort()
extern "C"  void Index_Sort_m1153516338 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::Find(System.Object[])
extern "C"  int32_t Index_Find_m3138483171 (Index_t435155372 * __this, ObjectU5BU5D_t3632007997* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndex(System.Object[])
extern "C"  int32_t Index_FindIndex_m1895023593 (Index_t435155372 * __this, ObjectU5BU5D_t3632007997* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::Find(System.Int32)
extern "C"  int32_t Index_Find_m3686351248 (Index_t435155372 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::FindAll(System.Int32)
extern "C"  Int32U5BU5D_t3315407976* Index_FindAll_m3686155769 (Index_t435155372 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::FindAllIndexes(System.Int32)
extern "C"  Int32U5BU5D_t3315407976* Index_FindAllIndexes_m90893533 (Index_t435155372 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndex(System.Int32)
extern "C"  int32_t Index_FindIndex_m950527644 (Index_t435155372 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndexExact(System.Int32)
extern "C"  int32_t Index_FindIndexExact_m2247745251 (Index_t435155372 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::IndexesToRecords(System.Int32[])
extern "C"  void Index_IndexesToRecords_m3946040226 (Index_t435155372 * __this, Int32U5BU5D_t3315407976* ___indexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Delete(System.Data.DataRow)
extern "C"  void Index_Delete_m1347439860 (Index_t435155372 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Delete(System.Int32)
extern "C"  void Index_Delete_m3092413784 (Index_t435155372 * __this, int32_t ___oldRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Remove(System.Int32)
extern "C"  void Index_Remove_m260978783 (Index_t435155372 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Update(System.Data.DataRow,System.Int32,System.Data.DataRowVersion,System.Data.DataRowState)
extern "C"  void Index_Update_m75091004 (Index_t435155372 * __this, DataRow_t3422932271 * ___row, int32_t ___oldRecord, int32_t ___oldVersion, int32_t ___oldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Add(System.Data.DataRow)
extern "C"  void Index_Add_m2470555294 (Index_t435155372 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Add(System.Data.DataRow,System.Int32)
extern "C"  void Index_Add_m1502963675 (Index_t435155372 * __this, DataRow_t3422932271 * ___row, int32_t ___newRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Insert(System.Int32,System.Int32)
extern "C"  void Index_Insert_m1185116099 (Index_t435155372 * __this, int32_t ___index, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::MergeSort(System.Int32[],System.Int32)
extern "C"  void Index_MergeSort_m2143558872 (Index_t435155372 * __this, Int32U5BU5D_t3315407976* ___to, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::MergeSort(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C"  void Index_MergeSort_m4194407390 (Index_t435155372 * __this, Int32U5BU5D_t3315407976* ___from, Int32U5BU5D_t3315407976* ___to, int32_t ___p, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::BinarySearch(System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Index_BinarySearch_m2012220089 (Index_t435155372 * __this, Int32U5BU5D_t3315407976* ___a, int32_t ___p, int32_t ___r, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::LazyBinarySearch(System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Index_LazyBinarySearch_m1204262375 (Index_t435155372 * __this, Int32U5BU5D_t3315407976* ___a, int32_t ___p, int32_t ___r, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::AddRef()
extern "C"  void Index_AddRef_m1176284346 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::RemoveRef()
extern "C"  void Index_RemoveRef_m1214735983 (Index_t435155372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
