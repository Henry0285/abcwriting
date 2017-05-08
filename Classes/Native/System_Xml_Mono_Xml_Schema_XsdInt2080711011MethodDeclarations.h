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

// Mono.Xml.Schema.XsdInt
struct XsdInt_t2080711011;
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

// System.Void Mono.Xml.Schema.XsdInt::.ctor()
extern "C"  void XsdInt__ctor_m3428494266 (XsdInt_t2080711011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdInt::get_TypeCode()
extern "C"  int32_t XsdInt_get_TypeCode_m684640354 (XsdInt_t2080711011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdInt::get_ValueType()
extern "C"  Type_t * XsdInt_get_ValueType_m2835769870 (XsdInt_t2080711011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdInt::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdInt_ParseValue_m2376990646 (XsdInt_t2080711011 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdInt::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4028081426 * XsdInt_ParseValueType_m3483879048 (XsdInt_t2080711011 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdInt::Compare(System.Object,System.Object)
extern "C"  int32_t XsdInt_Compare_m2360929220 (XsdInt_t2080711011 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
