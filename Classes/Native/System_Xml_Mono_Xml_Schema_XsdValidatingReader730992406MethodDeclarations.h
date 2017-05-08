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

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t730992406;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t4216635540;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.Xml.XmlParserContext
struct XmlParserContext_t2532808825;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3654972885;
// System.Exception
struct Exception_t1145979430;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t4218824207;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2397441035;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2331747099;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1768361183;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1387769087;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t375788737;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t2634114609;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t890085650;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlResolver2792156615.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Xml_System_Xml_ValidationType3328172095.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlNodeType1277652749.h"
#include "System_Xml_System_Xml_ReadState3327507773.h"
#include "System_Xml_System_Xml_XmlSpace2881005573.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationEx4218824207.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType2262508413.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype2331747099.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1943985395.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaComplexType1768361183.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute1387769087.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry375788737.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityConst890085650.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable2634114609.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XsdValidatingReader__ctor_m2816848109 (XsdValidatingReader_t730992406 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
extern "C"  void XsdValidatingReader__cctor_m1053319682 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
extern "C"  XsdValidationContext_t4216635540 * XsdValidatingReader_get_Context_m1181067714 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
extern "C"  ArrayList_t1468494371 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m511307765 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
extern "C"  int32_t XsdValidatingReader_get_XsiNilDepth_m1794585750 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XsdValidatingReader_set_XmlResolver_m644302998 (XsdValidatingReader_t730992406 * __this, XmlResolver_t2792156615 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XsdValidatingReader_set_Schemas_m1699910151 (XsdValidatingReader_t730992406 * __this, XmlSchemaSet_t529105423 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
extern "C"  Il2CppObject * XsdValidatingReader_get_SchemaType_m1143042528 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
extern "C"  Il2CppObject * XsdValidatingReader_get_SourceReaderSchemaType_m3259568594 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
extern "C"  int32_t XsdValidatingReader_get_ValidationType_m591808099 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XsdValidatingReader_set_ValidationType_m2628954836 (XsdValidatingReader_t730992406 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
extern "C"  int32_t XsdValidatingReader_get_AttributeCount_m1196147729 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
extern "C"  String_t* XsdValidatingReader_get_BaseURI_m953752292 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
extern "C"  bool XsdValidatingReader_get_CanResolveEntity_m1392751727 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
extern "C"  int32_t XsdValidatingReader_get_Depth_m981192479 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
extern "C"  bool XsdValidatingReader_get_EOF_m1890240564 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_HasValue()
extern "C"  bool XsdValidatingReader_get_HasValue_m1239647021 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
extern "C"  bool XsdValidatingReader_get_IsDefault_m384222781 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
extern "C"  bool XsdValidatingReader_get_IsEmptyElement_m3384745305 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.Int32)
extern "C"  String_t* XsdValidatingReader_get_Item_m3572803273 (XsdValidatingReader_t730992406 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m2576727580 (XsdValidatingReader_t730992406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m3906282500 (XsdValidatingReader_t730992406 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
extern "C"  int32_t XsdValidatingReader_get_LineNumber_m2006587123 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
extern "C"  int32_t XsdValidatingReader_get_LinePosition_m1090923281 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
extern "C"  String_t* XsdValidatingReader_get_LocalName_m1832176215 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
extern "C"  String_t* XsdValidatingReader_get_Name_m1695020402 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
extern "C"  String_t* XsdValidatingReader_get_NamespaceURI_m1170059634 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t1855692664 * XsdValidatingReader_get_NameTable_m4153595654 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
extern "C"  int32_t XsdValidatingReader_get_NodeType_m1917435558 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t2532808825 * XsdValidatingReader_get_ParserContext_m2486267724 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t3654972885 * XsdValidatingReader_get_NamespaceManager_m91550246 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
extern "C"  String_t* XsdValidatingReader_get_Prefix_m4133526301 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
extern "C"  int32_t XsdValidatingReader_get_ReadState_m2633947555 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
extern "C"  String_t* XsdValidatingReader_get_Value_m1276725964 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_XmlLang()
extern "C"  String_t* XsdValidatingReader_get_XmlLang_m3435569396 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
extern "C"  int32_t XsdValidatingReader_get_XmlSpace_m2682779171 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
extern "C"  void XsdValidatingReader_HandleError_m9342877 (XsdValidatingReader_t730992406 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
extern "C"  void XsdValidatingReader_HandleError_m363187045 (XsdValidatingReader_t730992406 * __this, String_t* ___error, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m3220822152 (XsdValidatingReader_t730992406 * __this, String_t* ___error, Exception_t1145979430 * ___innerException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C"  void XsdValidatingReader_HandleError_m1418278920 (XsdValidatingReader_t730992406 * __this, XmlSchemaValidationException_t4218824207 * ___schemaException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m3406020971 (XsdValidatingReader_t730992406 * __this, XmlSchemaValidationException_t4218824207 * ___schemaException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
extern "C"  XmlSchemaElement_t3250505123 * XsdValidatingReader_FindElement_m3081528320 (XsdValidatingReader_t730992406 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t2397441035 * XsdValidatingReader_FindType_m2233098252 (XsdValidatingReader_t730992406 * __this, XmlQualifiedName_t3059647944 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
extern "C"  void XsdValidatingReader_ValidateStartElementParticle_m2265552777 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
extern "C"  void XsdValidatingReader_ValidateEndElementParticle_m1209316788 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
extern "C"  void XsdValidatingReader_ValidateCharacters_m2461191769 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContent_m170770303 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContentCore_m158428238 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_AssessStringValid_m1229084264 (XsdValidatingReader_t730992406 * __this, XmlSchemaSimpleType_t2262508413 * ___st, XmlSchemaDatatype_t2331747099 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C"  void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m2809066085 (XsdValidatingReader_t730992406 * __this, XmlSchemaSimpleType_t2262508413 * ___st, XmlSchemaDatatype_t2331747099 ** ___dt, String_t* ___normalized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
extern "C"  Il2CppObject * XsdValidatingReader_GetXsiType_m1975559572 (XsdValidatingReader_t730992406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XsdValidatingReader_AssessLocalTypeDerivationOK_m1520444896 (XsdValidatingReader_t730992406 * __this, Il2CppObject * ___xsiType, Il2CppObject * ___baseType, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessStartElementSchemaValidity_m3956953704 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidElement_m3142873501 (XsdValidatingReader_t730992406 * __this, String_t* ___xsiNilValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
extern "C"  void XsdValidatingReader_AssessStartElementLocallyValidType_m3254538583 (XsdValidatingReader_t730992406 * __this, Il2CppObject * ___schemaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidComplexType_m1750516752 (XsdValidatingReader_t730992406 * __this, XmlSchemaComplexType_t1768361183 * ___cType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValid_m4243531920 (XsdValidatingReader_t730992406 * __this, XmlSchemaAttribute_t1387769087 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValidUse_m3071771799 (XsdValidatingReader_t730992406 * __this, XmlSchemaAttribute_t1387769087 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessEndElementSchemaValidity_m603390835 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
extern "C"  void XsdValidatingReader_ValidateEndElementKeyConstraints_m288902099 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
extern "C"  void XsdValidatingReader_ValidateKeySelectors_m3250231594 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
extern "C"  void XsdValidatingReader_ValidateKeyFields_m4191309861 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  void XsdValidatingReader_ProcessKeyEntry_m3946425504 (XsdValidatingReader_t730992406 * __this, XsdKeyEntry_t375788737 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  XsdKeyTable_t2634114609 * XsdValidatingReader_CreateNewKeyTable_m2532340422 (XsdValidatingReader_t730992406 * __this, XmlSchemaIdentityConstraint_t890085650 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_ValidateSimpleContentIdentity_m2503331531 (XsdValidatingReader_t730992406 * __this, XmlSchemaDatatype_t2331747099 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
extern "C"  void XsdValidatingReader_EndIdentityValidation_m492349044 (XsdValidatingReader_t730992406 * __this, XsdKeyTable_t2634114609 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdValidatingReader_EndKeyrefValidation_m1654847604 (XsdValidatingReader_t730992406 * __this, XsdKeyTable_t2634114609 * ___seq, XmlSchemaIdentityConstraint_t890085650 * ___targetIdent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
extern "C"  void XsdValidatingReader_Close_m1386997535 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.Int32)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m4188741115 (XsdValidatingReader_t730992406 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m3565307266 (XsdValidatingReader_t730992406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
extern "C"  XmlQualifiedName_t3059647944 * XsdValidatingReader_SplitQName_m3329678248 (XsdValidatingReader_t730992406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m312263850 (XsdValidatingReader_t730992406 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetDefaultAttribute_m3570766809 (XsdValidatingReader_t730992406 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C"  int32_t XsdValidatingReader_FindDefaultAttribute_m647430089 (XsdValidatingReader_t730992406 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
extern "C"  bool XsdValidatingReader_HasLineInfo_m1437529503 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XsdValidatingReader_LookupNamespace_m2508134923 (XsdValidatingReader_t730992406 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XsdValidatingReader_MoveToAttribute_m991107930 (XsdValidatingReader_t730992406 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m38865249 (XsdValidatingReader_t730992406 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m2019291023 (XsdValidatingReader_t730992406 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToDefaultAttribute_m4035478896 (XsdValidatingReader_t730992406 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
extern "C"  bool XsdValidatingReader_MoveToElement_m3946379985 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
extern "C"  bool XsdValidatingReader_MoveToFirstAttribute_m3952802825 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
extern "C"  bool XsdValidatingReader_MoveToNextAttribute_m3815838422 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
extern "C"  XmlSchema_t2944277931 * XsdValidatingReader_ReadExternalSchema_m2560685189 (XsdValidatingReader_t730992406 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
extern "C"  void XsdValidatingReader_ExamineAdditionalSchema_m3063904238 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
extern "C"  bool XsdValidatingReader_Read_m3160828759 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
extern "C"  bool XsdValidatingReader_ReadAttributeValue_m4060832312 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::ReadString()
extern "C"  String_t* XsdValidatingReader_ReadString_m33267863 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
extern "C"  void XsdValidatingReader_ResolveEntity_m3447115112 (XsdValidatingReader_t730992406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
