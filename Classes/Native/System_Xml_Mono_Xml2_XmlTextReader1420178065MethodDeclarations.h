﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1420178065;
// System.IO.TextReader
struct TextReader_t657369457;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.IO.Stream
struct Stream_t2768948945;
// System.Xml.XmlParserContext
struct XmlParserContext_t2532808825;
// System.String
struct String_t;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4140748649;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.Char[]
struct CharU5BU5D_t1685951112;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.Xml.XmlException
struct XmlException_t1578947676;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t862283766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader657369457.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "System_Xml_System_Xml_XmlNodeType1277652749.h"
#include "System_Xml_System_Xml_XmlParserContext2532808825.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_EntityHandling3372455228.h"
#include "System_Xml_System_Xml_ReadState3327507773.h"
#include "System_Xml_System_Xml_WhitespaceHandling3052754826.h"
#include "System_Xml_System_Xml_XmlResolver2792156615.h"
#include "System_Xml_System_Xml_XmlSpace2881005573.h"
#include "System_Xml_System_Xml_ConformanceLevel3140987483.h"
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo862283766.h"
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState3964514879.h"

// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m813389547 (XmlTextReader_t1420178065 * __this, TextReader_t657369457 * ___input, XmlNameTable_t1855692664 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m1494688423 (XmlTextReader_t1420178065 * __this, Stream_t2768948945 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t2532808825 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m1709056045 (XmlTextReader_t1420178065 * __this, String_t* ___url, Stream_t2768948945 * ___input, XmlNameTable_t1855692664 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m3002885293 (XmlTextReader_t1420178065 * __this, String_t* ___url, TextReader_t657369457 * ___input, XmlNameTable_t1855692664 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m1385347850 (XmlTextReader_t1420178065 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t2532808825 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m3025322717 (XmlTextReader_t1420178065 * __this, String_t* ___url, TextReader_t657369457 * ___fragment, int32_t ___fragType, XmlParserContext_t2532808825 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t2532808825 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m484420265 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m2960721140 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m1801677003 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m2484709276 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m3356937709 (XmlTextReader_t1420178065 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m2724747277 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m237381496 (XmlTextReader_t1420178065 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m3188182882 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m3380518450 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m2324489297 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_HasValue()
extern "C"  bool XmlTextReader_get_HasValue_m288897002 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m2378482498 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m1293641724 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m117260184 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m373229902 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m1555239464 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m3424654211 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m1774381465 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m2202120993 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t1855692664 * XmlTextReader_get_NameTable_m1152234135 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m580756835 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m1486413830 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m1114323087 (XmlTextReader_t1420178065 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m2322865934 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m3776492832 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t4140748649 * XmlTextReader_get_Settings_m3515693054 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m3298470291 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m4140649074 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m2138411469 (XmlTextReader_t1420178065 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_XmlLang()
extern "C"  String_t* XmlTextReader_get_XmlLang_m2161628901 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m1428414405 (XmlTextReader_t1420178065 * __this, XmlResolver_t2792156615 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m3960491090 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m979766246 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.Int32)
extern "C"  String_t* XmlTextReader_GetAttribute_m158962946 (XmlTextReader_t1420178065 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m407727921 (XmlTextReader_t1420178065 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
extern "C"  int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m3131961965 (XmlTextReader_t1420178065 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m3532387075 (XmlTextReader_t1420178065 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C"  TextReader_t657369457 * XmlTextReader_GetRemainder_m3090028925 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::HasLineInfo()
extern "C"  bool XmlTextReader_HasLineInfo_m2180447930 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m1852722012 (XmlTextReader_t1420178065 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlTextReader_LookupNamespace_m2826600237 (XmlTextReader_t1420178065 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m2745382643 (XmlTextReader_t1420178065 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1118614758 (XmlTextReader_t1420178065 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m2777961970 (XmlTextReader_t1420178065 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m3985090388 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m57810764 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m6695345 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m4250966042 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m212400661 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlTextReader_ReadChars_m681052168 (XmlTextReader_t1420178065 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m740315735 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m528159213 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C"  DTDObjectModel_t281012916 * XmlTextReader_get_DTD_m2516503158 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t2792156615 * XmlTextReader_get_Resolver_m4081754147 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
extern "C"  XmlException_t1578947676 * XmlTextReader_NotWFError_m2744867035 (XmlTextReader_t1420178065 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Init()
extern "C"  void XmlTextReader_Init_m720989474 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Clear()
extern "C"  void XmlTextReader_Clear_m3298451189 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
extern "C"  void XmlTextReader_InitializeContext_m3588031662 (XmlTextReader_t1420178065 * __this, String_t* ___url, XmlParserContext_t2532808825 * ___context, TextReader_t657369457 * ___fragment, int32_t ___fragType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C"  int32_t XmlTextReader_get_Conformance_m696981150 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m4172047963 (XmlTextReader_t1420178065 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C"  void XmlTextReader_SetProperties_m1760365446 (XmlTextReader_t1420178065 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C"  void XmlTextReader_SetTokenProperties_m2712100215 (XmlTextReader_t1420178065 * __this, XmlTokenInfo_t862283766 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C"  void XmlTextReader_ClearAttributes_m1527810510 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C"  int32_t XmlTextReader_PeekSurrogate_m819639178 (XmlTextReader_t1420178065 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C"  int32_t XmlTextReader_PeekChar_m4166435029 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C"  int32_t XmlTextReader_ReadChar_m2401321314 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C"  void XmlTextReader_Advance_m3748729331 (XmlTextReader_t1420178065 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
extern "C"  bool XmlTextReader_ReadTextReader_m1017327015 (XmlTextReader_t1420178065 * __this, int32_t ___remained, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern "C"  bool XmlTextReader_ReadContent_m2339568511 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
extern "C"  void XmlTextReader_SetEntityReferenceProperties_m1859148823 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
extern "C"  void XmlTextReader_ReadStartTag_m834118668 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
extern "C"  void XmlTextReader_PushElementName_m2027126441 (XmlTextReader_t1420178065 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern "C"  void XmlTextReader_ReadEndTag_m4004313095 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C"  void XmlTextReader_CheckCurrentStateUpdate_m563991613 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C"  void XmlTextReader_AppendValueChar_m2317507254 (XmlTextReader_t1420178065 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C"  void XmlTextReader_AppendSurrogatePairValueChar_m3608684038 (XmlTextReader_t1420178065 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern "C"  String_t* XmlTextReader_CreateValueString_m402579543 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C"  void XmlTextReader_ClearValueBuffer_m240604208 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern "C"  void XmlTextReader_ReadText_m3403695994 (XmlTextReader_t1420178065 * __this, bool ___notWhitespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C"  int32_t XmlTextReader_ReadReference_m3213921956 (XmlTextReader_t1420178065 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
extern "C"  int32_t XmlTextReader_ReadCharacterReference_m887584278 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern "C"  int32_t XmlTextReader_ReadEntityReference_m2671578823 (XmlTextReader_t1420178065 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern "C"  void XmlTextReader_ReadAttributes_m3421281728 (XmlTextReader_t1420178065 * __this, bool ___isXmlDecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern "C"  void XmlTextReader_AddAttributeWithValue_m1417377746 (XmlTextReader_t1420178065 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern "C"  void XmlTextReader_IncrementAttributeToken_m3494272206 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern "C"  void XmlTextReader_IncrementAttributeValueToken_m4181670109 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern "C"  void XmlTextReader_ReadAttributeValueTokens_m573551158 (XmlTextReader_t1420178065 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern "C"  void XmlTextReader_CheckAttributeEntityReferenceWFC_m2513609180 (XmlTextReader_t1420178065 * __this, String_t* ___entName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern "C"  void XmlTextReader_ReadProcessingInstruction_m1897597429 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
extern "C"  void XmlTextReader_VerifyXmlDeclaration_m999209526 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern "C"  bool XmlTextReader_SkipWhitespaceInString_m1605432697 (XmlTextReader_t1420178065 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern "C"  void XmlTextReader_ParseAttributeFromString_m1612335627 (XmlTextReader_t1420178065 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m2406548386 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern "C"  void XmlTextReader_ReadDeclaration_m2173369010 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern "C"  void XmlTextReader_ReadComment_m1988240765 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern "C"  void XmlTextReader_ReadCDATA_m2780311845 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern "C"  void XmlTextReader_ReadDoctypeDecl_m2456818024 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C"  DTDObjectModel_t281012916 * XmlTextReader_GenerateDTDObjectModel_m290090944 (XmlTextReader_t1420178065 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
extern "C"  DTDObjectModel_t281012916 * XmlTextReader_GenerateDTDObjectModel_m3438801858 (XmlTextReader_t1420178065 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C"  int32_t XmlTextReader_get_State_m1221656880 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C"  int32_t XmlTextReader_ReadValueChar_m1926665683 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C"  void XmlTextReader_ExpectAndAppend_m3416537626 (XmlTextReader_t1420178065 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern "C"  void XmlTextReader_ReadInternalSubset_m3213716603 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern "C"  String_t* XmlTextReader_ReadSystemLiteral_m460115898 (XmlTextReader_t1420178065 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern "C"  String_t* XmlTextReader_ReadPubidLiteral_m3207551706 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C"  String_t* XmlTextReader_ReadName_m3307626912 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern "C"  String_t* XmlTextReader_ReadName_m514576082 (XmlTextReader_t1420178065 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern "C"  void XmlTextReader_Expect_m1081872860 (XmlTextReader_t1420178065 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern "C"  void XmlTextReader_Expect_m3140851689 (XmlTextReader_t1420178065 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
extern "C"  void XmlTextReader_ExpectAfterWhitespace_m1269396763 (XmlTextReader_t1420178065 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C"  bool XmlTextReader_SkipWhitespace_m4256246928 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern "C"  bool XmlTextReader_ReadWhitespace_m1890458825 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlTextReader_ReadCharsInternal_m3016882953 (XmlTextReader_t1420178065 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern "C"  bool XmlTextReader_ReadUntilEndTag_m1571388585 (XmlTextReader_t1420178065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
