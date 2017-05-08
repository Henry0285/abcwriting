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

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t3721272082;
// System.ComponentModel.IComponent
struct IComponent_t2372763057;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1329358743;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3334205439;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C"  void ComponentInfo__ctor_m408058701 (ComponentInfo_t3721272082 * __this, Il2CppObject * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C"  AttributeCollection_t1329358743 * ComponentInfo_GetAttributes_m1385665899 (ComponentInfo_t3721272082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C"  PropertyDescriptorCollection_t3334205439 * ComponentInfo_GetProperties_m3013311621 (ComponentInfo_t3721272082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
