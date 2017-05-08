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

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t3533350915;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2802799118;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Reflection.Module
struct Module_t2520131484;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyAttributes2970087148.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C"  int32_t PropertyBuilder_get_Attributes_m1538287354 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C"  bool PropertyBuilder_get_CanRead_m2661496160 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C"  bool PropertyBuilder_get_CanWrite_m2381953607 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C"  Type_t * PropertyBuilder_get_DeclaringType_m3664861407 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C"  String_t* PropertyBuilder_get_Name_m3823568914 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C"  Type_t * PropertyBuilder_get_PropertyType_m2865954421 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C"  Type_t * PropertyBuilder_get_ReflectedType_m2158574648 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t2802799118* PropertyBuilder_GetAccessors_m1006850480 (PropertyBuilder_t3533350915 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* PropertyBuilder_GetCustomAttributes_m1029078269 (PropertyBuilder_t3533350915 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* PropertyBuilder_GetCustomAttributes_m3351693494 (PropertyBuilder_t3533350915 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetGetMethod_m4104689211 (PropertyBuilder_t3533350915 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t3027888260* PropertyBuilder_GetIndexParameters_m530648889 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetSetMethod_m3440414495 (PropertyBuilder_t3533350915 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * PropertyBuilder_GetValue_m1368104137 (PropertyBuilder_t3533350915 * __this, Il2CppObject * ___obj, ObjectU5BU5D_t3632007997* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * PropertyBuilder_GetValue_m2017114019 (PropertyBuilder_t3533350915 * __this, Il2CppObject * ___obj, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___index, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool PropertyBuilder_IsDefined_m1809430892 (PropertyBuilder_t3533350915 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C"  void PropertyBuilder_SetValue_m3999239872 (PropertyBuilder_t3533350915 * __this, Il2CppObject * ___obj, Il2CppObject * ___value, ObjectU5BU5D_t3632007997* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void PropertyBuilder_SetValue_m1174444320 (PropertyBuilder_t3533350915 * __this, Il2CppObject * ___obj, Il2CppObject * ___value, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, ObjectU5BU5D_t3632007997* ___index, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C"  Module_t2520131484 * PropertyBuilder_get_Module_m1618339927 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C"  Exception_t1145979430 * PropertyBuilder_not_supported_m143748788 (PropertyBuilder_t3533350915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
