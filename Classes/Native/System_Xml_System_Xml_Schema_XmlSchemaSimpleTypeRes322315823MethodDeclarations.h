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

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t322315823;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t2710943548;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t889263158;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t1180583914;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t167327028;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t2153520072;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t1399141526;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t343658524;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t2759894857;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet2710943548.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaTotalDigitsFa889263158.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFractionDigi1180583914.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaLengthFacet167327028.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet1787722659.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaMaxLengthFac2153520072.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaMinLengthFac1399141526.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
extern "C"  void XmlSchemaSimpleTypeRestriction__ctor_m25838938 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
extern "C"  void XmlSchemaSimpleTypeRestriction__cctor_m1297148591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m1340125944 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
extern "C"  XmlSchemaSimpleType_t2262508413 * XmlSchemaSimpleTypeRestriction_get_BaseType_m3049685758 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
extern "C"  XmlSchemaObjectCollection_t3000072622 * XmlSchemaSimpleTypeRestriction_get_Facets_m3999339884 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeRestriction_SetParent_m1409062408 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaObject_t1566397180 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeRestriction_Compile_m3585943928 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C"  bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m3342778477 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaFacet_t2710943548 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeRestriction_Validate_m2636580119 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSimpleTypeRestriction_ValidateActualType_m2439597403 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  Il2CppObject * XmlSchemaSimpleTypeRestriction_GetActualType_m2760997805 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m2360139993 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaTotalDigitsFacet_t889263158 * ___totf, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m1191031801 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaFractionDigitsFacet_t1180583914 * ___fracf, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m519846283 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaFacet_t2710943548 * ___facet, Il2CppObject ** ___baseFacet, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m51641921 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaLengthFacet_t167327028 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m4080291525 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaMaxLengthFacet_t2153520072 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m1416561029 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, XmlSchemaMinLengthFacet_t1399141526 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
extern "C"  XsdAnySimpleType_t343658524 * XmlSchemaSimpleTypeRestriction_getDatatype_m2027371807 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
extern "C"  Il2CppObject * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m3524579974 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m198003306 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, String_t* ___value, XmlNameTable_t1855692664 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m4214855258 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, String_t* ___value, XmlNameTable_t1855692664 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m1045338203 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, String_t* ___value, XmlNameTable_t1855692664 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m3871762251 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, String_t* ___value, XmlNameTable_t1855692664 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m3257480346 (XmlSchemaSimpleTypeRestriction_t322315823 * __this, String_t* ___value, XmlNameTable_t1855692664 * ___nt, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeRestriction_t322315823 * XmlSchemaSimpleTypeRestriction_Read_m2951068472 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
