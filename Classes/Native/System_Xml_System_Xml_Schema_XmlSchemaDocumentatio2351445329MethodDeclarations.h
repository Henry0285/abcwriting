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

// System.Xml.Schema.XmlSchemaDocumentation
struct XmlSchemaDocumentation_t2351445329;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t2481830304;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"

// System.Void System.Xml.Schema.XmlSchemaDocumentation::.ctor()
extern "C"  void XmlSchemaDocumentation__ctor_m197493936 (XmlSchemaDocumentation_t2351445329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::get_Markup()
extern "C"  XmlNodeU5BU5D_t2481830304* XmlSchemaDocumentation_get_Markup_m1710321093 (XmlSchemaDocumentation_t2351445329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDocumentation::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaDocumentation_set_Markup_m3614424228 (XmlSchemaDocumentation_t2351445329 * __this, XmlNodeU5BU5D_t2481830304* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDocumentation System.Xml.Schema.XmlSchemaDocumentation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaDocumentation_t2351445329 * XmlSchemaDocumentation_Read_m595696691 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
