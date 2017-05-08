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

// Mono.Xml.Schema.XsdLong
struct XsdLong_t871657706;
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
#include "System_Xml_System_Xml_Schema_XmlTypeCode809714333.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering1726787834.h"
#include "mscorlib_System_Object707969140.h"

// System.Void Mono.Xml.Schema.XsdLong::.ctor()
extern "C"  void XsdLong__ctor_m112802409 (XsdLong_t871657706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdLong::get_TypeCode()
extern "C"  int32_t XsdLong_get_TypeCode_m2861508465 (XsdLong_t871657706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdLong::get_ValueType()
extern "C"  Type_t * XsdLong_get_ValueType_m1811779899 (XsdLong_t871657706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdLong::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdLong_ParseValue_m1304364417 (XsdLong_t871657706 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdLong::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4028081426 * XsdLong_ParseValueType_m4014747475 (XsdLong_t871657706 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdLong::Compare(System.Object,System.Object)
extern "C"  int32_t XsdLong_Compare_m365645845 (XsdLong_t871657706 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
