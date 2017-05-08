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

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t2903341691;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t1756503493;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2771817166;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Diagnostics_SourceLevels1158049141.h"
#include "System_System_Diagnostics_TraceImplSettings1756503493.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceSourceInfo__ctor_m900268271 (TraceSourceInfo_t2903341691 * __this, String_t* ___name, int32_t ___levels, TraceImplSettings_t1756503493 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C"  String_t* TraceSourceInfo_get_Name_m2997344898 (TraceSourceInfo_t2903341691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C"  TraceListenerCollection_t2771817166 * TraceSourceInfo_get_Listeners_m2293863004 (TraceSourceInfo_t2903341691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
