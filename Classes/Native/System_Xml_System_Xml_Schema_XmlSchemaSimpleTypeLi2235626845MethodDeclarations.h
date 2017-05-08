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

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct XmlSchemaSimpleTypeList_t2235626845;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName3059647944.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType2262508413.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::.ctor()
extern "C"  void XmlSchemaSimpleTypeList__ctor_m2875969122 (XmlSchemaSimpleTypeList_t2235626845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemTypeName()
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaSimpleTypeList_get_ItemTypeName_m1679680972 (XmlSchemaSimpleTypeList_t2235626845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemTypeName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaSimpleTypeList_set_ItemTypeName_m1059373933 (XmlSchemaSimpleTypeList_t2235626845 * __this, XmlQualifiedName_t3059647944 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemType()
extern "C"  XmlSchemaSimpleType_t2262508413 * XmlSchemaSimpleTypeList_get_ItemType_m484980304 (XmlSchemaSimpleTypeList_t2235626845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemType(System.Xml.Schema.XmlSchemaSimpleType)
extern "C"  void XmlSchemaSimpleTypeList_set_ItemType_m2977295439 (XmlSchemaSimpleTypeList_t2235626845 * __this, XmlSchemaSimpleType_t2262508413 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeList::get_ValidatedListItemType()
extern "C"  Il2CppObject * XmlSchemaSimpleTypeList_get_ValidatedListItemType_m3791953871 (XmlSchemaSimpleTypeList_t2235626845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeList_SetParent_m720613092 (XmlSchemaSimpleTypeList_t2235626845 * __this, XmlSchemaObject_t1566397180 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeList_Compile_m3808014952 (XmlSchemaSimpleTypeList_t2235626845 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeList_Validate_m1242929085 (XmlSchemaSimpleTypeList_t2235626845 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeList System.Xml.Schema.XmlSchemaSimpleTypeList::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeList_t2235626845 * XmlSchemaSimpleTypeList_Read_m768537746 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
