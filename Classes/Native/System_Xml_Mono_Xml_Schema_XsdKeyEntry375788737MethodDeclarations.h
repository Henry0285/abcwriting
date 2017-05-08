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

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t375788737;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t2634114609;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1637269184;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t2759894857;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable2634114609.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry375788737.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry__ctor_m4147401104 (XsdKeyEntry_t375788737 * __this, XsdKeyTable_t2634114609 * ___keyseq, int32_t ___depth, Il2CppObject * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
extern "C"  bool XsdKeyEntry_get_KeyFound_m3776318906 (XsdKeyEntry_t375788737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry_Init_m2518284972 (XsdKeyEntry_t375788737 * __this, XsdKeyTable_t2634114609 * ___keyseq, int32_t ___depth, Il2CppObject * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  bool XsdKeyEntry_CompareIdentity_m4270597514 (XsdKeyEntry_t375788737 * __this, XsdKeyEntry_t375788737 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
extern "C"  void XsdKeyEntry_ProcessMatch_m55851610 (XsdKeyEntry_t375788737 * __this, bool ___isAttribute, ArrayList_t1468494371 * ___qnameStack, Il2CppObject * ___sender, XmlNameTable_t1855692664 * ___nameTable, String_t* ___sourceUri, Il2CppObject * ___schemaType, Il2CppObject * ___nsResolver, Il2CppObject * ___li, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Il2CppObject * ___attrValue, bool ___isXsiNil, ArrayList_t1468494371 * ___currentKeyFieldConsumers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
