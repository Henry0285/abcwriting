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

// System.Xml.Serialization.TypeData
struct TypeData_t307677476;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t944111496;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.InvalidOperationException
struct InvalidOperationException_t3683355786;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Serialization_TypeData307677476.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaPatternFacet944111496.h"
#include "System_Xml_System_Xml_Serialization_SchemaTypes3923800272.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
extern "C"  void TypeData__ctor_m4034673199 (TypeData_t307677476 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
extern "C"  void TypeData__ctor_m354683401 (TypeData_t307677476 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t307677476 * ___mappedType, XmlSchemaPatternFacet_t944111496 * ___facet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
extern "C"  void TypeData__cctor_m1592059906 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
extern "C"  String_t* TypeData_get_XmlType_m411105744 (TypeData_t307677476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
extern "C"  Type_t * TypeData_get_Type_m323444240 (TypeData_t307677476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
extern "C"  int32_t TypeData_get_SchemaType_m999481546 (TypeData_t307677476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
extern "C"  bool TypeData_get_IsListType_m2562875060 (TypeData_t307677476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
extern "C"  void TypeData_set_IsNullable_m2778821222 (TypeData_t307677476 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
extern "C"  TypeData_t307677476 * TypeData_get_ListItemTypeData_m2213226752 (TypeData_t307677476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
extern "C"  Type_t * TypeData_get_ListItemType_m2036261815 (TypeData_t307677476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
extern "C"  PropertyInfo_t * TypeData_GetIndexerProperty_m117597792 (Il2CppObject * __this /* static, unused */, Type_t * ___collectionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
extern "C"  InvalidOperationException_t3683355786 * TypeData_CreateMissingAddMethodException_m2791751213 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
extern "C"  Type_t * TypeData_GetGenericListItemType_m624651576 (TypeData_t307677476 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
