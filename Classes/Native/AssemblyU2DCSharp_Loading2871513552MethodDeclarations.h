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

// Loading
struct Loading_t2871513552;
// System.EventHandler
struct EventHandler_t1189809773;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler1189809773.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Loading::.ctor()
extern "C"  void Loading__ctor_m3318054445 (Loading_t2871513552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::.cctor()
extern "C"  void Loading__cctor_m1141408866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::add_OnLoadingTimeout(System.EventHandler)
extern "C"  void Loading_add_OnLoadingTimeout_m3195968190 (Il2CppObject * __this /* static, unused */, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::remove_OnLoadingTimeout(System.EventHandler)
extern "C"  void Loading_remove_OnLoadingTimeout_m3598981503 (Il2CppObject * __this /* static, unused */, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::Show(System.Single,System.String)
extern "C"  void Loading_Show_m3348369845 (Il2CppObject * __this /* static, unused */, float ___timeout, String_t* ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::Hide()
extern "C"  void Loading_Hide_m1789376245 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loading::Update()
extern "C"  void Loading_Update_m1028356762 (Loading_t2871513552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
