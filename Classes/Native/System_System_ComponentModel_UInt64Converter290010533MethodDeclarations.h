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

// System.ComponentModel.UInt64Converter
struct UInt64Converter_t290010533;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3113349824;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Globalization_NumberFormatInfo3113349824.h"
#include "mscorlib_System_String1967731336.h"

// System.Boolean System.ComponentModel.UInt64Converter::get_SupportHex()
extern "C"  bool UInt64Converter_get_SupportHex_m1567658782 (UInt64Converter_t290010533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* UInt64Converter_ConvertToString_m1701387879 (UInt64Converter_t290010533 * __this, Il2CppObject * ___value, NumberFormatInfo_t3113349824 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * UInt64Converter_ConvertFromString_m1775521366 (UInt64Converter_t290010533 * __this, String_t* ___value, NumberFormatInfo_t3113349824 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * UInt64Converter_ConvertFromString_m438616841 (UInt64Converter_t290010533 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
