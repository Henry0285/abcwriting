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

// System.Data.XmlSchemaWriter
struct XmlSchemaWriter_t4061029576;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Data.DataTableCollection
struct DataTableCollection_t2538116523;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3900360787;
// System.Data.DataTable[]
struct DataTableU5BU5D_t1960054906;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t3197090010;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.Data.UniqueConstraint
struct UniqueConstraint_t2586895203;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.PropertyCollection
struct PropertyCollection_t1951657822;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3722401323;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "System_Data_System_Data_DataTableCollection2538116523.h"
#include "System_Data_System_Data_DataRelationCollection3900360787.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "System_Data_System_Data_DataRelation3033993051.h"
#include "System_Data_System_Data_UniqueConstraint2586895203.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "System_Data_System_Data_PropertyCollection1951657822.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "System_System_Collections_Specialized_ListDictiona3722401323.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Data.XmlSchemaWriter::.ctor(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter__ctor_m2062041539 (XmlSchemaWriter_t4061029576 * __this, DataSet_t646994783 * ___dataset, XmlWriter_t1713407564 * ___writer, DataTableCollection_t2538116523 * ___tables, DataRelationCollection_t3900360787 * ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter__ctor_m2527119386 (XmlSchemaWriter_t4061029576 * __this, XmlWriter_t1713407564 * ___writer, DataTableU5BU5D_t1960054906* ___tables, DataRelationU5BU5D_t3197090010* ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, CultureInfo_t634113868 * ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m4230186502 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___dataset, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m556424756 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___dataset, XmlWriter_t1713407564 * ___writer, DataTableCollection_t2538116523 * ___tables, DataRelationCollection_t3900360787 * ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m1787532919 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, DataTableU5BU5D_t1960054906* ___tables, DataRelationU5BU5D_t3197090010* ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, CultureInfo_t634113868 * ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaWriter::get_ConstraintPrefix()
extern "C"  String_t* XmlSchemaWriter_get_ConstraintPrefix_m342989415 (XmlSchemaWriter_t4061029576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSchema()
extern "C"  void XmlSchemaWriter_WriteSchema_m3676814214 (XmlSchemaWriter_t4061029576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataSetElement()
extern "C"  void XmlSchemaWriter_WriteDataSetElement_m1173938991 (XmlSchemaWriter_t4061029576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataRelationAnnotation(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteDataRelationAnnotation_m230288925 (XmlSchemaWriter_t4061029576 * __this, DataRelation_t3033993051 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteConstraints()
extern "C"  void XmlSchemaWriter_WriteConstraints_m3833857977 (XmlSchemaWriter_t4061029576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddUniqueConstraints(System.Data.UniqueConstraint,System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_AddUniqueConstraints_m82650008 (XmlSchemaWriter_t4061029576 * __this, UniqueConstraint_t2586895203 * ___uniq, ArrayList_t1468494371 * ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddForeignKeys(System.Data.DataRelation,System.Collections.ArrayList,System.Boolean)
extern "C"  void XmlSchemaWriter_AddForeignKeys_m1204299886 (XmlSchemaWriter_t4061029576 * __this, DataRelation_t3033993051 * ___rel, ArrayList_t1468494371 * ___names, bool ___isConstraintOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaWriter::CheckExtendedPropertyExists(System.Data.DataTable[],System.Data.DataRelation[])
extern "C"  bool XmlSchemaWriter_CheckExtendedPropertyExists_m2330619378 (XmlSchemaWriter_t4061029576 * __this, DataTableU5BU5D_t1960054906* ___tables, DataRelationU5BU5D_t3197090010* ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddExtendedPropertyAttributes(System.Data.PropertyCollection)
extern "C"  void XmlSchemaWriter_AddExtendedPropertyAttributes_m1345973024 (XmlSchemaWriter_t4061029576 * __this, PropertyCollection_t1951657822 * ___props, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableElement(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableElement_m2458967300 (XmlSchemaWriter_t4061029576 * __this, DataTable_t1931745339 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableType(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableType_m2045223376 (XmlSchemaWriter_t4061029576 * __this, DataTable_t1931745339 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableTypeParticles(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteTableTypeParticles_m3379552289 (XmlSchemaWriter_t4061029576 * __this, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteChildRelations(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteChildRelations_m3087819407 (XmlSchemaWriter_t4061029576 * __this, DataRelation_t3033993051 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableAttributes(System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_WriteTableAttributes_m2303297061 (XmlSchemaWriter_t4061029576 * __this, ArrayList_t1468494371 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSimpleType(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteSimpleType_m200645530 (XmlSchemaWriter_t4061029576 * __this, DataColumn_t1080745049 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteQName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaWriter_WriteQName_m4053048853 (XmlSchemaWriter_t4061029576 * __this, XmlQualifiedName_t3059647944 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::CheckNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_CheckNamespace_m674073411 (XmlSchemaWriter_t4061029576 * __this, String_t* ___prefix, String_t* ___ns, ListDictionary_t3722401323 * ___names, ListDictionary_t3722401323 * ___includes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::HandleExternalNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_HandleExternalNamespace_m1890995597 (XmlSchemaWriter_t4061029576 * __this, String_t* ___prefix, String_t* ___ns, ListDictionary_t3722401323 * ___includes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.XmlSchemaWriter::MapType(System.Type)
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaWriter_MapType_m799364116 (XmlSchemaWriter_t4061029576 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
