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

// System.Data.DataColumnPropertyDescriptor
struct DataColumnPropertyDescriptor_t53657477;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t2973358136;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Data.DataColumnPropertyDescriptor::.ctor(System.String,System.Int32,System.Attribute[])
extern "C"  void DataColumnPropertyDescriptor__ctor_m599245441 (DataColumnPropertyDescriptor_t53657477 * __this, String_t* ___name, int32_t ___columnIndex, AttributeU5BU5D_t2973358136* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnPropertyDescriptor::SetComponentType(System.Type)
extern "C"  void DataColumnPropertyDescriptor_SetComponentType_m2853552005 (DataColumnPropertyDescriptor_t53657477 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnPropertyDescriptor::SetPropertyType(System.Type)
extern "C"  void DataColumnPropertyDescriptor_SetPropertyType_m2716925141 (DataColumnPropertyDescriptor_t53657477 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataColumnPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * DataColumnPropertyDescriptor_get_ComponentType_m3765224057 (DataColumnPropertyDescriptor_t53657477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataColumnPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * DataColumnPropertyDescriptor_get_PropertyType_m967371321 (DataColumnPropertyDescriptor_t53657477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
