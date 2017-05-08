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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>
struct Transform_1_t3992904641;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Reflection_Emit_Label2766254729.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1165979048_gshared (Transform_1_t3992904641 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1165979048(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3992904641 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1165979048_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::Invoke(TKey,TValue)
extern "C"  Label_t2766254729  Transform_1_Invoke_m2635029648_gshared (Transform_1_t3992904641 * __this, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2635029648(__this, ___key, ___value, method) ((  Label_t2766254729  (*) (Transform_1_t3992904641 *, int32_t, Label_t2766254729 , const MethodInfo*))Transform_1_Invoke_m2635029648_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2566047391_gshared (Transform_1_t3992904641 * __this, int32_t ___key, Label_t2766254729  ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2566047391(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3992904641 *, int32_t, Label_t2766254729 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2566047391_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::EndInvoke(System.IAsyncResult)
extern "C"  Label_t2766254729  Transform_1_EndInvoke_m2836568466_gshared (Transform_1_t3992904641 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2836568466(__this, ___result, method) ((  Label_t2766254729  (*) (Transform_1_t3992904641 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2836568466_gshared)(__this, ___result, method)
