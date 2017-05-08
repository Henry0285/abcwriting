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

// System.Xml.XmlEntity
struct XmlEntity_t665655416;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3088788382;
// System.Xml.XmlNode
struct XmlNode_t2483504525;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "System_Xml_System_Xml_XmlLinkedNode3088788382.h"
#include "System_Xml_System_Xml_XmlNodeType1277652749.h"

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntity__ctor_m3002803609 (XmlEntity_t665655416 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t3951480190 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t3088788382 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m1685452406 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1139812913 (XmlEntity_t665655416 * __this, XmlLinkedNode_t3088788382 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C"  String_t* XmlEntity_get_BaseURI_m3938178570 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C"  String_t* XmlEntity_get_InnerText_m4233639068 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C"  bool XmlEntity_get_IsReadOnly_m3029306666 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C"  String_t* XmlEntity_get_LocalName_m3963838453 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C"  String_t* XmlEntity_get_Name_m746421556 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C"  int32_t XmlEntity_get_NodeType_m2693198054 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C"  String_t* XmlEntity_get_SystemId_m98806619 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlEntity_CloneNode_m740586513 (XmlEntity_t665655416 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C"  void XmlEntity_SetEntityContent_m1560401715 (XmlEntity_t665655416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
