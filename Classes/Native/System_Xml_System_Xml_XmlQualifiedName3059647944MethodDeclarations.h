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

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t2759894857;
// System.Xml.XmlReader
struct XmlReader_t1154388064;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"

// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C"  void XmlQualifiedName__ctor_m2971430653 (XmlQualifiedName_t3059647944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C"  void XmlQualifiedName__ctor_m564961887 (XmlQualifiedName_t3059647944 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C"  void XmlQualifiedName__ctor_m968458525 (XmlQualifiedName_t3059647944 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C"  void XmlQualifiedName__cctor_m2388070762 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C"  bool XmlQualifiedName_get_IsEmpty_m1497308779 (XmlQualifiedName_t3059647944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C"  String_t* XmlQualifiedName_get_Name_m4055250010 (XmlQualifiedName_t3059647944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C"  String_t* XmlQualifiedName_get_Namespace_m2734729190 (XmlQualifiedName_t3059647944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C"  bool XmlQualifiedName_Equals_m642921908 (XmlQualifiedName_t3059647944 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C"  int32_t XmlQualifiedName_GetHashCode_m3937911384 (XmlQualifiedName_t3059647944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C"  String_t* XmlQualifiedName_ToString_m3737128264 (XmlQualifiedName_t3059647944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
extern "C"  XmlQualifiedName_t3059647944 * XmlQualifiedName_Parse_m1917433227 (Il2CppObject * __this /* static, unused */, String_t* ___name, Il2CppObject * ___resolver, bool ___considerDefaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.XmlReader)
extern "C"  XmlQualifiedName_t3059647944 * XmlQualifiedName_Parse_m1181742901 (Il2CppObject * __this /* static, unused */, String_t* ___name, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Equality_m1077031473 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t3059647944 * ___a, XmlQualifiedName_t3059647944 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Inequality_m2430008908 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t3059647944 * ___a, XmlQualifiedName_t3059647944 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
