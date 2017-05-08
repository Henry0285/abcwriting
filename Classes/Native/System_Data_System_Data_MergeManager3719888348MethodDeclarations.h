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

// System.Data.DataSet
struct DataSet_t646994783;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Data_System_Data_MissingSchemaAction1278884340.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void MergeManager_Merge_m499027991 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___targetSet, DataSet_t646994783 * ___sourceSet, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataTable,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void MergeManager_Merge_m3440184723 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___targetSet, DataTable_t1931745339 * ___sourceTable, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::MergeRow(System.Data.DataTable,System.Data.DataRow,System.Boolean)
extern "C"  void MergeManager_MergeRow_m1748181855 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, DataRow_t3422932271 * ___row, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchemaRelations(System.Data.DataSet,System.Data.DataSet,System.Data.MissingSchemaAction)
extern "C"  bool MergeManager_AdjustSchemaRelations_m441209209 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___targetSet, DataSet_t646994783 * ___sourceSet, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.MergeManager::ResolveColumns(System.Data.DataTable,System.Data.DataColumn[])
extern "C"  DataColumnU5BU5D_t2781139492* MergeManager_ResolveColumns_m4004078363 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, DataColumnU5BU5D_t2781139492* ___sourceColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataSet,System.Data.DataTable,System.Data.MissingSchemaAction,System.Data.DataTable&)
extern "C"  bool MergeManager_AdjustSchema_m2704332453 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___targetSet, DataTable_t1931745339 * ___sourceTable, int32_t ___missingSchemaAction, DataTable_t1931745339 ** ___newTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataTable,System.Data.DataTable,System.Data.MissingSchemaAction)
extern "C"  bool MergeManager_AdjustSchema_m3869236018 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, DataTable_t1931745339 * ___sourceTable, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustPrimaryKeys(System.Data.DataTable,System.Data.DataTable)
extern "C"  bool MergeManager_AdjustPrimaryKeys_m2184444691 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, DataTable_t1931745339 * ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::fillData(System.Data.DataTable,System.Data.DataTable,System.Boolean)
extern "C"  void MergeManager_fillData_m1366476870 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, DataTable_t1931745339 * ___sourceTable, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::checkColumnTypes(System.Data.DataTable,System.Data.DataTable)
extern "C"  void MergeManager_checkColumnTypes_m2507770685 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, DataTable_t1931745339 * ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::CompareColumnArrays(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool MergeManager_CompareColumnArrays_m884694385 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t2781139492* ___arr1, DataColumnU5BU5D_t2781139492* ___arr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::RaiseMergeFailedEvent(System.Data.DataTable,System.String)
extern "C"  void MergeManager_RaiseMergeFailedEvent_m4180971582 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___targetTable, String_t* ___errMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
