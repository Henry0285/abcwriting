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

// System.Data.Common.Key
struct Key_t1996112397;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3728318935;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataViewRowState4009542207.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataRowState3204394958.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"
#include "System_Data_System_Data_DataColumn1080745049.h"

// System.Void System.Data.Common.Key::.ctor(System.Data.DataTable,System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Key__ctor_m993330817 (Key_t1996112397 * __this, DataTable_t1931745339 * ___table, DataColumnU5BU5D_t2781139492* ___columns, ListSortDirectionU5BU5D_t3728318935* ___sort, int32_t ___rowState, Il2CppObject * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.Common.Key::get_Columns()
extern "C"  DataColumnU5BU5D_t2781139492* Key_get_Columns_m2808036611 (Key_t1996112397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.Key::get_Table()
extern "C"  DataTable_t1931745339 * Key_get_Table_m1842898482 (Key_t1996112397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::get_Sort()
extern "C"  ListSortDirectionU5BU5D_t3728318935* Key_get_Sort_m2135013787 (Key_t1996112397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataViewRowState System.Data.Common.Key::get_RowStateFilter()
extern "C"  int32_t Key_get_RowStateFilter_m3808423223 (Key_t1996112397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::get_HasFilter()
extern "C"  bool Key_get_HasFilter_m1487929872 (Key_t1996112397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::CompareRecords(System.Int32,System.Int32)
extern "C"  int32_t Key_CompareRecords_m2278326242 (Key_t1996112397 * __this, int32_t ___first, int32_t ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow)
extern "C"  int32_t Key_GetRecord_m701324471 (Key_t1996112397 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::CanContain(System.Int32)
extern "C"  bool Key_CanContain_m292787242 (Key_t1996112397 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::ContainsVersion(System.Data.DataRowState,System.Data.DataRowVersion)
extern "C"  bool Key_ContainsVersion_m1321044337 (Key_t1996112397 * __this, int32_t ___state, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow,System.Data.DataViewRowState)
extern "C"  int32_t Key_GetRecord_m3888829768 (Il2CppObject * __this /* static, unused */, DataRow_t3422932271 * ___row, int32_t ___rowStateFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::Equals(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  bool Key_Equals_m43596357 (Key_t1996112397 * __this, DataColumnU5BU5D_t2781139492* ___columns, ListSortDirectionU5BU5D_t3728318935* ___sort, int32_t ___rowState, Il2CppObject * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::DependsOn(System.Data.DataColumn)
extern "C"  bool Key_DependsOn_m2934106502 (Key_t1996112397 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
