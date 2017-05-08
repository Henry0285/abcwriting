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

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t2634114609;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t890085650;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t2917705191;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t536917045;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityConst890085650.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable__ctor_m3808547814 (XsdKeyTable_t2634114609 * __this, XmlSchemaIdentityConstraint_t890085650 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C"  XmlSchemaIdentityConstraint_t890085650 * XsdKeyTable_get_SourceSchemaIdentity_m2469763964 (XsdKeyTable_t2634114609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C"  XsdIdentitySelector_t2917705191 * XsdKeyTable_get_Selector_m2004045656 (XsdKeyTable_t2634114609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable_Reset_m2051768471 (XsdKeyTable_t2634114609 * __this, XmlSchemaIdentityConstraint_t890085650 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C"  XsdIdentityPath_t536917045 * XsdKeyTable_SelectorMatches_m4009879112 (XsdKeyTable_t2634114609 * __this, ArrayList_t1468494371 * ___qnameStack, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
