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

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3088788382;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.Xml.XmlNode
struct XmlNode_t2483504525;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "System_Xml_System_Xml_XmlLinkedNode3088788382.h"

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlLinkedNode__ctor_m1176905295 (XmlLinkedNode_t3088788382 * __this, XmlDocument_t3951480190 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C"  bool XmlLinkedNode_get_IsRooted_m819382717 (XmlLinkedNode_t3088788382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C"  XmlNode_t2483504525 * XmlLinkedNode_get_NextSibling_m1190170973 (XmlLinkedNode_t3088788382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C"  XmlLinkedNode_t3088788382 * XmlLinkedNode_get_NextLinkedSibling_m2219349313 (XmlLinkedNode_t3088788382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C"  void XmlLinkedNode_set_NextLinkedSibling_m2466582404 (XmlLinkedNode_t3088788382 * __this, XmlLinkedNode_t3088788382 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C"  XmlNode_t2483504525 * XmlLinkedNode_get_PreviousSibling_m2307432527 (XmlLinkedNode_t3088788382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
