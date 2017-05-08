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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t1056763888;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944347872.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2359416570_gshared (Predicate_1_t1056763888 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2359416570(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1056763888 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2359416570_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m332691618_gshared (Predicate_1_t1056763888 * __this, KeyValuePair_2_t1944347872  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m332691618(__this, ___obj, method) ((  bool (*) (Predicate_1_t1056763888 *, KeyValuePair_2_t1944347872 , const MethodInfo*))Predicate_1_Invoke_m332691618_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3157529563_gshared (Predicate_1_t1056763888 * __this, KeyValuePair_2_t1944347872  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3157529563(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t1056763888 *, KeyValuePair_2_t1944347872 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m3157529563_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m548603360_gshared (Predicate_1_t1056763888 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m548603360(__this, ___result, method) ((  bool (*) (Predicate_1_t1056763888 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m548603360_gshared)(__this, ___result, method)
