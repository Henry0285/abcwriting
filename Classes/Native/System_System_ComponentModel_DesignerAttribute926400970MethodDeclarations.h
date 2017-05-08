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

// System.ComponentModel.DesignerAttribute
struct DesignerAttribute_t926400970;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String)
extern "C"  void DesignerAttribute__ctor_m2876366278 (DesignerAttribute_t926400970 * __this, String_t* ___designerTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.Type)
extern "C"  void DesignerAttribute__ctor_m301030763 (DesignerAttribute_t926400970 * __this, String_t* ___designerTypeName, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DesignerAttribute::.ctor(System.String,System.String)
extern "C"  void DesignerAttribute__ctor_m206724570 (DesignerAttribute_t926400970 * __this, String_t* ___designerTypeName, String_t* ___designerBaseTypeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerBaseTypeName()
extern "C"  String_t* DesignerAttribute_get_DesignerBaseTypeName_m2226214009 (DesignerAttribute_t926400970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DesignerAttribute::get_DesignerTypeName()
extern "C"  String_t* DesignerAttribute_get_DesignerTypeName_m2291864638 (DesignerAttribute_t926400970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DesignerAttribute::get_TypeId()
extern "C"  Il2CppObject * DesignerAttribute_get_TypeId_m3575871199 (DesignerAttribute_t926400970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DesignerAttribute::Equals(System.Object)
extern "C"  bool DesignerAttribute_Equals_m4260278407 (DesignerAttribute_t926400970 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.DesignerAttribute::GetHashCode()
extern "C"  int32_t DesignerAttribute_GetHashCode_m1478989101 (DesignerAttribute_t926400970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
