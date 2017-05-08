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

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1254504477;
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

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_3__ctor_m3783439840_gshared (UnityAction_3_t1254504477 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_3__ctor_m3783439840(__this, ___object, ___method, method) ((  void (*) (UnityAction_3_t1254504477 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_3__ctor_m3783439840_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C"  void UnityAction_3_Invoke_m1498227613_gshared (UnityAction_3_t1254504477 * __this, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method);
#define UnityAction_3_Invoke_m1498227613(__this, ___arg0, ___arg1, ___arg2, method) ((  void (*) (UnityAction_3_t1254504477 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityAction_3_Invoke_m1498227613_gshared)(__this, ___arg0, ___arg1, ___arg2, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_3_BeginInvoke_m160302482_gshared (UnityAction_3_t1254504477 * __this, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_3_BeginInvoke_m160302482(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_3_t1254504477 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))UnityAction_3_BeginInvoke_m160302482_gshared)(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_3_EndInvoke_m1279075386_gshared (UnityAction_3_t1254504477 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_3_EndInvoke_m1279075386(__this, ___result, method) ((  void (*) (UnityAction_3_t1254504477 *, Il2CppObject *, const MethodInfo*))UnityAction_3_EndInvoke_m1279075386_gshared)(__this, ___result, method)
