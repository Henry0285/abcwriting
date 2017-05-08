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

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t1275842817;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t375788737;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t1332608396;
// System.Object
struct Il2CppObject;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t343658524;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1637269184;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t536917045;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t2759894857;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry375788737.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField1332608396.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType343658524.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdKeyEntryField__ctor_m2530912833 (XsdKeyEntryField_t1275842817 * __this, XsdKeyEntry_t375788737 * ___entry, XsdIdentityField_t1332608396 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  bool XsdKeyEntryField_SetIdentityField_m716047290 (XsdKeyEntryField_t1275842817 * __this, Il2CppObject * ___identity, bool ___isXsiNil, XsdAnySimpleType_t343658524 * ___type, int32_t ___depth, Il2CppObject * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
extern "C"  XsdIdentityPath_t536917045 * XsdKeyEntryField_Matches_m4154030365 (XsdKeyEntryField_t1275842817 * __this, bool ___matchesAttr, Il2CppObject * ___sender, XmlNameTable_t1855692664 * ___nameTable, ArrayList_t1468494371 * ___qnameStack, String_t* ___sourceUri, Il2CppObject * ___schemaType, Il2CppObject * ___nsResolver, Il2CppObject * ___lineInfo, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Il2CppObject * ___attrValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
extern "C"  void XsdKeyEntryField_FillAttributeFieldValue_m1920739722 (XsdKeyEntryField_t1275842817 * __this, Il2CppObject * ___sender, XmlNameTable_t1855692664 * ___nameTable, String_t* ___sourceUri, Il2CppObject * ___schemaType, Il2CppObject * ___nsResolver, Il2CppObject * ___identity, Il2CppObject * ___lineInfo, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
