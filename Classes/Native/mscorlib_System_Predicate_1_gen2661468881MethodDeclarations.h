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

// System.Predicate`1<InGame/BaseLine>
struct Predicate_1_t2661468881;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "AssemblyU2DCSharp_InGame_BaseLine3549052865.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<InGame/BaseLine>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m4061584340_gshared (Predicate_1_t2661468881 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m4061584340(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t2661468881 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m4061584340_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<InGame/BaseLine>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3539434772_gshared (Predicate_1_t2661468881 * __this, BaseLine_t3549052865  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3539434772(__this, ___obj, method) ((  bool (*) (Predicate_1_t2661468881 *, BaseLine_t3549052865 , const MethodInfo*))Predicate_1_Invoke_m3539434772_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<InGame/BaseLine>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2337764891_gshared (Predicate_1_t2661468881 * __this, BaseLine_t3549052865  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2337764891(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t2661468881 *, BaseLine_t3549052865 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2337764891_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<InGame/BaseLine>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m970221202_gshared (Predicate_1_t2661468881 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m970221202(__this, ___result, method) ((  bool (*) (Predicate_1_t2661468881 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m970221202_gshared)(__this, ___result, method)
