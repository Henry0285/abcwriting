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

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t86757711;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.Module
struct Module_t2520131484;
// System.Delegate
struct Delegate_t49333446;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1534148145;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_MethodAttributes1641137380.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Reflection_Module2520131484.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod86757711.h"
#include "mscorlib_System_Reflection_MethodImplAttributes1624702662.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_RuntimeMethodHandle1598230792.h"

// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type,System.Boolean)
extern "C"  void DynamicMethod__ctor_m3626300851 (DynamicMethod_t86757711 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Boolean)
extern "C"  void DynamicMethod__ctor_m3657059753 (DynamicMethod_t86757711 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Reflection.Module,System.Boolean,System.Boolean)
extern "C"  void DynamicMethod__ctor_m470596408 (DynamicMethod_t86757711 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___parameterTypes, Type_t * ___owner, Module_t2520131484 * ___m, bool ___skipVisibility, bool ___anonHosted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethod_create_dynamic_method_m2387626914 (DynamicMethod_t86757711 * __this, DynamicMethod_t86757711 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethod_destroy_dynamic_method_m3223029124 (DynamicMethod_t86757711 * __this, DynamicMethod_t86757711 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C"  void DynamicMethod_CreateDynMethod_m3215158047 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C"  void DynamicMethod_Finalize_m2130118053 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type)
extern "C"  Delegate_t49333446 * DynamicMethod_CreateDelegate_m2157976338 (DynamicMethod_t86757711 * __this, Type_t * ___delegateType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * DynamicMethod_GetBaseDefinition_m3498189417 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* DynamicMethod_GetCustomAttributes_m848915965 (DynamicMethod_t86757711 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* DynamicMethod_GetCustomAttributes_m655554578 (DynamicMethod_t86757711 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
extern "C"  ILGenerator_t1534148145 * DynamicMethod_GetILGenerator_m1346756923 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t1534148145 * DynamicMethod_GetILGenerator_m4277474076 (DynamicMethod_t86757711 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
extern "C"  int32_t DynamicMethod_GetMethodImplementationFlags_m1395170958 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t3027888260* DynamicMethod_GetParameters_m3873709535 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * DynamicMethod_Invoke_m119596296 (DynamicMethod_t86757711 * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___parameters, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool DynamicMethod_IsDefined_m41044580 (DynamicMethod_t86757711 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C"  String_t* DynamicMethod_ToString_m3640450024 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C"  int32_t DynamicMethod_get_Attributes_m2445841258 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C"  int32_t DynamicMethod_get_CallingConvention_m2012357400 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C"  Type_t * DynamicMethod_get_DeclaringType_m2302942075 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t1598230792  DynamicMethod_get_MethodHandle_m429849422 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C"  Module_t2520131484 * DynamicMethod_get_Module_m136180051 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C"  String_t* DynamicMethod_get_Name_m3411533354 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C"  Type_t * DynamicMethod_get_ReflectedType_m2452081416 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C"  Type_t * DynamicMethod_get_ReturnType_m2822622452 (DynamicMethod_t86757711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethod::AddRef(System.Object)
extern "C"  int32_t DynamicMethod_AddRef_m1495651475 (DynamicMethod_t86757711 * __this, Il2CppObject * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
