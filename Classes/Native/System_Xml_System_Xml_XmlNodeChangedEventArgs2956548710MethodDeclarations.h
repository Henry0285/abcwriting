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

// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t2956548710;
// System.Xml.XmlNode
struct XmlNode_t2483504525;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode2483504525.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlNodeChangedAction2305946605.h"

// System.Void System.Xml.XmlNodeChangedEventArgs::.ctor(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction)
extern "C"  void XmlNodeChangedEventArgs__ctor_m567919617 (XmlNodeChangedEventArgs_t2956548710 * __this, XmlNode_t2483504525 * ___node, XmlNode_t2483504525 * ___oldParent, XmlNode_t2483504525 * ___newParent, String_t* ___oldValue, String_t* ___newValue, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
