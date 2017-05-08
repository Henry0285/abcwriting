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

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2397441035;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2331747099;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1943985395.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode809714333.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C"  void XmlSchemaType__ctor_m583247436 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaType::get_Name()
extern "C"  String_t* XmlSchemaType_get_Name_m1004528665 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Name(System.String)
extern "C"  void XmlSchemaType_set_Name_m3696108894 (XmlSchemaType_t2397441035 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_Final()
extern "C"  int32_t XmlSchemaType_get_Final_m1796256849 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XmlSchemaType_set_Final_m2621634982 (XmlSchemaType_t2397441035 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaType_get_QualifiedName_m1248817237 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_FinalResolved()
extern "C"  int32_t XmlSchemaType_get_FinalResolved_m1704797041 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaType::get_BaseSchemaType()
extern "C"  Il2CppObject * XmlSchemaType_get_BaseSchemaType_m772626332 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::get_BaseXmlSchemaType()
extern "C"  XmlSchemaType_t2397441035 * XmlSchemaType_get_BaseXmlSchemaType_m3023716498 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_DerivedBy()
extern "C"  int32_t XmlSchemaType_get_DerivedBy_m948780707 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
extern "C"  XmlSchemaDatatype_t2331747099 * XmlSchemaType_get_Datatype_m250734647 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::get_IsMixed()
extern "C"  bool XmlSchemaType_get_IsMixed_m2006177430 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaSimpleType_t2262508413 * XmlSchemaType_GetBuiltInSimpleType_m588350833 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t3059647944 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
extern "C"  XmlSchemaSimpleType_t2262508413 * XmlSchemaType_GetBuiltInSimpleType_m1588842366 (Il2CppObject * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::ValidateRecursionCheck()
extern "C"  bool XmlSchemaType_ValidateRecursionCheck_m533149418 (XmlSchemaType_t2397441035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
