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

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t2930300091;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t2886391785;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3166556445;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs3166556445.h"

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m4096888748 (XmlSchemaCollection_t2930300091 * __this, XmlNameTable_t1855692664 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchemaCollection__ctor_m1133926657 (XmlSchemaCollection_t2930300091 * __this, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m1888700565 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m1625227336 (XmlSchemaCollection_t2930300091 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m423318334 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m2059563369 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m4076677278 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t529105423 * XmlSchemaCollection_get_SchemaSet_m2073125170 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C"  int32_t XmlSchemaCollection_get_Count_m2440745306 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C"  XmlSchemaCollectionEnumerator_t2886391785 * XmlSchemaCollection_GetEnumerator_m1019785948 (XmlSchemaCollection_t2930300091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlSchemaCollection_OnValidationError_m706555727 (XmlSchemaCollection_t2930300091 * __this, Il2CppObject * ___o, ValidationEventArgs_t3166556445 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
