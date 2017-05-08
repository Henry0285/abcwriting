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

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2994972632;
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

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m1968084291_gshared (UnityAction_1_t2994972632 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1968084291(__this, ___object, ___method, method) ((  void (*) (UnityAction_1_t2994972632 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1968084291_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m3523417209_gshared (UnityAction_1_t2994972632 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m3523417209(__this, ___arg0, method) ((  void (*) (UnityAction_1_t2994972632 *, bool, const MethodInfo*))UnityAction_1_Invoke_m3523417209_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m2512011642_gshared (UnityAction_1_t2994972632 * __this, bool ___arg0, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m2512011642(__this, ___arg0, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_1_t2994972632 *, bool, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m2512011642_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m3317901367_gshared (UnityAction_1_t2994972632 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m3317901367(__this, ___result, method) ((  void (*) (UnityAction_1_t2994972632 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m3317901367_gshared)(__this, ___result, method)
