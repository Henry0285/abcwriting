﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.Schema.XsdNMToken
struct XsdNMToken_t250241920;
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
#include "System_Xml_System_Xml_XmlTokenizedType1342489730.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode809714333.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"

// System.Void Mono.Xml.Schema.XsdNMToken::.ctor()
extern "C"  void XsdNMToken__ctor_m774901231 (XsdNMToken_t250241920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNMToken::get_TokenizedType()
extern "C"  int32_t XsdNMToken_get_TokenizedType_m3139625980 (XsdNMToken_t250241920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNMToken::get_TypeCode()
extern "C"  int32_t XsdNMToken_get_TypeCode_m2809693623 (XsdNMToken_t250241920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdNMToken::get_ValueType()
extern "C"  Type_t * XsdNMToken_get_ValueType_m3950236125 (XsdNMToken_t250241920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNMToken::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdNMToken_ParseValue_m3104730199 (XsdNMToken_t250241920 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNMToken::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t4028081426 * XsdNMToken_ParseValueType_m2846359209 (XsdNMToken_t250241920 * __this, String_t* ___s, XmlNameTable_t1855692664 * ___nameTable, Il2CppObject * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
