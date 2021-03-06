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

// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t3742615780;
// System.String
struct String_t;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1949889482;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4140748649;
// System.Xml.XmlException
struct XmlException_t1578947676;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlSpace2881005573.h"
#include "System_Xml_System_Xml_XmlNodeType1277652749.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2906609633 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C"  void XmlReader_System_IDisposable_Dispose_m1699080386 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C"  XmlReaderBinarySupport_t3742615780 * XmlReader_get_Binary_m4267712960 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C"  bool XmlReader_get_CanResolveEntity_m2249999087 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C"  bool XmlReader_get_HasAttributes_m2349560689 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C"  bool XmlReader_get_IsDefault_m1510950801 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.Int32)
extern "C"  String_t* XmlReader_get_Item_m1391114273 (XmlReader_t1154388064 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C"  String_t* XmlReader_get_Item_m262748378 (XmlReader_t1154388064 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlReader_get_Item_m4288865690 (XmlReader_t1154388064 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Name()
extern "C"  String_t* XmlReader_get_Name_m2814912812 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlReader_get_SchemaInfo_m2886262078 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t4140748649 * XmlReader_get_Settings_m72227715 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_XmlLang()
extern "C"  String_t* XmlReader_get_XmlLang_m832483730 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C"  int32_t XmlReader_get_XmlSpace_m4205984803 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C"  void XmlReader_Dispose_m1559080013 (XmlReader_t1154388064 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C"  void XmlReader_MoveToAttribute_m92945686 (XmlReader_t1154388064 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C"  bool XmlReader_IsContent_m1996106507 (XmlReader_t1154388064 * __this, int32_t ___nodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C"  int32_t XmlReader_MoveToContent_m1469314666 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadElementString()
extern "C"  String_t* XmlReader_ReadElementString_m1037752001 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C"  void XmlReader_ReadEndElement_m2186922488 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadInnerXml()
extern "C"  String_t* XmlReader_ReadInnerXml_m3777272761 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C"  String_t* XmlReader_ReadOuterXml_m3008583754 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C"  void XmlReader_ReadStartElement_m2262733889 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement(System.String,System.String)
extern "C"  void XmlReader_ReadStartElement_m3043702433 (XmlReader_t1154388064 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C"  String_t* XmlReader_ReadString_m1231088435 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m1833707716 (XmlReader_t1154388064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C"  XmlException_t1578947676 * XmlReader_XmlError_m2086844343 (XmlReader_t1154388064 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
