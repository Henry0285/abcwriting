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

// System.ComponentModel.Info
struct Info_t279696211;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3334205439;
// System.Attribute[]
struct AttributeU5BU5D_t2973358136;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1329358743;
// System.ComponentModel.IComponent
struct IComponent_t2372763057;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C"  void Info__ctor_m2144258930 (Info_t279696211 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C"  Type_t * Info_get_InfoType_m47041598 (Info_t279696211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3334205439 * Info_GetProperties_m11615775 (Info_t279696211 * __this, AttributeU5BU5D_t2973358136* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C"  AttributeCollection_t1329358743 * Info_GetAttributes_m911936323 (Info_t279696211 * __this, Il2CppObject * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
