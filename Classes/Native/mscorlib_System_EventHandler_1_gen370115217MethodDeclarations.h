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

// System.EventHandler`1<System.Object>
struct EventHandler_1_t370115217;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m805401670_gshared (EventHandler_1_t370115217 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventHandler_1__ctor_m805401670(__this, ___object, ___method, method) ((  void (*) (EventHandler_1_t370115217 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m805401670_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C"  void EventHandler_1_Invoke_m3162899003_gshared (EventHandler_1_t370115217 * __this, Il2CppObject * ___sender, Il2CppObject * ___e, const MethodInfo* method);
#define EventHandler_1_Invoke_m3162899003(__this, ___sender, ___e, method) ((  void (*) (EventHandler_1_t370115217 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))EventHandler_1_Invoke_m3162899003_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_1_BeginInvoke_m2005697352_gshared (EventHandler_1_t370115217 * __this, Il2CppObject * ___sender, Il2CppObject * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m2005697352(__this, ___sender, ___e, ___callback, ___object, method) ((  Il2CppObject * (*) (EventHandler_1_t370115217 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))EventHandler_1_BeginInvoke_m2005697352_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_1_EndInvoke_m487063176_gshared (EventHandler_1_t370115217 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m487063176(__this, ___result, method) ((  void (*) (EventHandler_1_t370115217 *, Il2CppObject *, const MethodInfo*))EventHandler_1_EndInvoke_m487063176_gshared)(__this, ___result, method)
