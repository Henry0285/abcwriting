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

// System.Xml.XmlNode
struct XmlNode_t2483504525;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t316354535;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t1452315167;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1949889482;
// System.Xml.XmlElement
struct XmlElement_t2049349347;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3654972885;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlSpace2881005573.h"
#include "System_Xml_System_Xml_XmlNode2483504525.h"
#include "System_Xml_System_Xml_XmlElement2049349347.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlNode__ctor_m3522709466 (XmlNode_t2483504525 * __this, XmlDocument_t3951480190 * ___ownerDocument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C"  void XmlNode__cctor_m1662095515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C"  Il2CppObject * XmlNode_System_ICloneable_Clone_m102805311 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlNode_System_Collections_IEnumerable_GetEnumerator_m4193915221 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C"  XmlAttributeCollection_t316354535 * XmlNode_get_Attributes_m1660841928 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C"  String_t* XmlNode_get_BaseURI_m2619224759 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C"  String_t* XmlNode_get_ChildrenBaseURI_m430088738 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C"  XmlNodeList_t1452315167 * XmlNode_get_ChildNodes_m3902468502 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C"  XmlNode_t2483504525 * XmlNode_get_FirstChild_m1915101059 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C"  bool XmlNode_get_HasChildNodes_m3186196548 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C"  String_t* XmlNode_get_InnerText_m2632227395 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C"  void XmlNode_AppendChildValues_m420033304 (XmlNode_t2483504525 * __this, StringBuilder_t2393427626 ** ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C"  bool XmlNode_get_IsReadOnly_m1952729373 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C"  XmlNode_t2483504525 * XmlNode_get_LastChild_m4275883203 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C"  String_t* XmlNode_get_NamespaceURI_m646755417 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C"  XmlNode_t2483504525 * XmlNode_get_NextSibling_m1350294936 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C"  XmlDocument_t3951480190 * XmlNode_get_OwnerDocument_m402760350 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t2483504525 * XmlNode_get_ParentNode_m1570967687 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C"  String_t* XmlNode_get_Prefix_m2751268896 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Prefix(System.String)
extern "C"  void XmlNode_set_Prefix_m1344523091 (XmlNode_t2483504525 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C"  XmlNode_t2483504525 * XmlNode_get_PreviousSibling_m399228560 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C"  String_t* XmlNode_get_Value_m1387005599 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C"  void XmlNode_set_Value_m1012159498 (XmlNode_t2483504525 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C"  String_t* XmlNode_get_XmlLang_m1492819013 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C"  int32_t XmlNode_get_XmlSpace_m2514363902 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNode::get_SchemaInfo()
extern "C"  Il2CppObject * XmlNode_get_SchemaInfo_m19434653 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlNode_set_SchemaInfo_m3079673386 (XmlNode_t2483504525 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t2483504525 * XmlNode_AppendChild_m2911115851 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlNode_AppendChild_m3112763946 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___newChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C"  XmlNode_t2483504525 * XmlNode_Clone_m393058397 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  Il2CppObject * XmlNode_GetEnumerator_m2088716184 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t2483504525 * XmlNode_InsertBefore_m1592303926 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___newChild, XmlNode_t2483504525 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C"  bool XmlNode_IsAncestor_m2915269424 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlNode_InsertBefore_m4219672004 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___newChild, XmlNode_t2483504525 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlNode_CheckNodeInsertion_m3528404273 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___newChild, XmlNode_t2483504525 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C"  void XmlNode_RemoveAll_m1073525119 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t2483504525 * XmlNode_RemoveChild_m3101399627 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___oldChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C"  void XmlNode_CheckNodeRemoval_m1429191652 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t2483504525 * XmlNode_RemoveChild_m4217957230 (XmlNode_t2483504525 * __this, XmlNode_t2483504525 * ___oldChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C"  XmlElement_t2049349347 * XmlNode_get_AttributeOwnerElement_m2428287616 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C"  void XmlNode_set_AttributeOwnerElement_m1966514041 (XmlNode_t2483504525 * __this, XmlElement_t2049349347 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C"  XmlNamespaceManager_t3654972885 * XmlNode_ConstructNamespaceManager_m2326634343 (XmlNode_t2483504525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
