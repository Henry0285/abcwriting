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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t133527725;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_UILineInfo1021111709.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m784266182_gshared (Predicate_1_t133527725 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m784266182(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t133527725 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m784266182_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m577088274_gshared (Predicate_1_t133527725 * __this, UILineInfo_t1021111709  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m577088274(__this, ___obj, method) ((  bool (*) (Predicate_1_t133527725 *, UILineInfo_t1021111709 , const MethodInfo*))Predicate_1_Invoke_m577088274_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2329589669_gshared (Predicate_1_t133527725 * __this, UILineInfo_t1021111709  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2329589669(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t133527725 *, UILineInfo_t1021111709 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2329589669_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3442731496_gshared (Predicate_1_t133527725 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3442731496(__this, ___result, method) ((  bool (*) (Predicate_1_t133527725 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3442731496_gshared)(__this, ___result, method)
