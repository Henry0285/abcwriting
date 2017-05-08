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

// System.Data.Common.RecordCache
struct RecordCache_t3088292707;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.IDataRecord
struct IDataRecord_t1234240285;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void System.Data.Common.RecordCache::.ctor(System.Data.DataTable)
extern "C"  void RecordCache__ctor_m281223042 (RecordCache_t3088292707 * __this, DataTable_t1931745339 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::get_CurrentCapacity()
extern "C"  int32_t RecordCache_get_CurrentCapacity_m2748187685 (RecordCache_t3088292707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.Common.RecordCache::get_Item(System.Int32)
extern "C"  DataRow_t3422932271 * RecordCache_get_Item_m2088520144 (RecordCache_t3088292707 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::set_Item(System.Int32,System.Data.DataRow)
extern "C"  void RecordCache_set_Item_m468541925 (RecordCache_t3088292707 * __this, int32_t ___index, DataRow_t3422932271 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::NewRecord()
extern "C"  int32_t RecordCache_NewRecord_m3706137616 (RecordCache_t3088292707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::DisposeRecord(System.Int32)
extern "C"  void RecordCache_DisposeRecord_m198041094 (RecordCache_t3088292707 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::CopyRecord(System.Data.DataTable,System.Int32,System.Int32)
extern "C"  int32_t RecordCache_CopyRecord_m3760812872 (RecordCache_t3088292707 * __this, DataTable_t1931745339 * ___fromTable, int32_t ___fromRecordIndex, int32_t ___toRecordIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::ReadIDataRecord(System.Int32,System.Data.IDataRecord,System.Int32[],System.Int32)
extern "C"  void RecordCache_ReadIDataRecord_m4115052259 (RecordCache_t3088292707 * __this, int32_t ___recordIndex, Il2CppObject * ___record, Int32U5BU5D_t3315407976* ___mapping, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
