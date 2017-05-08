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

// System.Threading.WaitCallback
struct WaitCallback_t3161073199;
// System.Object
struct Il2CppObject;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2709786804;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t3954710047;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback3161073199.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Threading_WaitHandle313797096.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback3954710047.h"
#include "mscorlib_System_TimeSpan1834055012.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m2209660682 (Il2CppObject * __this /* static, unused */, WaitCallback_t3161073199 * ___callBack, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C"  RegisteredWaitHandle_t2709786804 * ThreadPool_RegisterWaitForSingleObject_m3904360398 (Il2CppObject * __this /* static, unused */, WaitHandle_t313797096 * ___waitObject, WaitOrTimerCallback_t3954710047 * ___callBack, Il2CppObject * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  RegisteredWaitHandle_t2709786804 * ThreadPool_RegisterWaitForSingleObject_m3133782998 (Il2CppObject * __this /* static, unused */, WaitHandle_t313797096 * ___waitObject, WaitOrTimerCallback_t3954710047 * ___callBack, Il2CppObject * ___state, TimeSpan_t1834055012  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
