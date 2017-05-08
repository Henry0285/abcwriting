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

// System.Xml.Schema.XmlSchemaAppInfo
struct XmlSchemaAppInfo_t2714456302;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t2481830304;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"

// System.Void System.Xml.Schema.XmlSchemaAppInfo::.ctor()
extern "C"  void XmlSchemaAppInfo__ctor_m2373867453 (XmlSchemaAppInfo_t2714456302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::get_Markup()
extern "C"  XmlNodeU5BU5D_t2481830304* XmlSchemaAppInfo_get_Markup_m1968874398 (XmlSchemaAppInfo_t2714456302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAppInfo::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaAppInfo_set_Markup_m212581595 (XmlSchemaAppInfo_t2714456302 * __this, XmlNodeU5BU5D_t2481830304* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAppInfo System.Xml.Schema.XmlSchemaAppInfo::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaAppInfo_t2714456302 * XmlSchemaAppInfo_Read_m1918977215 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
