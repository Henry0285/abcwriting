﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t1875428739;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3811123782_gshared (Predicate_1_t1875428739 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3811123782(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1875428739 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3811123782_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m122788314_gshared (Predicate_1_t1875428739 * __this, Color32_t2763012723  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m122788314(__this, ___obj, method) ((  bool (*) (Predicate_1_t1875428739 *, Color32_t2763012723 , const MethodInfo*))Predicate_1_Invoke_m122788314_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2959352225_gshared (Predicate_1_t1875428739 * __this, Color32_t2763012723  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2959352225(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t1875428739 *, Color32_t2763012723 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2959352225_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m924884444_gshared (Predicate_1_t1875428739 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m924884444(__this, ___result, method) ((  bool (*) (Predicate_1_t1875428739 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m924884444_gshared)(__this, ___result, method)