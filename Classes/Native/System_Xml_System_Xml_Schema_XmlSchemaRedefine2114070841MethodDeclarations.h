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

// System.Xml.Schema.XmlSchemaRedefine
struct XmlSchemaRedefine_t2114070841;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"

// System.Void System.Xml.Schema.XmlSchemaRedefine::.ctor()
extern "C"  void XmlSchemaRedefine__ctor_m3443064582 (XmlSchemaRedefine_t2114070841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::get_Items()
extern "C"  XmlSchemaObjectCollection_t3000072622 * XmlSchemaRedefine_get_Items_m118653912 (XmlSchemaRedefine_t2114070841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaRedefine::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaRedefine_SetParent_m2685823132 (XmlSchemaRedefine_t2114070841 * __this, XmlSchemaObject_t1566397180 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaRedefine System.Xml.Schema.XmlSchemaRedefine::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaRedefine_t2114070841 * XmlSchemaRedefine_Read_m3351980082 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
