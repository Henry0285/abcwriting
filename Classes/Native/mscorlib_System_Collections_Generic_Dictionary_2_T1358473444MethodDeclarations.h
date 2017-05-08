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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>
struct Transform_1_t1358473444;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3927316327_gshared (Transform_1_t1358473444 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3927316327(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1358473444 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3927316327_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::Invoke(TKey,TValue)
extern "C"  int64_t Transform_1_Invoke_m3042893651_gshared (Transform_1_t1358473444 * __this, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3042893651(__this, ___key, ___value, method) ((  int64_t (*) (Transform_1_t1358473444 *, int64_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3042893651_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3566819466_gshared (Transform_1_t1358473444 * __this, int64_t ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3566819466(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1358473444 *, int64_t, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3566819466_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C"  int64_t Transform_1_EndInvoke_m2544704049_gshared (Transform_1_t1358473444 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2544704049(__this, ___result, method) ((  int64_t (*) (Transform_1_t1358473444 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2544704049_gshared)(__this, ___result, method)
