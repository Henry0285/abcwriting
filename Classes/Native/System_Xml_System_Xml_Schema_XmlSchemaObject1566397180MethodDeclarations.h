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

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t1953246467;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Exception
struct Exception_t1145979430;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "mscorlib_System_Guid756539922.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3333075425.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
extern "C"  void XmlSchemaObject__ctor_m110040787 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
extern "C"  int32_t XmlSchemaObject_get_LineNumber_m2293382757 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
extern "C"  void XmlSchemaObject_set_LineNumber_m3758679534 (XmlSchemaObject_t1566397180 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
extern "C"  int32_t XmlSchemaObject_get_LinePosition_m1180130291 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
extern "C"  void XmlSchemaObject_set_LinePosition_m264600708 (XmlSchemaObject_t1566397180 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
extern "C"  String_t* XmlSchemaObject_get_SourceUri_m2019817266 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
extern "C"  void XmlSchemaObject_set_SourceUri_m477478239 (XmlSchemaObject_t1566397180 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
extern "C"  XmlSchemaObject_t1566397180 * XmlSchemaObject_get_Parent_m1299922163 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObject_set_Parent_m2372943326 (XmlSchemaObject_t1566397180 * __this, XmlSchemaObject_t1566397180 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
extern "C"  XmlSchema_t2944277931 * XmlSchemaObject_get_AncestorSchema_m85040254 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObject_SetParent_m953475227 (XmlSchemaObject_t1566397180 * __this, XmlSchemaObject_t1566397180 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
extern "C"  XmlSerializerNamespaces_t1953246467 * XmlSchemaObject_get_Namespaces_m1341432746 (XmlSchemaObject_t1566397180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  void XmlSchemaObject_error_m1614806125 (XmlSchemaObject_t1566397180 * __this, ValidationEventHandler_t477176618 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  void XmlSchemaObject_warn_m2744717543 (XmlSchemaObject_t1566397180 * __this, ValidationEventHandler_t477176618 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
extern "C"  void XmlSchemaObject_error_m2270810805 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t477176618 * ___handle, String_t* ___message, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C"  void XmlSchemaObject_error_m3095202773 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t477176618 * ___handle, String_t* ___message, Exception_t1145979430 * ___innerException, XmlSchemaObject_t1566397180 * ___xsobj, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C"  void XmlSchemaObject_warn_m3962974443 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t477176618 * ___handle, String_t* ___message, Exception_t1145979430 * ___innerException, XmlSchemaObject_t1566397180 * ___xsobj, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaObject_Compile_m2939755731 (XmlSchemaObject_t1566397180 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaObject_Validate_m4187624220 (XmlSchemaObject_t1566397180 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
extern "C"  bool XmlSchemaObject_IsValidated_m516581307 (XmlSchemaObject_t1566397180 * __this, Guid_t756539922  ___validationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaObject_CopyInfo_m2896429323 (XmlSchemaObject_t1566397180 * __this, XmlSchemaParticle_t3333075425 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
