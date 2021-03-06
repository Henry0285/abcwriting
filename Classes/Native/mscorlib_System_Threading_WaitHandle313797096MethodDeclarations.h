﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.WaitHandle
struct WaitHandle_t313797096;
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t1328851321;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan1834055012.h"
#include "mscorlib_System_IntPtr3076297692.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C"  void WaitHandle__ctor_m1256161634 (WaitHandle_t313797096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C"  void WaitHandle__cctor_m2138880789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C"  void WaitHandle_System_IDisposable_Dispose_m4264261745 (WaitHandle_t313797096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
extern "C"  void WaitHandle_CheckArray_m2078983532 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t1328851321* ___handles, bool ___waitAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
extern "C"  int32_t WaitHandle_WaitAny_internal_m536119019 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t1328851321* ___handles, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
extern "C"  int32_t WaitHandle_WaitAny_m2604196894 (Il2CppObject * __this /* static, unused */, WaitHandleU5BU5D_t1328851321* ___waitHandles, TimeSpan_t1834055012  ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C"  IntPtr_t WaitHandle_get_Handle_m3264724944 (WaitHandle_t313797096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C"  void WaitHandle_set_Handle_m2541455323 (WaitHandle_t313797096 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_internal_m1464117309 (WaitHandle_t313797096 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C"  void WaitHandle_Dispose_m441403862 (WaitHandle_t313797096 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C"  bool WaitHandle_WaitOne_m370363697 (WaitHandle_t313797096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_m1663572919 (WaitHandle_t313797096 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C"  void WaitHandle_CheckDisposed_m2858088315 (WaitHandle_t313797096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C"  void WaitHandle_Finalize_m3037611358 (WaitHandle_t313797096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
