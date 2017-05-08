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

// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1178000844;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3948402751;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;
// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRowBuilder1178000844.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"
#include "System_Data_System_Data_DataRowState3204394958.h"
#include "System_Data_System_Data_DataRowAction1490589201.h"
#include "System_Data_System_Data_ForeignKeyConstraint3948402751.h"
#include "System_Data_System_Data_Rule146695665.h"
#include "System_Data_System_Data_DataRelation3033993051.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void System.Data.DataRow::.ctor(System.Data.DataRowBuilder)
extern "C"  void DataRow__ctor_m2581695525 (DataRow_t3422932271 * __this, DataRowBuilder_t1178000844 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRow::get_ColumnErrors()
extern "C"  ArrayList_t1468494371 * DataRow_get_ColumnErrors_m2016396687 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::get_HasErrors()
extern "C"  bool DataRow_get_HasErrors_m3424468503 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String)
extern "C"  Il2CppObject * DataRow_get_Item_m1430972994 (DataRow_t3422932271 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
extern "C"  void DataRow_set_Item_m1807609541 (DataRow_t3422932271 * __this, String_t* ___columnName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn)
extern "C"  Il2CppObject * DataRow_get_Item_m3685904769 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Data.DataColumn,System.Object)
extern "C"  void DataRow_set_Item_m1582617116 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32)
extern "C"  Il2CppObject * DataRow_get_Item_m3982631057 (DataRow_t3422932271 * __this, int32_t ___columnIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Int32,System.Object)
extern "C"  void DataRow_set_Item_m1403997290 (DataRow_t3422932271 * __this, int32_t ___columnIndex, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m527328117 (DataRow_t3422932271 * __this, String_t* ___columnName, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m480772012 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m3461883216 (DataRow_t3422932271 * __this, int32_t ___columnIndex, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Data.DataRow::get_ItemArray()
extern "C"  ObjectU5BU5D_t3632007997* DataRow_get_ItemArray_m3206885159 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_ItemArray(System.Object[])
extern "C"  void DataRow_set_ItemArray_m2170691628 (DataRow_t3422932271 * __this, ObjectU5BU5D_t3632007997* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataRow::get_RowState()
extern "C"  int32_t DataRow_get_RowState_m1997472498 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRow::get_Table()
extern "C"  DataTable_t1931745339 * DataRow_get_Table_m218788114 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_XmlRowID()
extern "C"  int32_t DataRow_get_XmlRowID_m3392058174 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_XmlRowID(System.Int32)
extern "C"  void DataRow_set_XmlRowID_m3341620657 (DataRow_t3422932271 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_RowID()
extern "C"  int32_t DataRow_get_RowID_m3053225011 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowID(System.Int32)
extern "C"  void DataRow_set_RowID_m3722949394 (DataRow_t3422932271 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Original()
extern "C"  int32_t DataRow_get_Original_m100636433 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Original(System.Int32)
extern "C"  void DataRow_set_Original_m2923452842 (DataRow_t3422932271 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Current()
extern "C"  int32_t DataRow_get_Current_m2459802681 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Current(System.Int32)
extern "C"  void DataRow_set_Current_m3221077578 (DataRow_t3422932271 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Proposed()
extern "C"  int32_t DataRow_get_Proposed_m3186590894 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Proposed(System.Int32)
extern "C"  void DataRow_set_Proposed_m4173618943 (DataRow_t3422932271 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AttachAt(System.Int32,System.Data.DataRowAction)
extern "C"  void DataRow_AttachAt_m511559393 (DataRow_t3422932271 * __this, int32_t ___row_id, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Detach()
extern "C"  void DataRow_Detach_m342439018 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::ImportRecord(System.Int32)
extern "C"  void DataRow_ImportRecord_m762418884 (DataRow_t3422932271 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn)
extern "C"  void DataRow_CheckValue_m3311637919 (DataRow_t3422932271 * __this, Il2CppObject * ___v, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn,System.Boolean)
extern "C"  void DataRow_CheckValue_m2722065918 (DataRow_t3422932271 * __this, Il2CppObject * ___v, DataColumn_t1080745049 * ___col, bool ___doROCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::get_RowError()
extern "C"  String_t* DataRow_get_RowError_m1155736309 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowError(System.String)
extern "C"  void DataRow_set_RowError_m2632929444 (DataRow_t3422932271 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::IndexFromVersion(System.Data.DataRowVersion)
extern "C"  int32_t DataRow_IndexFromVersion_m3239061550 (DataRow_t3422932271 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::AssertValidVersionIndex(System.Data.DataRowVersion,System.Int32)
extern "C"  int32_t DataRow_AssertValidVersionIndex_m1377396577 (DataRow_t3422932271 * __this, int32_t ___version, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetOriginalValue(System.String,System.Object)
extern "C"  void DataRow_SetOriginalValue_m1089861931 (DataRow_t3422932271 * __this, String_t* ___columnName, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AcceptChanges()
extern "C"  void DataRow_AcceptChanges_m2086245136 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::BeginEdit()
extern "C"  void DataRow_BeginEdit_m3386272688 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Delete()
extern "C"  void DataRow_Delete_m2140241174 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.DataRowAction)
extern "C"  void DataRow_CheckChildRows_m1304888675 (DataRow_t3422932271 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowAction,System.Data.Rule)
extern "C"  void DataRow_CheckChildRows_m1586246673 (DataRow_t3422932271 * __this, ForeignKeyConstraint_t3948402751 * ___fkc, int32_t ___action, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::EndEdit()
extern "C"  void DataRow_EndEdit_m3829179740 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation)
extern "C"  DataRowU5BU5D_t3098821942* DataRow_GetChildRows_m2079526919 (DataRow_t3422932271 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t3098821942* DataRow_GetChildRows_m2511228150 (DataRow_t3422932271 * __this, DataRelation_t3033993051 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t3098821942* DataRow_GetChildRows_m2682545230 (DataRow_t3422932271 * __this, ForeignKeyConstraint_t3948402751 * ___fkc, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Data.DataColumn)
extern "C"  String_t* DataRow_GetColumnError_m473710693 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Int32)
extern "C"  String_t* DataRow_GetColumnError_m1250345475 (DataRow_t3422932271 * __this, int32_t ___columnIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRow::GetColumnsInError()
extern "C"  DataColumnU5BU5D_t2781139492* DataRow_GetColumnsInError_m3914872913 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation)
extern "C"  DataRow_t3422932271 * DataRow_GetParentRow_m4223827902 (DataRow_t3422932271 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRow_t3422932271 * DataRow_GetParentRow_m3085017801 (DataRow_t3422932271 * __this, DataRelation_t3033993051 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation)
extern "C"  DataRowU5BU5D_t3098821942* DataRow_GetParentRows_m827875613 (DataRow_t3422932271 * __this, DataRelation_t3033993051 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t3098821942* DataRow_GetParentRows_m3629410564 (DataRow_t3422932271 * __this, DataRelation_t3033993051 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::HasVersion(System.Data.DataRowVersion)
extern "C"  bool DataRow_HasVersion_m2328934682 (DataRow_t3422932271 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn)
extern "C"  bool DataRow_IsNull_m1008919709 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.String)
extern "C"  bool DataRow_IsNull_m2761817972 (DataRow_t3422932271 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C"  bool DataRow_IsNull_m3957691718 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNullColumns(System.Data.DataColumn[])
extern "C"  bool DataRow_IsNullColumns_m1178753100 (DataRow_t3422932271 * __this, DataColumnU5BU5D_t2781139492* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::RejectChanges()
extern "C"  void DataRow_RejectChanges_m2461041877 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Data.DataColumn,System.String)
extern "C"  void DataRow_SetColumnError_m3969815832 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Int32,System.String)
extern "C"  void DataRow_SetColumnError_m2315466480 (DataRow_t3422932271 * __this, int32_t ___columnIndex, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.String,System.String)
extern "C"  void DataRow_SetColumnError_m1844279707 (DataRow_t3422932271 * __this, String_t* ___columnName, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetNull(System.Data.DataColumn)
extern "C"  void DataRow_SetNull_m3726656801 (DataRow_t3422932271 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyValuesToRow(System.Data.DataRow)
extern "C"  void DataRow_CopyValuesToRow_m487602334 (DataRow_t3422932271 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::MergeValuesToRow(System.Data.DataRow,System.Boolean)
extern "C"  void DataRow_MergeValuesToRow_m3402476490 (DataRow_t3422932271 * __this, DataRow_t3422932271 * ___row, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyErrors(System.Data.DataRow)
extern "C"  void DataRow_CopyErrors_m3147658502 (DataRow_t3422932271 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsRowChanged(System.Data.DataRowState)
extern "C"  bool DataRow_IsRowChanged_m1281561445 (DataRow_t3422932271 * __this, int32_t ___rowState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Validate()
extern "C"  void DataRow_Validate_m1348004989 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AssertConstraints()
extern "C"  void DataRow_AssertConstraints_m3473051627 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckReadOnlyStatus()
extern "C"  void DataRow_CheckReadOnlyStatus_m137362407 (DataRow_t3422932271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
