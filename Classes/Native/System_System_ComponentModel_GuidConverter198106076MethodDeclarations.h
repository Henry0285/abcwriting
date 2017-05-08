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

// System.ComponentModel.GuidConverter
struct GuidConverter_t198106076;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1176876434;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Object707969140.h"

// System.Boolean System.ComponentModel.GuidConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool GuidConverter_CanConvertFrom_m140050428 (GuidConverter_t198106076 * __this, Il2CppObject * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.GuidConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool GuidConverter_CanConvertTo_m28632595 (GuidConverter_t198106076 * __this, Il2CppObject * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.GuidConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * GuidConverter_ConvertFrom_m3874566802 (GuidConverter_t198106076 * __this, Il2CppObject * ___context, CultureInfo_t634113868 * ___culture, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.GuidConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * GuidConverter_ConvertTo_m2515999314 (GuidConverter_t198106076 * __this, Il2CppObject * ___context, CultureInfo_t634113868 * ___culture, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;