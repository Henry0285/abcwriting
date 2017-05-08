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

// Mono.Xml.Schema.XsdTime
struct XsdTime_t1469548469;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t2759894857;
// System.ValueType
struct ValueType_t4028081426;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet1787722659.h"
#include "System_Xml_System_Xml_XmlTokenizedType1342489730.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode809714333.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering1726787834.h"
#include "mscorlib_System_Object707969140.h"

// System.Void Mono.Xml.Schema.XsdTime::.ctor()
extern "C"  void XsdTime__ctor_m3005363826 (XsdTime_t1469548469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdTime::.cctor()
extern "C"  void XsdTime__cctor_m3775679045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdTime::get_AllowedFacets()
extern "C"  int32_t XsdTime_get_AllowedFacets_m1702322632 (XsdTime_t1469548469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdTime::get_TokenizedType()
extern "C"  int32_t XsdTime_get_TokenizedType_m3071161557 (XsdTime_t1469548469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdTime::get_TypeCode()
extern "C"  int32_t XsdTime_get_TypeCode_m2749433522 (XsdTime_t1469548469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdTime::get_ValueType()
extern "C"  Type_t * XsdTime_get_ValueType_m1898321738 (XsdTime_t1469548469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdTime::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdTime_ParseValue_m4258634680 (XsdTime_t1469548469 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdTime::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4028081426 * XsdTime_ParseValueType_m935523522 (XsdTime_t1469548469 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdTime::Compare(System.Object,System.Object)
extern "C"  int32_t XsdTime_Compare_m1476083822 (XsdTime_t1469548469 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
