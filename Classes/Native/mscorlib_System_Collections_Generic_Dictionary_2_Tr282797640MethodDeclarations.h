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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct Transform_1_t282797640;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23907947204.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m232902212_gshared (Transform_1_t282797640 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m232902212(__this, ___object, ___method, method) ((  void (*) (Transform_1_t282797640 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m232902212_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3907947204  Transform_1_Invoke_m1183831012_gshared (Transform_1_t282797640 * __this, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1183831012(__this, ___key, ___value, method) ((  KeyValuePair_2_t3907947204  (*) (Transform_1_t282797640 *, int64_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1183831012_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m655666259_gshared (Transform_1_t282797640 * __this, int64_t ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m655666259(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t282797640 *, int64_t, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m655666259_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3907947204  Transform_1_EndInvoke_m229614702_gshared (Transform_1_t282797640 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m229614702(__this, ___result, method) ((  KeyValuePair_2_t3907947204  (*) (Transform_1_t282797640 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m229614702_gshared)(__this, ___result, method)
