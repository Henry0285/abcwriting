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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Comparison_1_t1464330331;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m943266423_gshared (Comparison_1_t1464330331 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m943266423(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1464330331 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m943266423_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1351529777_gshared (Comparison_1_t1464330331 * __this, KeyValuePair_2_t1627747851  ___x, KeyValuePair_2_t1627747851  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1351529777(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1464330331 *, KeyValuePair_2_t1627747851 , KeyValuePair_2_t1627747851 , const MethodInfo*))Comparison_1_Invoke_m1351529777_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m1911012798_gshared (Comparison_1_t1464330331 * __this, KeyValuePair_2_t1627747851  ___x, KeyValuePair_2_t1627747851  ___y, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1911012798(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t1464330331 *, KeyValuePair_2_t1627747851 , KeyValuePair_2_t1627747851 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m1911012798_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m4270453955_gshared (Comparison_1_t1464330331 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m4270453955(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1464330331 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m4270453955_gshared)(__this, ___result, method)
