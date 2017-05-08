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

// System.ComponentModel.SingleConverter
struct SingleConverter_t2882906095;
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

// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C"  bool SingleConverter_get_SupportHex_m3607340200 (SingleConverter_t2882906095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SingleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* SingleConverter_ConvertToString_m792849705 (SingleConverter_t2882906095 * __this, Il2CppObject * ___value, NumberFormatInfo_t3113349824 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * SingleConverter_ConvertFromString_m1051908048 (SingleConverter_t2882906095 * __this, String_t* ___value, NumberFormatInfo_t3113349824 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
