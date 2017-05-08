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

// System.Xml.XmlDeclaration
struct XmlDeclaration_t1980134785;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.Xml.XmlNode
struct XmlNode_t2483504525;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "System_Xml_System_Xml_XmlNodeType1277652749.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDeclaration__ctor_m3613373532 (XmlDeclaration_t1980134785 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t3951480190 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C"  String_t* XmlDeclaration_get_Encoding_m2665664307 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C"  void XmlDeclaration_set_Encoding_m3669560264 (XmlDeclaration_t1980134785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C"  String_t* XmlDeclaration_get_InnerText_m1783541375 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C"  String_t* XmlDeclaration_get_LocalName_m1424768510 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C"  String_t* XmlDeclaration_get_Name_m660448179 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C"  int32_t XmlDeclaration_get_NodeType_m2750696771 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C"  String_t* XmlDeclaration_get_Standalone_m2409785005 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C"  void XmlDeclaration_set_Standalone_m3263531570 (XmlDeclaration_t1980134785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C"  String_t* XmlDeclaration_get_Value_m730181699 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C"  void XmlDeclaration_set_Value_m555174288 (XmlDeclaration_t1980134785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C"  String_t* XmlDeclaration_get_Version_m1438414526 (XmlDeclaration_t1980134785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlDeclaration_CloneNode_m1712616536 (XmlDeclaration_t1980134785 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlDeclaration_SkipWhitespace_m2134931711 (XmlDeclaration_t1980134785 * __this, String_t* ___input, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C"  void XmlDeclaration_ParseInput_m1895505105 (XmlDeclaration_t1980134785 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
