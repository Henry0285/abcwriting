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

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t217973160;
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

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m622153369_gshared (UnityAction_2_t217973160 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_2__ctor_m622153369(__this, ___object, ___method, method) ((  void (*) (UnityAction_2_t217973160 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m622153369_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C"  void UnityAction_2_Invoke_m1994351568_gshared (UnityAction_2_t217973160 * __this, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method);
#define UnityAction_2_Invoke_m1994351568(__this, ___arg0, ___arg1, method) ((  void (*) (UnityAction_2_t217973160 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityAction_2_Invoke_m1994351568_gshared)(__this, ___arg0, ___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_2_BeginInvoke_m3203769083_gshared (UnityAction_2_t217973160 * __this, Il2CppObject * ___arg0, Il2CppObject * ___arg1, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_2_BeginInvoke_m3203769083(__this, ___arg0, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_2_t217973160 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))UnityAction_2_BeginInvoke_m3203769083_gshared)(__this, ___arg0, ___arg1, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_2_EndInvoke_m4199296611_gshared (UnityAction_2_t217973160 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_2_EndInvoke_m4199296611(__this, ___result, method) ((  void (*) (UnityAction_2_t217973160 *, Il2CppObject *, const MethodInfo*))UnityAction_2_EndInvoke_m4199296611_gshared)(__this, ___result, method)
