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

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t461153458;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t2364217941;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny2364217941.h"
#include "System_Xml_Mono_Xml_Schema_XsdWildcard461153458.h"

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XsdWildcard__ctor_m3788857523 (XsdWildcard_t461153458 * __this, XmlSchemaObject_t1566397180 * ___wildcard, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
extern "C"  void XsdWildcard_Reset_m4183508512 (XsdWildcard_t461153458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_Compile_m2499551977 (XsdWildcard_t461153458 * __this, String_t* ___nss, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XsdWildcard_ExamineAttributeWildcardIntersection_m1703751471 (XsdWildcard_t461153458 * __this, XmlSchemaAny_t2364217941 * ___other, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m2534680641 (XsdWildcard_t461153458 * __this, String_t* ___ns, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_ValidateWildcardSubset_m537457682 (XsdWildcard_t461153458 * __this, XsdWildcard_t461153458 * ___other, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardSubset_m2578406799 (XsdWildcard_t461153458 * __this, XsdWildcard_t461153458 * ___other, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
