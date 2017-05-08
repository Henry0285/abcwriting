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

// System.Xml.XmlComment
struct XmlComment_t1674867736;
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

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlComment__ctor_m1913474319 (XmlComment_t1674867736 * __this, String_t* ___comment, XmlDocument_t3951480190 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
extern "C"  String_t* XmlComment_get_LocalName_m1522051341 (XmlComment_t1674867736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
extern "C"  String_t* XmlComment_get_Name_m3302664090 (XmlComment_t1674867736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
extern "C"  int32_t XmlComment_get_NodeType_m4077976802 (XmlComment_t1674867736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlComment_CloneNode_m3633446433 (XmlComment_t1674867736 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
