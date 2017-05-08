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

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t1445963912;
// System.String
struct String_t;
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

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
extern "C"  void XmlSchemaImport__ctor_m4024590631 (XmlSchemaImport_t1445963912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
extern "C"  String_t* XmlSchemaImport_get_Namespace_m4085014218 (XmlSchemaImport_t1445963912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaImport_set_Annotation_m2100583617 (XmlSchemaImport_t1445963912 * __this, XmlSchemaAnnotation_t991420294 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaImport_t1445963912 * XmlSchemaImport_Read_m110282802 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
