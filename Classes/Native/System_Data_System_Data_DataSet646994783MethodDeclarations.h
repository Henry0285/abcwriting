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
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Data.PropertyCollection
struct PropertyCollection_t1951657822;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3900360787;
// System.ComponentModel.ISite
struct ISite_t3358050495;
// System.Data.DataTableCollection
struct DataTableCollection_t2538116523;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.IO.TextReader
struct TextReader_t657369457;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t499212429;
// System.Object
struct Il2CppObject;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1768361183;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Data_System_Data_MissingSchemaAction1278884340.h"
#include "System_Data_System_Data_DataRowState3204394958.h"
#include "mscorlib_System_Collections_Hashtable1312997718.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "System_Data_System_Data_XmlWriteMode1688022184.h"
#include "mscorlib_System_IO_TextReader657369457.h"
#include "System_Data_System_Data_XmlReadMode1968640897.h"
#include "System_Data_System_Data_MergeFailedEventArgs499212429.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataTableCollection2538116523.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "System_Data_System_Data_SerializationFormat2164474910.h"
#include "System_Data_System_Data_SchemaSerializationMode3285335029.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"

// System.Void System.Data.DataSet::.ctor()
extern "C"  void DataSet__ctor_m3533586871 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.String)
extern "C"  void DataSet__ctor_m1141829261 (DataSet_t646994783 * __this, String_t* ___dataSetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet__ctor_m3563034786 (DataSet_t646994783 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void DataSet_System_Xml_Serialization_IXmlSerializable_ReadXml_m2169631227 (DataSet_t646994783 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void DataSet_System_Xml_Serialization_IXmlSerializable_WriteXml_m4262521514 (DataSet_t646994783 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_CaseSensitive()
extern "C"  bool DataSet_get_CaseSensitive_m50774382 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_CaseSensitive(System.Boolean)
extern "C"  void DataSet_set_CaseSensitive_m2797063297 (DataSet_t646994783 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_DataSetName()
extern "C"  String_t* DataSet_get_DataSetName_m3599040336 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_DataSetName(System.String)
extern "C"  void DataSet_set_DataSetName_m2531317617 (DataSet_t646994783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_EnforceConstraints()
extern "C"  bool DataSet_get_EnforceConstraints_m1632853758 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_EnforceConstraints(System.Boolean)
extern "C"  void DataSet_set_EnforceConstraints_m293217397 (DataSet_t646994783 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataSet::get_ExtendedProperties()
extern "C"  PropertyCollection_t1951657822 * DataSet_get_ExtendedProperties_m3804934427 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataSet::get_Locale()
extern "C"  CultureInfo_t634113868 * DataSet_get_Locale_m3418361675 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Locale(System.Globalization.CultureInfo)
extern "C"  void DataSet_set_Locale_m325046636 (DataSet_t646994783 * __this, CultureInfo_t634113868 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_LocaleSpecified()
extern "C"  bool DataSet_get_LocaleSpecified_m1285363274 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InternalEnforceConstraints(System.Boolean,System.Boolean)
extern "C"  void DataSet_InternalEnforceConstraints_m2390399522 (DataSet_t646994783 * __this, bool ___value, bool ___resetIndexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::Merge(System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void DataSet_Merge_m3812306373 (DataSet_t646994783 * __this, DataSet_t646994783 * ___dataSet, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsLegalSchemaAction(System.Data.MissingSchemaAction)
extern "C"  bool DataSet_IsLegalSchemaAction_m3724362239 (Il2CppObject * __this /* static, unused */, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Namespace()
extern "C"  String_t* DataSet_get_Namespace_m575086428 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Namespace(System.String)
extern "C"  void DataSet_set_Namespace_m4158910727 (DataSet_t646994783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Prefix()
extern "C"  String_t* DataSet_get_Prefix_m4029831411 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Prefix(System.String)
extern "C"  void DataSet_set_Prefix_m2177792406 (DataSet_t646994783 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataSet::get_Relations()
extern "C"  DataRelationCollection_t3900360787 * DataSet_get_Relations_m2010760349 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataSet::get_Site()
extern "C"  Il2CppObject * DataSet_get_Site_m2914819241 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Site(System.ComponentModel.ISite)
extern "C"  void DataSet_set_Site_m1092201398 (DataSet_t646994783 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTableCollection System.Data.DataSet::get_Tables()
extern "C"  DataTableCollection_t2538116523 * DataSet_get_Tables_m3728796977 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::Clone()
extern "C"  DataSet_t646994783 * DataSet_Clone_m2793059152 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyProperties(System.Data.DataSet)
extern "C"  void DataSet_CopyProperties_m2873302980 (DataSet_t646994783 * __this, DataSet_t646994783 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyRelations(System.Data.DataSet)
extern "C"  void DataSet_CopyRelations_m3445992058 (DataSet_t646994783 * __this, DataSet_t646994783 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::GetChanges(System.Data.DataRowState)
extern "C"  DataSet_t646994783 * DataSet_GetChanges_m2429107380 (DataSet_t646994783 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::AddChangedRow(System.Collections.Hashtable,System.Data.DataTable,System.Data.DataRow)
extern "C"  void DataSet_AddChangedRow_m3343791990 (DataSet_t646994783 * __this, Hashtable_t1312997718 * ___addedRows, DataTable_t1931745339 * ___copyTable, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::HasChanges(System.Data.DataRowState)
extern "C"  bool DataSet_HasChanges_m4110960064 (DataSet_t646994783 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InferXmlSchema(System.Xml.XmlDocument,System.String[])
extern "C"  void DataSet_InferXmlSchema_m2054040963 (DataSet_t646994783 * __this, XmlDocument_t3951480190 * ___doc, StringU5BU5D_t3764931161* ___nsArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteXml_m3261741713 (DataSet_t646994783 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode)
extern "C"  void DataSet_WriteXml_m2215249435 (DataSet_t646994783 * __this, XmlWriter_t1713407564 * ___writer, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.IO.TextReader)
extern "C"  void DataSet_ReadXmlSchema_m1454591420 (DataSet_t646994783 * __this, TextReader_t657369457 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.Xml.XmlReader)
extern "C"  void DataSet_ReadXmlSchema_m197103709 (DataSet_t646994783 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader)
extern "C"  int32_t DataSet_ReadXml_m1331279508 (DataSet_t646994783 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.IO.TextReader,System.Data.XmlReadMode)
extern "C"  int32_t DataSet_ReadXml_m2895269194 (DataSet_t646994783 * __this, TextReader_t657369457 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  int32_t DataSet_ReadXml_m1687787759 (DataSet_t646994783 * __this, XmlReader_t1154388064 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet_GetObjectData_m1658932847 (DataSet_t646994783 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetSerializationData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet_GetSerializationData_m1534592590 (DataSet_t646994783 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSerializable(System.Xml.XmlReader)
extern "C"  void DataSet_ReadXmlSerializable_m3088814177 (DataSet_t646994783 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::OnMergeFailed(System.Data.MergeFailedEventArgs)
extern "C"  void DataSet_OnMergeFailed_m1891966662 (DataSet_t646994783 * __this, MergeFailedEventArgs_t499212429 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::RaisePropertyChanging(System.String)
extern "C"  void DataSet_RaisePropertyChanging_m362822801 (DataSet_t646994783 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::WriteObjectXml(System.Object)
extern "C"  String_t* DataSet_WriteObjectXml_m303333873 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTableCollection,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTables_m2033711251 (DataSet_t646994783 * __this, XmlWriter_t1713407564 * ___writer, int32_t ___mode, DataTableCollection_t2538116523 * ___tableCollection, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTable_m3821859254 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, DataTable_t1931745339 * ___table, int32_t ___mode, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataRow[],System.Data.XmlWriteMode,System.Data.DataRowVersion,System.Boolean)
extern "C"  void DataSet_WriteTable_m1770836515 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, DataRowU5BU5D_t3098821942* ___rows, int32_t ___mode, int32_t ___version, bool ___skipIfNested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteColumnAsElement_m1114127161 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, DataColumn_t1080745049 * ___col, DataRow_t3422932271 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsAttribute(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteColumnAsAttribute_m3950754915 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, DataColumn_t1080745049 * ___col, DataRow_t3422932271 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTableElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTable,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTableElement_m3433211047 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, DataTable_t1931745339 * ___table, DataRow_t3422932271 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteStartElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String)
extern "C"  void DataSet_WriteStartElement_m1198324208 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, String_t* ___nspc, String_t* ___prefix, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteAttributeString(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String,System.String)
extern "C"  void DataSet_WriteAttributeString_m2590713299 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, String_t* ___nspc, String_t* ___prefix, String_t* ___name, String_t* ___stringValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteIndividualTableContent(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode)
extern "C"  void DataSet_WriteIndividualTableContent_m714692103 (DataSet_t646994783 * __this, XmlWriter_t1713407564 * ___writer, DataTable_t1931745339 * ___table, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::DoWriteXmlSchema(System.Xml.XmlWriter)
extern "C"  void DataSet_DoWriteXmlSchema_m1443107091 (DataSet_t646994783 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SplitColumns(System.Data.DataTable,System.Collections.ArrayList&,System.Collections.ArrayList&,System.Data.DataColumn&)
extern "C"  void DataSet_SplitColumns_m1435666352 (Il2CppObject * __this /* static, unused */, DataTable_t1931745339 * ___table, ArrayList_t1468494371 ** ___atts, ArrayList_t1468494371 ** ___elements, DataColumn_t1080745049 ** ___simple, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteDiffGramElement(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteDiffGramElement_m2731002698 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SetRowsID()
extern "C"  void DataSet_SetRowsID_m4117219233 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataSet::get_RemotingFormat()
extern "C"  int32_t DataSet_get_RemotingFormat_m165050203 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SchemaSerializationMode System.Data.DataSet::get_SchemaSerializationMode()
extern "C"  int32_t DataSet_get_SchemaSerializationMode_m3449513530 (DataSet_t646994783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataSet::GetDataSetSchema(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlSchemaComplexType_t1768361183 * DataSet_GetDataSetSchema_m1305842303 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataSet_BinarySerialize_m147618859 (DataSet_t646994783 * __this, SerializationInfo_t1029367511 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinaryDeserialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataSet_BinaryDeserialize_m2483280828 (DataSet_t646994783 * __this, SerializationInfo_t1029367511 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsBinarySerialized(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  bool DataSet_IsBinarySerialized_m4235768187 (DataSet_t646994783 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
