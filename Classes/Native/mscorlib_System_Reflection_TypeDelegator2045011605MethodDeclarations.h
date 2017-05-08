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

// System.Reflection.TypeDelegator
struct TypeDelegator_t2045011605;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t2520131484;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2856386896;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3538880115;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3499147121;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t3640491129;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2802799118;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2236254246;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle2078935215.h"
#include "mscorlib_System_Reflection_TypeAttributes2928897129.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"

// System.Void System.Reflection.TypeDelegator::.ctor()
extern "C"  void TypeDelegator__ctor_m4215655441 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern "C"  Assembly_t141003736 * TypeDelegator_get_Assembly_m105858801 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern "C"  String_t* TypeDelegator_get_AssemblyQualifiedName_m3556442196 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern "C"  Type_t * TypeDelegator_get_BaseType_m1092255109 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_FullName()
extern "C"  String_t* TypeDelegator_get_FullName_m3702890417 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern "C"  Module_t2520131484 * TypeDelegator_get_Module_m3400212593 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Name()
extern "C"  String_t* TypeDelegator_get_Name_m1527131646 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern "C"  String_t* TypeDelegator_get_Namespace_m989883650 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2078935215  TypeDelegator_get_TypeHandle_m2941974954 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern "C"  Type_t * TypeDelegator_get_UnderlyingSystemType_m2393287398 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern "C"  int32_t TypeDelegator_GetAttributeFlagsImpl_m1611200638 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t2856386896 * TypeDelegator_GetConstructorImpl_m3778518431 (TypeDelegator_t2045011605 * __this, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3499147121* TypeDelegator_GetConstructors_m249912809 (TypeDelegator_t2045011605 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* TypeDelegator_GetCustomAttributes_m2926775359 (TypeDelegator_t2045011605 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* TypeDelegator_GetCustomAttributes_m142551262 (TypeDelegator_t2045011605 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern "C"  Type_t * TypeDelegator_GetElementType_m2787693229 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeDelegator_GetEvent_m2099640616 (TypeDelegator_t2045011605 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeDelegator_GetField_m1232516904 (TypeDelegator_t2045011605 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t3640491129* TypeDelegator_GetFields_m2495791561 (TypeDelegator_t2045011605 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern "C"  TypeU5BU5D_t2442356668* TypeDelegator_GetInterfaces_m2637438819 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeDelegator_GetMethodImpl_m1305669365 (TypeDelegator_t2045011605 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, int32_t ___callConvention, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2802799118* TypeDelegator_GetMethods_m95415129 (TypeDelegator_t2045011605 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.TypeDelegator::GetProperties(System.Reflection.BindingFlags)
extern "C"  PropertyInfoU5BU5D_t2236254246* TypeDelegator_GetProperties_m1948602632 (TypeDelegator_t2045011605 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeDelegator_GetPropertyImpl_m3098444162 (TypeDelegator_t2045011605 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1934246024 * ___binder, Type_t * ___returnType, TypeU5BU5D_t2442356668* ___types, ParameterModifierU5BU5D_t3538880115* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern "C"  bool TypeDelegator_HasElementTypeImpl_m2009184965 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * TypeDelegator_InvokeMember_m1941751918 (TypeDelegator_t2045011605 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1934246024 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t3632007997* ___args, ParameterModifierU5BU5D_t3538880115* ___modifiers, CultureInfo_t634113868 * ___culture, StringU5BU5D_t3764931161* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern "C"  bool TypeDelegator_IsArrayImpl_m1373680608 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern "C"  bool TypeDelegator_IsByRefImpl_m133149285 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeDelegator_IsDefined_m2211493698 (TypeDelegator_t2045011605 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern "C"  bool TypeDelegator_IsPointerImpl_m1496067856 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern "C"  bool TypeDelegator_IsPrimitiveImpl_m558165608 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern "C"  bool TypeDelegator_IsValueTypeImpl_m1437000576 (TypeDelegator_t2045011605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
