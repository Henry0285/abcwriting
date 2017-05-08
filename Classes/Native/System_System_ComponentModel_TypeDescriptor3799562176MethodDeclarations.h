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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1329358743;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3444007383;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3334205439;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t2973358136;
// System.EventArgs
struct EventArgs_t591428026;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t3721272082;
// System.ComponentModel.IComponent
struct IComponent_t2372763057;
// System.ComponentModel.TypeInfo
struct TypeInfo_t16693883;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_EventArgs591428026.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m203489455 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t1329358743 * TypeDescriptor_GetAttributes_m164131000 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t1468494371 * TypeDescriptor_get_DefaultConverters_m3008219029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t3444007383 * TypeDescriptor_GetConverter_m1788154595 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1939082393 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3334205439 * TypeDescriptor_GetProperties_m210621774 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, AttributeU5BU5D_t2973358136* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C"  PropertyDescriptorCollection_t3334205439 * TypeDescriptor_GetProperties_m1462251275 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, AttributeU5BU5D_t2973358136* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Object)
extern "C"  void TypeDescriptor_Refresh_m1287836919 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C"  void TypeDescriptor_OnComponentDisposed_m2108589539 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender, EventArgs_t591428026 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C"  ComponentInfo_t3721272082 * TypeDescriptor_GetComponentInfo_m296047307 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t16693883 * TypeDescriptor_GetTypeInfo_m2320573979 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m3955750754 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
