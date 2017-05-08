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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2095492222;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Xml.XmlParserContext
struct XmlParserContext_t2532808825;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t343658524;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Xml.XmlAttribute
struct XmlAttribute_t3902017245;
// System.Exception
struct Exception_t1145979430;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1893163649;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3083276646;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1387769087;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1768361183;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable2095492222.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Collections_Hashtable1312997718.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType343658524.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_XmlAttribute3902017245.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1943985395.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm3231120069.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProces706549897.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaUse441645290.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectCollec3000072622.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute1893163649.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttributeGro3083276646.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute1387769087.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaComplexType1768361183.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C"  void XmlSchemaUtil__cctor_m1412025169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_AddToTable_m3433820912 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t2095492222 * ___table, XmlSchemaObject_t1566397180 * ___obj, XmlQualifiedName_t3059647944 * ___qname, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaUtil_CompileID_m2180972366 (Il2CppObject * __this /* static, unused */, String_t* ___id, XmlSchemaObject_t1566397180 * ___xso, Hashtable_t1312997718 * ___idCollection, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C"  bool XmlSchemaUtil_CheckAnyUri_m2554037140 (Il2CppObject * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C"  bool XmlSchemaUtil_CheckNormalizedString_m2252987888 (Il2CppObject * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C"  bool XmlSchemaUtil_CheckNCName_m3658558736 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_CheckQName_m932858176 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t3059647944 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C"  XmlParserContext_t2532808825 * XmlSchemaUtil_GetParserContext_m1478813848 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaUtil_IsBuiltInDatatypeName_m125089262 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t3059647944 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C"  bool XmlSchemaUtil_AreSchemaDatatypeEqual_m3499765393 (Il2CppObject * __this /* static, unused */, XsdAnySimpleType_t343658524 * ___st1, Il2CppObject * ___v1, XsdAnySimpleType_t343658524 * ___st2, Il2CppObject * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C"  bool XmlSchemaUtil_IsValidQName_m3829826368 (Il2CppObject * __this /* static, unused */, String_t* ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C"  StringU5BU5D_t3764931161* XmlSchemaUtil_SplitList_m3602217835 (Il2CppObject * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaUtil_ReadUnhandledAttribute_m2075900843 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, XmlSchemaObject_t1566397180 * ___xso, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlSchemaUtil_ParseWsdlArrayType_m3661063451 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, XmlAttribute_t3902017245 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  bool XmlSchemaUtil_ReadBoolAttribute_m6534952 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, Exception_t1145979430 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_ReadDerivationAttribute_m1638656916 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, Exception_t1145979430 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  int32_t XmlSchemaUtil_AddFlag_m3735098180 (Il2CppObject * __this /* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadFormAttribute_m2203736706 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, Exception_t1145979430 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadProcessingAttribute_m4064511207 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, Exception_t1145979430 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  int32_t XmlSchemaUtil_ReadUseAttribute_m1739542962 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, Exception_t1145979430 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaUtil_ReadQNameAttribute_m2139815095 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, Exception_t1145979430 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaUtil_ToQName_m3333358766 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, String_t* ___qnamestr, Exception_t1145979430 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C"  int32_t XmlSchemaUtil_ValidateAttributesResolved_m380170463 (Il2CppObject * __this /* static, unused */, XmlSchemaObjectTable_t2095492222 * ___attributesResolved, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, XmlSchemaObjectCollection_t3000072622 * ___attributes, XmlSchemaAnyAttribute_t1893163649 * ___anyAttribute, XmlSchemaAnyAttribute_t1893163649 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t3083276646 * ___redefined, bool ___skipEquivalent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C"  bool XmlSchemaUtil_AreAttributesEqual_m3886926111 (Il2CppObject * __this /* static, unused */, XmlSchemaAttribute_t1387769087 * ___one, XmlSchemaAttribute_t1387769087 * ___another, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t1566397180 * XmlSchemaUtil_FindAttributeDeclaration_m3428239080 (Il2CppObject * __this /* static, unused */, String_t* ___ns, XmlSchemaSet_t529105423 * ___schemas, XmlSchemaComplexType_t1768361183 * ___cType, XmlQualifiedName_t3059647944 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C"  bool XmlSchemaUtil_AttributeWildcardItemValid_m4032379552 (Il2CppObject * __this /* static, unused */, XmlSchemaAnyAttribute_t1893163649 * ___anyAttr, XmlQualifiedName_t3059647944 * ___qname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
