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

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3941110939;
// System.Delegate
struct Delegate_t49333446;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListEntry
struct ListEntry_t1456775003;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Delegate49333446.h"

// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C"  void EventHandlerList__ctor_m125822993 (EventHandlerList_t3941110939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C"  Delegate_t49333446 * EventHandlerList_get_Item_m533246000 (EventHandlerList_t3941110939 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::AddHandler(System.Object,System.Delegate)
extern "C"  void EventHandlerList_AddHandler_m3545570610 (EventHandlerList_t3941110939 * __this, Il2CppObject * ___key, Delegate_t49333446 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::RemoveHandler(System.Object,System.Delegate)
extern "C"  void EventHandlerList_RemoveHandler_m874666245 (EventHandlerList_t3941110939 * __this, Il2CppObject * ___key, Delegate_t49333446 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C"  void EventHandlerList_Dispose_m813102448 (EventHandlerList_t3941110939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C"  ListEntry_t1456775003 * EventHandlerList_FindEntry_m2326093420 (EventHandlerList_t3941110939 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
