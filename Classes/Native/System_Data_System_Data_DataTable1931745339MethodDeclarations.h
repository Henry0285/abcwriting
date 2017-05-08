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

// System.Data.DataTable
struct DataTable_t1931745339;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t4233303943;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Object
struct Il2CppObject;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3900360787;
// System.Data.DataColumnCollection
struct DataColumnCollection_t2212631745;
// System.Data.ConstraintCollection
struct ConstraintCollection_t571689508;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Data.PropertyCollection
struct PropertyCollection_t1951657822;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.Data.DataRowCollection
struct DataRowCollection_t851321131;
// System.ComponentModel.ISite
struct ISite_t3358050495;
// System.Data.Common.RecordCache
struct RecordCache_t3088292707;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1178000844;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Data.IDataRecord
struct IDataRecord_t1234240285;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;
// System.Data.Common.Index
struct Index_t435155372;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3728318935;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t2256485616;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t1049210364;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1768361183;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;
// System.IO.TextReader
struct TextReader_t657369457;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t1043116682;
// System.Collections.BitArray
struct BitArray_t1153580258;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t2872906236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "System_Data_System_Data_DataRowChangeEventHandler4233303943.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRowAction1490589201.h"
#include "System_Data_System_Data_ConstraintCollection571689508.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRowState3204394958.h"
#include "System_Data_System_Data_DataRowBuilder1178000844.h"
#include "System_Data_System_Data_Common_Index435155372.h"
#include "System_Data_System_Data_DataViewRowState4009542207.h"
#include "System_Data_System_Data_DataColumnChangeEventArgs2256485616.h"
#include "System_Data_System_Data_DataRowChangeEventArgs1049210364.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_XmlReadMode1968640897.h"
#include "mscorlib_System_IO_TextReader657369457.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Data_System_Data_XmlWriteMode1688022184.h"
#include "System_Data_System_Data_SerializationFormat2164474910.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "mscorlib_System_Collections_BitArray1153580258.h"
#include "System_Data_System_Data_DataTableNewRowEventArgs2872906236.h"

// System.Void System.Data.DataTable::.ctor()
extern "C"  void DataTable__ctor_m1933418411 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.String)
extern "C"  void DataTable__ctor_m3741216775 (DataTable_t1931745339 * __this, String_t* ___tableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataTable__ctor_m3546418038 (DataTable_t1931745339 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.cctor()
extern "C"  void DataTable__cctor_m1980679260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::add_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C"  void DataTable_add_RowChanged_m1628527976 (DataTable_t1931745339 * __this, DataRowChangeEventHandler_t4233303943 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::remove_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C"  void DataTable_remove_RowChanged_m18683811 (DataTable_t1931745339 * __this, DataRowChangeEventHandler_t4233303943 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void DataTable_System_Xml_Serialization_IXmlSerializable_ReadXml_m1538504823 (DataTable_t1931745339 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void DataTable_System_Xml_Serialization_IXmlSerializable_WriteXml_m3681501510 (DataTable_t1931745339 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_CaseSensitive()
extern "C"  bool DataTable_get_CaseSensitive_m1898712010 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_CaseSensitive(System.Boolean)
extern "C"  void DataTable_set_CaseSensitive_m2512744933 (DataTable_t1931745339 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTable::get_Indexes()
extern "C"  ArrayList_t1468494371 * DataTable_get_Indexes_m1659033564 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataTable_ChangedDataColumn_m2423160365 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, DataColumn_t1080745049 * ___dc, Il2CppObject * ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataTable_ChangingDataColumn_m3921140940 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, DataColumn_t1080745049 * ___dc, Il2CppObject * ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_DeletedDataRow_m2019611382 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_DeletingDataRow_m2994239411 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_ChangedDataRow_m773150057 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_ChangingDataRow_m807219800 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ChildRelations()
extern "C"  DataRelationCollection_t3900360787 * DataTable_get_ChildRelations_m1252997947 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
extern "C"  DataColumnCollection_t2212631745 * DataTable_get_Columns_m1099710715 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.DataTable::get_Constraints()
extern "C"  ConstraintCollection_t571689508 * DataTable_get_Constraints_m3363579377 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Constraints(System.Data.ConstraintCollection)
extern "C"  void DataTable_set_Constraints_m1646855548 (DataTable_t1931745339 * __this, ConstraintCollection_t571689508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataTable::get_DataSet()
extern "C"  DataSet_t646994783 * DataTable_get_DataSet_m2437602610 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_DisplayExpression()
extern "C"  String_t* DataTable_get_DisplayExpression_m2152109131 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_DisplayExpression(System.String)
extern "C"  void DataTable_set_DisplayExpression_m3784708888 (DataTable_t1931745339 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataTable::get_ExtendedProperties()
extern "C"  PropertyCollection_t1951657822 * DataTable_get_ExtendedProperties_m330154551 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_HasErrors()
extern "C"  bool DataTable_get_HasErrors_m3482490331 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataTable::get_Locale()
extern "C"  CultureInfo_t634113868 * DataTable_get_Locale_m3000031727 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Locale(System.Globalization.CultureInfo)
extern "C"  void DataTable_set_Locale_m1334172434 (DataTable_t1931745339 * __this, CultureInfo_t634113868 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_LocaleSpecified()
extern "C"  bool DataTable_get_LocaleSpecified_m3703011894 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_MinimumCapacity()
extern "C"  int32_t DataTable_get_MinimumCapacity_m2846140478 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_MinimumCapacity(System.Int32)
extern "C"  void DataTable_set_MinimumCapacity_m402743553 (DataTable_t1931745339 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Namespace()
extern "C"  String_t* DataTable_get_Namespace_m1710385984 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Namespace(System.String)
extern "C"  void DataTable_set_Namespace_m3625273155 (DataTable_t1931745339 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ParentRelations()
extern "C"  DataRelationCollection_t3900360787 * DataTable_get_ParentRelations_m375615013 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Prefix()
extern "C"  String_t* DataTable_get_Prefix_m1538534727 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Prefix(System.String)
extern "C"  void DataTable_set_Prefix_m3879432842 (DataTable_t1931745339 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataTable::get_PrimaryKey()
extern "C"  DataColumnU5BU5D_t2781139492* DataTable_get_PrimaryKey_m2242086327 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_PrimaryKey(System.Data.DataColumn[])
extern "C"  void DataTable_set_PrimaryKey_m3483508516 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
extern "C"  DataRowCollection_t851321131 * DataTable_get_Rows_m3943889595 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataTable::get_Site()
extern "C"  Il2CppObject * DataTable_get_Site_m431016357 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Site(System.ComponentModel.ISite)
extern "C"  void DataTable_set_Site_m1477406706 (DataTable_t1931745339 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_TableName()
extern "C"  String_t* DataTable_get_TableName_m902397320 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_TableName(System.String)
extern "C"  void DataTable_set_TableName_m3938185417 (DataTable_t1931745339 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.RecordCache System.Data.DataTable::get_RecordCache()
extern "C"  RecordCache_t3088292707 * DataTable_get_RecordCache_m2864006007 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowBuilder System.Data.DataTable::get_RowBuilder()
extern "C"  DataRowBuilder_t1178000844 * DataTable_get_RowBuilder_m3520367362 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_EnforceConstraints()
extern "C"  bool DataTable_get_EnforceConstraints_m3589151074 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_EnforceConstraints(System.Boolean)
extern "C"  void DataTable_set_EnforceConstraints_m839052793 (DataTable_t1931745339 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AssertNotNullConstraints()
extern "C"  void DataTable_AssertNotNullConstraints_m3897812853 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Data.DataColumn[],System.Data.DataRow)
extern "C"  bool DataTable_RowsExist_m3569386694 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___columns, DataColumnU5BU5D_t2781139492* ___relatedColumns, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Int32)
extern "C"  bool DataTable_RowsExist_m524145105 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___columns, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AcceptChanges()
extern "C"  void DataTable_AcceptChanges_m574814238 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BeginLoadData()
extern "C"  void DataTable_BeginLoadData_m2896686138 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Clone()
extern "C"  DataTable_t1931745339 * DataTable_Clone_m836769200 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Copy()
extern "C"  DataTable_t1931745339 * DataTable_Copy_m2565091856 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyRow(System.Data.DataRow,System.Data.DataRow)
extern "C"  void DataTable_CopyRow_m165073960 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___fromRow, DataRow_t3422932271 * ___toRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyProperties(System.Data.DataTable)
extern "C"  void DataTable_CopyProperties_m3215372196 (DataTable_t1931745339 * __this, DataTable_t1931745339 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyConstraints(System.Data.DataTable)
extern "C"  void DataTable_CopyConstraints_m2047454115 (DataTable_t1931745339 * __this, DataTable_t1931745339 * ___copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_InitInProgress()
extern "C"  bool DataTable_get_InitInProgress_m891081378 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EndLoadData()
extern "C"  void DataTable_EndLoadData_m3487537838 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::GetChanges(System.Data.DataRowState)
extern "C"  DataTable_t1931745339 * DataTable_GetChanges_m2003642644 (DataTable_t1931745339 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataTable::GetRowType()
extern "C"  Type_t * DataTable_GetRowType_m4111631039 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_DefaultValuesRowIndex()
extern "C"  int32_t DataTable_get_DefaultValuesRowIndex_m616742963 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataTable_GetObjectData_m3584049243 (DataTable_t1931745339 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::LoadDataRow(System.Object[],System.Boolean)
extern "C"  DataRow_t3422932271 * DataTable_LoadDataRow_m1553421618 (DataTable_t1931745339 * __this, ObjectU5BU5D_t3632007997* ___values, bool ___fAcceptChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::LoadDataRow(System.Data.IDataRecord,System.Int32[],System.Int32,System.Boolean)
extern "C"  DataRow_t3422932271 * DataTable_LoadDataRow_m1635953403 (DataTable_t1931745339 * __this, Il2CppObject * ___record, Int32U5BU5D_t3315407976* ___mapping, int32_t ___length, bool ___fAcceptChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRow()
extern "C"  DataRow_t3422932271 * DataTable_NewRow_m2371811087 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::CreateRecord(System.Object[])
extern "C"  int32_t DataTable_CreateRecord_m3882530908 (DataTable_t1931745339 * __this, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EnsureDefaultValueRowIndex()
extern "C"  void DataTable_EnsureDefaultValueRowIndex_m4062403365 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataTable::NewRowArray(System.Int32)
extern "C"  DataRowU5BU5D_t3098821942* DataTable_NewRowArray_m3995240555 (DataTable_t1931745339 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRowFromBuilder(System.Data.DataRowBuilder)
extern "C"  DataRow_t3422932271 * DataTable_NewRowFromBuilder_m99735914 (DataTable_t1931745339 * __this, DataRowBuilder_t1178000844 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewNotInitializedRow()
extern "C"  DataRow_t3422932271 * DataTable_NewNotInitializedRow_m272724080 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddIndex(System.Data.Common.Index)
extern "C"  void DataTable_AddIndex_m1944958974 (DataTable_t1931745339 * __this, Index_t435155372 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean)
extern "C"  Index_t435155372 * DataTable_GetIndex_m3480251810 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___columns, ListSortDirectionU5BU5D_t3728318935* ___sort, int32_t ___rowState, Il2CppObject * ___filter, bool ___reset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean,System.Boolean)
extern "C"  Index_t435155372 * DataTable_GetIndex_m2040932387 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___columns, ListSortDirectionU5BU5D_t3728318935* ___sort, int32_t ___rowState, Il2CppObject * ___filter, bool ___reset, bool ___addIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[])
extern "C"  Index_t435155372 * DataTable_FindIndex_m2556907114 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  Index_t435155372 * DataTable_FindIndex_m1063897832 (DataTable_t1931745339 * __this, DataColumnU5BU5D_t2781139492* ___columns, ListSortDirectionU5BU5D_t3728318935* ___sort, int32_t ___rowState, Il2CppObject * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetIndexes()
extern "C"  void DataTable_ResetIndexes_m3855052956 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetCaseSensitiveIndexes()
extern "C"  void DataTable_ResetCaseSensitiveIndexes_m740199582 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DropIndex(System.Data.Common.Index)
extern "C"  void DataTable_DropIndex_m3154564624 (DataTable_t1931745339 * __this, Index_t435155372 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddRowToIndexes(System.Data.DataRow)
extern "C"  void DataTable_AddRowToIndexes_m3533824476 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeleteRowFromIndexes(System.Data.DataRow)
extern "C"  void DataTable_DeleteRowFromIndexes_m2542734989 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::ToString()
extern "C"  String_t* DataTable_ToString_m1969124842 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanged(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_OnColumnChanged_m732025218 (DataTable_t1931745339 * __this, DataColumnChangeEventArgs_t2256485616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::RaiseOnColumnChanged(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_RaiseOnColumnChanged_m799679854 (DataTable_t1931745339 * __this, DataColumnChangeEventArgs_t2256485616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanging(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_OnColumnChanging_m3724481813 (DataTable_t1931745339 * __this, DataColumnChangeEventArgs_t2256485616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::RaiseOnColumnChanging(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_RaiseOnColumnChanging_m396497917 (DataTable_t1931745339 * __this, DataColumnChangeEventArgs_t2256485616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanged(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowChanged_m2714135220 (DataTable_t1931745339 * __this, DataRowChangeEventArgs_t1049210364 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanging(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowChanging_m1195385477 (DataTable_t1931745339 * __this, DataRowChangeEventArgs_t1049210364 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleted(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowDeleted_m1448095903 (DataTable_t1931745339 * __this, DataRowChangeEventArgs_t1049210364 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleting(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowDeleting_m2805914046 (DataTable_t1931745339 * __this, DataRowChangeEventArgs_t1049210364 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetPropertyDescriptorsCache()
extern "C"  void DataTable_ResetPropertyDescriptorsCache_m1698713173 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SetRowsID()
extern "C"  void DataTable_SetRowsID_m2074879517 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataTable::GetDataTableSchema(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlSchemaComplexType_t1768361183 * DataTable_GetDataTableSchema_m1791541311 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataTable::ReadXml(System.IO.TextReader)
extern "C"  int32_t DataTable_ReadXml_m3461987995 (DataTable_t1931745339 * __this, TextReader_t657369457 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataTable::ReadXml(System.Xml.XmlReader)
extern "C"  int32_t DataTable_ReadXml_m3733643904 (DataTable_t1931745339 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataTable::ReadXml_internal(System.Xml.XmlReader,System.Boolean)
extern "C"  int32_t DataTable_ReadXml_internal_m118400293 (DataTable_t1931745339 * __this, XmlReader_t1154388064 * ___reader, bool ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DenyXmlResolving(System.Data.DataTable,System.Data.DataSet,System.Data.XmlReadMode,System.Boolean,System.Boolean)
extern "C"  void DataTable_DenyXmlResolving_m741063322 (DataTable_t1931745339 * __this, DataTable_t1931745339 * ___table, DataSet_t646994783 * ___ds, int32_t ___mode, bool ___isTableNameBlank, bool ___isPartOfDataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter)
extern "C"  void DataTable_WriteXml_m691295733 (DataTable_t1931745339 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Boolean)
extern "C"  void DataTable_WriteXml_m2265432700 (DataTable_t1931745339 * __this, XmlWriter_t1713407564 * ___writer, int32_t ___mode, bool ___writeHierarchy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::FindAllChildren(System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataTable)
extern "C"  void DataTable_FindAllChildren_m2845668398 (DataTable_t1931745339 * __this, List_1_t1043116682 * ___list, DataTable_t1931745339 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataTable::get_RemotingFormat()
extern "C"  int32_t DataTable_get_RemotingFormat_m1163334087 (DataTable_t1931745339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeConstraints(System.Collections.ArrayList)
extern "C"  void DataTable_DeserializeConstraints_m1106260705 (DataTable_t1931745339 * __this, ArrayList_t1468494371 * ___arrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataTable::GetCurrentRowState(System.Collections.BitArray,System.Int32)
extern "C"  int32_t DataTable_GetCurrentRowState_m1555769789 (DataTable_t1931745339 * __this, BitArray_t1153580258 * ___rowStateBitArray, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeRecords(System.Collections.ArrayList,System.Collections.ArrayList,System.Collections.BitArray)
extern "C"  void DataTable_DeserializeRecords_m3253764570 (DataTable_t1931745339 * __this, ArrayList_t1468494371 * ___arrayList, ArrayList_t1468494371 * ___nullBits, BitArray_t1153580258 * ___rowStateBitArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinaryDeserializeTable(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTable_BinaryDeserializeTable_m2194137396 (DataTable_t1931745339 * __this, SerializationInfo_t1029367511 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerializeProperty(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTable_BinarySerializeProperty_m714492796 (DataTable_t1931745339 * __this, SerializationInfo_t1029367511 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SerializeConstraints(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C"  void DataTable_SerializeConstraints_m3787432662 (DataTable_t1931745339 * __this, SerializationInfo_t1029367511 * ___info, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerialize(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C"  void DataTable_BinarySerialize_m800091165 (DataTable_t1931745339 * __this, SerializationInfo_t1029367511 * ___info, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnTableNewRow(System.Data.DataTableNewRowEventArgs)
extern "C"  void DataTable_OnTableNewRow_m4115268234 (DataTable_t1931745339 * __this, DataTableNewRowEventArgs_t2872906236 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::NewRowAdded(System.Data.DataRow)
extern "C"  void DataTable_NewRowAdded_m881158776 (DataTable_t1931745339 * __this, DataRow_t3422932271 * ___dr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
