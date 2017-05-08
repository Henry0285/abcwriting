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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct Transform_1_t617716056;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23686033440.h"
#include "mscorlib_System_Reflection_Emit_Label2766254729.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m219296054_gshared (Transform_1_t617716056 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m219296054(__this, ___object, ___method, method) ((  void (*) (Transform_1_t617716056 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m219296054_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3686033440  Transform_1_Invoke_m387254326_gshared (Transform_1_t617716056 * __this, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m387254326(__this, ___key, ___value, method) ((  KeyValuePair_2_t3686033440  (*) (Transform_1_t617716056 *, int32_t, Label_t2766254729 , const MethodInfo*))Transform_1_Invoke_m387254326_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1679317215_gshared (Transform_1_t617716056 * __this, int32_t ___key, Label_t2766254729  ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1679317215(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t617716056 *, int32_t, Label_t2766254729 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1679317215_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3686033440  Transform_1_EndInvoke_m3592138636_gshared (Transform_1_t617716056 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3592138636(__this, ___result, method) ((  KeyValuePair_2_t3686033440  (*) (Transform_1_t617716056 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3592138636_gshared)(__this, ___result, method)
