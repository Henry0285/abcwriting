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

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t267274907;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1893163649;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute1893163649.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C"  void XmlSchemaSimpleContentExtension__ctor_m3558938004 (XmlSchemaSimpleContentExtension_t267274907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m1000074508 (XmlSchemaSimpleContentExtension_t267274907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t3000072622 * XmlSchemaSimpleContentExtension_get_Attributes_m3508944345 (XmlSchemaSimpleContentExtension_t267274907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t1893163649 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m3303977301 (XmlSchemaSimpleContentExtension_t267274907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaSimpleContentExtension_set_AnyAttribute_m812745402 (XmlSchemaSimpleContentExtension_t267274907 * __this, XmlSchemaAnyAttribute_t1893163649 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaSimpleContentExtension_get_IsExtension_m715405004 (XmlSchemaSimpleContentExtension_t267274907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleContentExtension_SetParent_m1140680302 (XmlSchemaSimpleContentExtension_t267274907 * __this, XmlSchemaObject_t1566397180 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Compile_m2724209778 (XmlSchemaSimpleContentExtension_t267274907 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m3864964643 (XmlSchemaSimpleContentExtension_t267274907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Validate_m764841531 (XmlSchemaSimpleContentExtension_t267274907 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleContentExtension_t267274907 * XmlSchemaSimpleContentExtension_Read_m2772444626 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
