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

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1893163649;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3427168924;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProces706549897.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute1893163649.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C"  void XmlSchemaAnyAttribute__ctor_m3255879010 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_Namespace_m1930822983 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueAny_m763154870 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueLocal_m756502669 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueOther_m1035903466 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m91797544 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C"  StringCollection_t3427168924 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m2021581246 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m2028673908 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m1415155904 (XmlSchemaAnyAttribute_t1893163649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Compile_m4001469764 (XmlSchemaAnyAttribute_t1893163649 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Validate_m494848451 (XmlSchemaAnyAttribute_t1893163649 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAnyAttribute_ValidateWildcardSubset_m1770406546 (XmlSchemaAnyAttribute_t1893163649 * __this, XmlSchemaAnyAttribute_t1893163649 * ___other, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m3154725827 (XmlSchemaAnyAttribute_t1893163649 * __this, String_t* ___ns, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAnyAttribute_t1893163649 * XmlSchemaAnyAttribute_Read_m121804594 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
