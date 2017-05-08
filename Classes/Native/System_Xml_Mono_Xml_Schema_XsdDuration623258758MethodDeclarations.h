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

// Mono.Xml.Schema.XsdDuration
struct XsdDuration_t623258758;
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

// System.Void Mono.Xml.Schema.XsdDuration::.ctor()
extern "C"  void XsdDuration__ctor_m3647457165 (XsdDuration_t623258758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDuration::get_AllowedFacets()
extern "C"  int32_t XsdDuration_get_AllowedFacets_m1672069349 (XsdDuration_t623258758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDuration::get_TokenizedType()
extern "C"  int32_t XsdDuration_get_TokenizedType_m3497966700 (XsdDuration_t623258758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDuration::get_TypeCode()
extern "C"  int32_t XsdDuration_get_TypeCode_m3979477773 (XsdDuration_t623258758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdDuration::get_ValueType()
extern "C"  Type_t * XsdDuration_get_ValueType_m1252401019 (XsdDuration_t623258758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDuration::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdDuration_ParseValue_m2253149565 (XsdDuration_t623258758 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDuration::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4028081426 * XsdDuration_ParseValueType_m2853719483 (XsdDuration_t623258758 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDuration::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDuration_Compare_m1168374945 (XsdDuration_t623258758 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
