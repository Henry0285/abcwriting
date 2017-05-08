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

// System.ComponentModel.SByteConverter
struct SByteConverter_t1102834570;
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

// System.Boolean System.ComponentModel.SByteConverter::get_SupportHex()
extern "C"  bool SByteConverter_get_SupportHex_m3295247605 (SByteConverter_t1102834570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* SByteConverter_ConvertToString_m4222665188 (SByteConverter_t1102834570 * __this, Il2CppObject * ___value, NumberFormatInfo_t3113349824 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * SByteConverter_ConvertFromString_m2856336519 (SByteConverter_t1102834570 * __this, String_t* ___value, NumberFormatInfo_t3113349824 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * SByteConverter_ConvertFromString_m2495887212 (SByteConverter_t1102834570 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
