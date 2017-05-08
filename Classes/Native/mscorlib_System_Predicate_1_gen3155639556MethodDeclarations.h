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

// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct Predicate_1_t3155639556;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg4043223540.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1292402863_gshared (Predicate_1_t3155639556 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1292402863(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t3155639556 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1292402863_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2060780095_gshared (Predicate_1_t3155639556 * __this, CustomAttributeTypedArgument_t4043223540  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2060780095(__this, ___obj, method) ((  bool (*) (Predicate_1_t3155639556 *, CustomAttributeTypedArgument_t4043223540 , const MethodInfo*))Predicate_1_Invoke_m2060780095_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1856151290_gshared (Predicate_1_t3155639556 * __this, CustomAttributeTypedArgument_t4043223540  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1856151290(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t3155639556 *, CustomAttributeTypedArgument_t4043223540 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1856151290_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m259774785_gshared (Predicate_1_t3155639556 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m259774785(__this, ___result, method) ((  bool (*) (Predicate_1_t3155639556 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m259774785_gshared)(__this, ___result, method)
