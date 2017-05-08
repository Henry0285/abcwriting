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

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3424853503;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t2973358136;
// System.Collections.IList
struct IList_t2346154967;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m3663832484 (PropertyDescriptor_t3424853503 * __this, String_t* ___name, AttributeU5BU5D_t2973358136* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void PropertyDescriptor_FillAttributes_m3024986576 (PropertyDescriptor_t3424853503 * __this, Il2CppObject * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C"  bool PropertyDescriptor_Equals_m4086017300 (PropertyDescriptor_t3424853503 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C"  int32_t PropertyDescriptor_GetHashCode_m3169280040 (PropertyDescriptor_t3424853503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
