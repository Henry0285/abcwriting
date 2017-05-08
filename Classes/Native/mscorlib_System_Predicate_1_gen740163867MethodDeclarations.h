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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Predicate_1_t740163867;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21627747851.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m797700523_gshared (Predicate_1_t740163867 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m797700523(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t740163867 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m797700523_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3120763779_gshared (Predicate_1_t740163867 * __this, KeyValuePair_2_t1627747851  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3120763779(__this, ___obj, method) ((  bool (*) (Predicate_1_t740163867 *, KeyValuePair_2_t1627747851 , const MethodInfo*))Predicate_1_Invoke_m3120763779_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2651312646_gshared (Predicate_1_t740163867 * __this, KeyValuePair_2_t1627747851  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2651312646(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t740163867 *, KeyValuePair_2_t1627747851 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2651312646_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m548884925_gshared (Predicate_1_t740163867 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m548884925(__this, ___result, method) ((  bool (*) (Predicate_1_t740163867 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m548884925_gshared)(__this, ___result, method)
