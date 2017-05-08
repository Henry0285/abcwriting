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

// System.Xml.XmlDocumentType
struct XmlDocumentType_t3380073174;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t1479692862;
// System.Xml.XmlNode
struct XmlNode_t2483504525;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "System_Xml_System_Xml_XmlNodeType1277652749.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m2953202689 (XmlDocumentType_t3380073174 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t3951480190 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m724609597 (XmlDocumentType_t3380073174 * __this, DTDObjectModel_t281012916 * ___dtd, XmlDocument_t3951480190 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C"  void XmlDocumentType_ImportFromDTD_m358818970 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C"  DTDObjectModel_t281012916 * XmlDocumentType_get_DTD_m376130801 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C"  XmlNamedNodeMap_t1479692862 * XmlDocumentType_get_Entities_m2541368360 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C"  String_t* XmlDocumentType_get_InternalSubset_m2242322466 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C"  bool XmlDocumentType_get_IsReadOnly_m2761044508 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C"  String_t* XmlDocumentType_get_LocalName_m2658721173 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C"  String_t* XmlDocumentType_get_Name_m1997601270 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C"  int32_t XmlDocumentType_get_NodeType_m609032580 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C"  String_t* XmlDocumentType_get_PublicId_m4062141671 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C"  String_t* XmlDocumentType_get_SystemId_m4196968939 (XmlDocumentType_t3380073174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlDocumentType_CloneNode_m3684399769 (XmlDocumentType_t3380073174 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
