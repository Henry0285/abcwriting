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

// System.Diagnostics.TraceListener
struct TraceListener_t521652164;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t792312266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Diagnostics_TraceOptions3067376058.h"

// System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern "C"  void TraceListener__ctor_m1767898120 (TraceListener_t521652164 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern "C"  void TraceListener_set_IndentLevel_m2349955532 (TraceListener_t521652164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern "C"  void TraceListener_set_IndentSize_m2080002237 (TraceListener_t521652164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::get_Name()
extern "C"  String_t* TraceListener_get_Name_m2156708763 (TraceListener_t521652164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Name(System.String)
extern "C"  void TraceListener_set_Name_m2158517316 (TraceListener_t521652164 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose()
extern "C"  void TraceListener_Dispose_m3683438111 (TraceListener_t521652164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern "C"  void TraceListener_Dispose_m513396866 (TraceListener_t521652164 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceListener::GetSupportedAttributes()
extern "C"  StringU5BU5D_t3764931161* TraceListener_GetSupportedAttributes_m3079549090 (TraceListener_t521652164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::get_Attributes()
extern "C"  StringDictionary_t792312266 * TraceListener_get_Attributes_m3796108721 (TraceListener_t521652164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_TraceOutputOptions(System.Diagnostics.TraceOptions)
extern "C"  void TraceListener_set_TraceOutputOptions_m3488476519 (TraceListener_t521652164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
