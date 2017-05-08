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

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2709786804;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t3954710047;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitHandle313797096.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback3954710047.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_TimeSpan1834055012.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  void RegisteredWaitHandle__ctor_m267368504 (RegisteredWaitHandle_t2709786804 * __this, WaitHandle_t313797096 * ___waitObject, WaitOrTimerCallback_t3954710047 * ___callback, Il2CppObject * ___state, TimeSpan_t1834055012  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C"  void RegisteredWaitHandle_Wait_m1577159487 (RegisteredWaitHandle_t2709786804 * __this, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C"  void RegisteredWaitHandle_DoCallBack_m277534842 (RegisteredWaitHandle_t2709786804 * __this, Il2CppObject * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
