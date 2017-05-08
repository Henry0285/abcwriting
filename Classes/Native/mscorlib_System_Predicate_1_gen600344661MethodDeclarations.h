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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t600344661;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_UIVertex1487928645.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m549279630_gshared (Predicate_1_t600344661 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m549279630(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t600344661 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m549279630_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2883675618_gshared (Predicate_1_t600344661 * __this, UIVertex_t1487928645  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2883675618(__this, ___obj, method) ((  bool (*) (Predicate_1_t600344661 *, UIVertex_t1487928645 , const MethodInfo*))Predicate_1_Invoke_m2883675618_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3926587117_gshared (Predicate_1_t600344661 * __this, UIVertex_t1487928645  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3926587117(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t600344661 *, UIVertex_t1487928645 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m3926587117_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m337889472_gshared (Predicate_1_t600344661 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m337889472(__this, ___result, method) ((  bool (*) (Predicate_1_t600344661 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m337889472_gshared)(__this, ___result, method)
