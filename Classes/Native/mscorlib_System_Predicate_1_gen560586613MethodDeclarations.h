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

// System.Predicate`1<System.Int32>
struct Predicate_1_t560586613;
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

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2826800414_gshared (Predicate_1_t560586613 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2826800414(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t560586613 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2826800414_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m695569038_gshared (Predicate_1_t560586613 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m695569038(__this, ___obj, method) ((  bool (*) (Predicate_1_t560586613 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m695569038_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2559992383_gshared (Predicate_1_t560586613 * __this, int32_t ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2559992383(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t560586613 *, int32_t, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2559992383_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1202813828_gshared (Predicate_1_t560586613 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1202813828(__this, ___result, method) ((  bool (*) (Predicate_1_t560586613 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1202813828_gshared)(__this, ___result, method)
