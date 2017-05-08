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

// System.ComponentModel.Component
struct Component_t3731065100;
// System.EventHandler
struct EventHandler_t1189809773;
// System.ComponentModel.ISite
struct ISite_t3358050495;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3941110939;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler1189809773.h"

// System.Void System.ComponentModel.Component::.ctor()
extern "C"  void Component__ctor_m685180076 (Component_t3731065100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C"  void Component_add_Disposed_m3101839878 (Component_t3731065100 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C"  void Component_remove_Disposed_m1095667957 (Component_t3731065100 * __this, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C"  Il2CppObject * Component_get_Site_m3168465524 (Component_t3731065100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C"  EventHandlerList_t3941110939 * Component_get_Events_m1498771332 (Component_t3731065100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C"  void Component_Finalize_m3915583340 (Component_t3731065100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C"  void Component_Dispose_m3787380235 (Component_t3731065100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C"  void Component_Dispose_m1758989928 (Component_t3731065100 * __this, bool ___release_all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C"  String_t* Component_ToString_m1082195383 (Component_t3731065100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
