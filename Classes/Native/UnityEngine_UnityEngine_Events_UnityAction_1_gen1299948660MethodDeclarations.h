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

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1299948660;
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

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m25541871_gshared (UnityAction_1_t1299948660 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m25541871(__this, ___object, ___method, method) ((  void (*) (UnityAction_1_t1299948660 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m25541871_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m2563101999_gshared (UnityAction_1_t1299948660 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m2563101999(__this, ___arg0, method) ((  void (*) (UnityAction_1_t1299948660 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m2563101999_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m530778538_gshared (UnityAction_1_t1299948660 * __this, int32_t ___arg0, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m530778538(__this, ___arg0, ___callback, ___object, method) ((  Il2CppObject * (*) (UnityAction_1_t1299948660 *, int32_t, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m530778538_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m1662218393_gshared (UnityAction_1_t1299948660 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m1662218393(__this, ___result, method) ((  void (*) (UnityAction_1_t1299948660 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m1662218393_gshared)(__this, ___result, method)
