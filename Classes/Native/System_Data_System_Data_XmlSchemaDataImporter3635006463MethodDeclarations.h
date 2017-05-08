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

// System.Data.XmlSchemaDataImporter
struct XmlSchemaDataImporter_t3635006463;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t3428998803;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;
// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.Data.RelationStructure
struct RelationStructure_t3076676356;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t444294441;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2331747099;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1387769087;
// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t850747579;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t890085650;
// System.Data.ConstraintStructure
struct ConstraintStructure_t2995208323;
// System.Xml.Schema.XmlSchemaKeyref
struct XmlSchemaKeyref_t3187733971;
// System.Data.UniqueConstraint
struct UniqueConstraint_t2586895203;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t991420294;
// System.Xml.XmlElement
struct XmlElement_t2049349347;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t4104482225;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.Common.DataTableMapping
struct DataTableMapping_t1638836534;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement3250505123.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3333075425.h"
#include "System_Data_System_Data_RelationStructure3076676356.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase444294441.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute1387769087.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated850747579.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType2262508413.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype2331747099.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityConst890085650.h"
#include "System_Data_System_Data_ConstraintStructure2995208323.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaKeyref3187733971.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation991420294.h"
#include "System_Xml_System_Xml_XmlElement2049349347.h"
#include "System_Data_System_Data_Common_DbProviderFactory4104482225.h"
#include "System_Data_System_Data_Common_DataTableMapping1638836534.h"

// System.Void System.Data.XmlSchemaDataImporter::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlSchemaDataImporter__ctor_m2250537031 (XmlSchemaDataImporter_t3635006463 * __this, DataSet_t646994783 * ___dataset, XmlReader_t1154388064 * ___reader, bool ___forDataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::.cctor()
extern "C"  void XmlSchemaDataImporter__cctor_m1871473624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableAdapterSchemaInfo System.Data.XmlSchemaDataImporter::get_CurrentAdapter()
extern "C"  TableAdapterSchemaInfo_t3428998803 * XmlSchemaDataImporter_get_CurrentAdapter_m696729282 (XmlSchemaDataImporter_t3635006463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::Process()
extern "C"  void XmlSchemaDataImporter_Process_m3959693080 (XmlSchemaDataImporter_t3635006463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::IsDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  bool XmlSchemaDataImporter_IsDataSetElement_m1233204986 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::ContainsColumn(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaDataImporter_ContainsColumn_m727096665 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaParticle_t3333075425 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessGlobalElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessGlobalElement_m1756234060 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessDataSetElement_m2121884841 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSetContentTypeParticle(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaDataImporter_HandleDataSetContentTypeParticle_m4043795765 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaParticle_t3333075425 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataTableElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessDataTableElement_m2364720669 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.XmlSchemaDataImporter::GenerateRelationship(System.Data.RelationStructure)
extern "C"  DataRelation_t3033993051 * XmlSchemaDataImporter_GenerateRelationship_m2045827778 (XmlSchemaDataImporter_t3635006463 * __this, RelationStructure_t3076676356 * ___rs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlSchemaDataImporter::CreateChildColumn(System.Data.DataColumn,System.Data.DataTable)
extern "C"  DataColumn_t1080745049 * XmlSchemaDataImporter_CreateChildColumn_m3874934031 (XmlSchemaDataImporter_t3635006463 * __this, DataColumn_t1080745049 * ___parentColumn, DataTable_t1931745339 * ___childTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnGroupBase(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaDataImporter_ImportColumnGroupBase_m3450965356 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___parent, XmlSchemaGroupBase_t444294441 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Data.XmlSchemaDataImporter::GetSchemaPrimitiveType(System.Object)
extern "C"  XmlSchemaDatatype_t2331747099 * XmlSchemaDataImporter_GetSchemaPrimitiveType_m1147598347 (XmlSchemaDataImporter_t3635006463 * __this, Il2CppObject * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnAttribute(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XmlSchemaDataImporter_ImportColumnAttribute_m2284600143 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaAttribute_t1387769087 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ImportColumnElement_m3267878188 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___parent, XmlSchemaElement_t3250505123 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnMetaInfo(System.Xml.Schema.XmlSchemaAnnotated,System.Xml.XmlQualifiedName,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_ImportColumnMetaInfo_m3736491557 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaAnnotated_t850747579 * ___obj, XmlQualifiedName_t3059647944 * ___name, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnComplexElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnComplexElement_m1394565075 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___parent, XmlSchemaElement_t3250505123 * ___el, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::DataSetDefinesKey(System.String)
extern "C"  bool XmlSchemaDataImporter_DataSetDefinesKey_m1670523888 (XmlSchemaDataImporter_t3635006463 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddParentKeyColumn(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_AddParentKeyColumn_m1936869666 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___parent, XmlSchemaElement_t3250505123 * ___el, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnRepeatedSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnRepeatedSimpleElement_m553383923 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___parent, XmlSchemaElement_t3250505123 * ___el, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnSimpleElement_m1903923828 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___el, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddColumn(System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_AddColumn_m2108354167 (XmlSchemaDataImporter_t3635006463 * __this, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillFacet(System.Data.DataColumn,System.Xml.Schema.XmlSchemaSimpleType)
extern "C"  void XmlSchemaDataImporter_FillFacet_m3932301551 (XmlSchemaDataImporter_t3635006463 * __this, DataColumn_t1080745049 * ___col, XmlSchemaSimpleType_t2262508413 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.XmlSchemaDataImporter::ConvertDatatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C"  Type_t * XmlSchemaDataImporter_ConvertDatatype_m1212215755 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaDatatype_t2331747099 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaDataImporter::GetSelectorTarget(System.String)
extern "C"  String_t* XmlSchemaDataImporter_GetSelectorTarget_m3081867098 (XmlSchemaDataImporter_t3635006463 * __this, String_t* ___xpath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveSelfIdentity(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XmlSchemaDataImporter_ReserveSelfIdentity_m1145300869 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaIdentityConstraint_t890085650 * ___ic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessSelfIdentity(System.Data.ConstraintStructure)
extern "C"  void XmlSchemaDataImporter_ProcessSelfIdentity_m3475453255 (XmlSchemaDataImporter_t3635006463 * __this, ConstraintStructure_t2995208323 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaKeyref)
extern "C"  void XmlSchemaDataImporter_ReserveRelationIdentity_m3737361223 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___element, XmlSchemaKeyref_t3187733971 * ___keyref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Data.ConstraintStructure)
extern "C"  void XmlSchemaDataImporter_ProcessRelationIdentity_m4143201804 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___element, ConstraintStructure_t2995208323 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.XmlSchemaDataImporter::FindConstraint(System.String,System.Xml.Schema.XmlSchemaElement)
extern "C"  UniqueConstraint_t2586895203 * XmlSchemaDataImporter_FindConstraint_m1712138076 (XmlSchemaDataImporter_t3635006463 * __this, String_t* ___name, XmlSchemaElement_t3250505123 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleAnnotations(System.Xml.Schema.XmlSchemaAnnotation,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleAnnotations_m3158465974 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaAnnotation_t991420294 * ___an, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSourceAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleDataSourceAnnotation_m4141940255 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessTableAdapter(System.Xml.XmlElement,System.Data.Common.DbProviderFactory,System.String)
extern "C"  void XmlSchemaDataImporter_ProcessTableAdapter_m3373273769 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, DbProviderFactory_t4104482225 * ___provider, String_t* ___connStr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDbSource(System.Xml.XmlElement)
extern "C"  void XmlSchemaDataImporter_ProcessDbSource_m2129500930 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.XmlSchemaDataImporter::ProcessDbCommand(System.Xml.XmlElement)
extern "C"  DbCommand_t637345143 * XmlSchemaDataImporter_ProcessDbCommand_m2778018998 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::ProcessDbParameters(System.Xml.XmlElement)
extern "C"  ArrayList_t1468494371 * XmlSchemaDataImporter_ProcessDbParameters_m2746719111 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessColumnMapping(System.Xml.XmlElement,System.Data.Common.DataTableMapping)
extern "C"  void XmlSchemaDataImporter_ProcessColumnMapping_m241334869 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, DataTableMapping_t1638836534 * ___tableMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleRelationshipAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleRelationshipAnnotation_m2369393102 (XmlSchemaDataImporter_t3635006463 * __this, XmlElement_t2049349347 * ___el, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetElementDefaultValue(System.Xml.Schema.XmlSchemaElement)
extern "C"  Il2CppObject * XmlSchemaDataImporter_GetElementDefaultValue_m793753107 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaElement_t3250505123 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetAttributeDefaultValue(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  Il2CppObject * XmlSchemaDataImporter_GetAttributeDefaultValue_m4000737355 (XmlSchemaDataImporter_t3635006463 * __this, XmlSchemaAttribute_t1387769087 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
