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

// System.Xml.Schema.XmlSchemaInclude
struct XmlSchemaInclude_t993349859;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t991420294;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation991420294.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"

// System.Void System.Xml.Schema.XmlSchemaInclude::.ctor()
extern "C"  void XmlSchemaInclude__ctor_m2507466506 (XmlSchemaInclude_t993349859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaInclude::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaInclude_set_Annotation_m789528408 (XmlSchemaInclude_t993349859 * __this, XmlSchemaAnnotation_t991420294 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaInclude System.Xml.Schema.XmlSchemaInclude::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaInclude_t993349859 * XmlSchemaInclude_Read_m2387479304 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
