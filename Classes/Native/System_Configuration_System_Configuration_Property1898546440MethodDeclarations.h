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

// System.Configuration.PropertyInformation
struct PropertyInformation_t1898546440;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t4281742376;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"
#include "System_Configuration_System_Configuration_Configur4281742376.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Configuration_System_Configuration_Property1898546440.h"
#include "System_Configuration_System_Configuration_Property3434130995.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C"  void PropertyInformation__ctor_m3964645511 (PropertyInformation_t1898546440 * __this, ConfigurationElement_t1301937485 * ___owner, ConfigurationProperty_t4281742376 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C"  Il2CppObject * PropertyInformation_get_DefaultValue_m2865970966 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C"  bool PropertyInformation_get_IsKey_m53514336 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C"  bool PropertyInformation_get_IsModified_m2197427276 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C"  void PropertyInformation_set_IsModified_m2277508543 (PropertyInformation_t1898546440 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C"  bool PropertyInformation_get_IsRequired_m2394064138 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C"  String_t* PropertyInformation_get_Name_m339533533 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C"  Type_t * PropertyInformation_get_Type_m2447867467 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_Value()
extern "C"  Il2CppObject * PropertyInformation_get_Value_m1250658193 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C"  void PropertyInformation_set_Value_m1161719494 (PropertyInformation_t1898546440 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformation_Reset_m4131859557 (PropertyInformation_t1898546440 * __this, PropertyInformation_t1898546440 * ___parentProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C"  bool PropertyInformation_get_IsElement_m1135806159 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C"  int32_t PropertyInformation_get_ValueOrigin_m1155932344 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C"  String_t* PropertyInformation_GetStringValue_m233999863 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C"  void PropertyInformation_SetStringValue_m1643234174 (PropertyInformation_t1898546440 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C"  ConfigurationProperty_t4281742376 * PropertyInformation_get_Property_m530348717 (PropertyInformation_t1898546440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
