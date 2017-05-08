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

// System.Data.DefaultValueTypeConverter
struct DefaultValueTypeConverter_t379459877;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1176876434;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Type77837473.h"

// System.Object System.Data.DefaultValueTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * DefaultValueTypeConverter_ConvertTo_m2070849167 (DefaultValueTypeConverter_t379459877 * __this, Il2CppObject * ___context, CultureInfo_t634113868 * ___culture, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DefaultValueTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool DefaultValueTypeConverter_CanConvertTo_m2495371664 (DefaultValueTypeConverter_t379459877 * __this, Il2CppObject * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;