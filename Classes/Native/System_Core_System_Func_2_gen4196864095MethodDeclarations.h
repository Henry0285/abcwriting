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

// System.Func`2<System.Object,System.Single>
struct Func_2_t4196864095;
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

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1874497973_gshared (Func_2_t4196864095 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1874497973(__this, ___object, ___method, method) ((  void (*) (Func_2_t4196864095 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1874497973_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m1144286175_gshared (Func_2_t4196864095 * __this, Il2CppObject * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1144286175(__this, ___arg1, method) ((  float (*) (Func_2_t4196864095 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m1144286175_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m669892004_gshared (Func_2_t4196864095 * __this, Il2CppObject * ___arg1, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m669892004(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t4196864095 *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m669892004_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m971580865_gshared (Func_2_t4196864095 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m971580865(__this, ___result, method) ((  float (*) (Func_2_t4196864095 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m971580865_gshared)(__this, ___result, method)
