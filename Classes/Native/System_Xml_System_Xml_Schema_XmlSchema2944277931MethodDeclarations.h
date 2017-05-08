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

// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2095492222;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t3400049748;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1387769087;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3083276646;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2397441035;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm3231120069.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1943985395.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_XmlResolver2792156615.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "mscorlib_System_Collections_Hashtable1312997718.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaExternal3400049748.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec3000072622.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C"  void XmlSchema__ctor_m51914100 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C"  int32_t XmlSchema_get_AttributeFormDefault_m3232436598 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C"  int32_t XmlSchema_get_BlockDefault_m3167622519 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C"  int32_t XmlSchema_get_FinalDefault_m3078671190 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C"  int32_t XmlSchema_get_ElementFormDefault_m687286338 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C"  String_t* XmlSchema_get_TargetNamespace_m3809406638 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C"  void XmlSchema_set_TargetNamespace_m3068182835 (XmlSchema_t2944277931 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C"  String_t* XmlSchema_get_Version_m3968040126 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C"  XmlSchemaObjectCollection_t3000072622 * XmlSchema_get_Includes_m3401500551 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C"  XmlSchemaObjectCollection_t3000072622 * XmlSchema_get_Items_m1444401730 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C"  bool XmlSchema_get_IsCompiled_m3795990538 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_Attributes_m154814159 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_AttributeGroups_m1904856708 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_SchemaTypes_m1481079476 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_Elements_m3931240385 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C"  String_t* XmlSchema_get_Id_m506178187 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_Groups_m2499623686 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_Notations_m2979350871 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t2095492222 * XmlSchema_get_NamedIdentities_m3730697439 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C"  XmlSchemaSet_t529105423 * XmlSchema_get_Schemas_m3487443447 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C"  Hashtable_t1312997718 * XmlSchema_get_IDCollection_m3927332119 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Compile(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_Compile_m4259389175 (XmlSchema_t2944277931 * __this, ValidationEventHandler_t477176618 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.XmlResolver)
extern "C"  void XmlSchema_Compile_m1279500700 (XmlSchema_t2944277931 * __this, ValidationEventHandler_t477176618 * ___handler, XmlResolver_t2792156615 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C"  void XmlSchema_CompileSubset_m3854363955 (XmlSchema_t2944277931 * __this, ValidationEventHandler_t477176618 * ___handler, XmlSchemaSet_t529105423 * ___col, XmlResolver_t2792156615 * ___resolver, Hashtable_t1312997718 * ___handledUris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C"  void XmlSchema_SetParent_m292588232 (XmlSchema_t2944277931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C"  void XmlSchema_DoCompile_m4018668668 (XmlSchema_t2944277931 * __this, ValidationEventHandler_t477176618 * ___handler, Hashtable_t1312997718 * ___handledUris, XmlSchemaSet_t529105423 * ___col, XmlResolver_t2792156615 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C"  String_t* XmlSchema_GetResolvedUri_m1592595786 (XmlSchema_t2944277931 * __this, XmlResolver_t2792156615 * ___resolver, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_ProcessExternal_m382455060 (XmlSchema_t2944277931 * __this, ValidationEventHandler_t477176618 * ___handler, Hashtable_t1312997718 * ___handledUris, XmlResolver_t2792156615 * ___resolver, XmlSchemaExternal_t3400049748 * ___ext, XmlSchemaSet_t529105423 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchema_AddExternalComponentsTo_m1341089740 (XmlSchema_t2944277931 * __this, XmlSchema_t2944277931 * ___s, XmlSchemaObjectCollection_t3000072622 * ___items, ValidationEventHandler_t477176618 * ___handler, Hashtable_t1312997718 * ___handledUris, XmlResolver_t2792156615 * ___resolver, XmlSchemaSet_t529105423 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C"  bool XmlSchema_IsNamespaceAbsent_m757975026 (XmlSchema_t2944277931 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttribute_t1387769087 * XmlSchema_FindAttribute_m1515737363 (XmlSchema_t2944277931 * __this, XmlQualifiedName_t3059647944 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaAttributeGroup_t3083276646 * XmlSchema_FindAttributeGroup_m570556891 (XmlSchema_t2944277931 * __this, XmlQualifiedName_t3059647944 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaElement_t3250505123 * XmlSchema_FindElement_m4231662587 (XmlSchema_t2944277931 * __this, XmlQualifiedName_t3059647944 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t2397441035 * XmlSchema_FindSchemaType_m2871968814 (XmlSchema_t2944277931 * __this, XmlQualifiedName_t3059647944 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_Validate_m51221120 (XmlSchema_t2944277931 * __this, ValidationEventHandler_t477176618 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchema_t2944277931 * XmlSchema_Read_m4050900758 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___rdr, ValidationEventHandler_t477176618 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadAttributes_m1470016652 (Il2CppObject * __this /* static, unused */, XmlSchema_t2944277931 * ___schema, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchema_ReadContent_m3369840346 (Il2CppObject * __this /* static, unused */, XmlSchema_t2944277931 * ___schema, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
