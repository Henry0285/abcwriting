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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t3024913723;
// UnityEngine.Object
struct Object_t1181371020;
struct Object_t1181371020_marshaled_pinvoke;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1181371020.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m79259589_gshared (CachedInvokableCall_1_t3024913723 * __this, Object_t1181371020 * ___target, MethodInfo_t * ___theFunction, Il2CppObject * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m79259589(__this, ___target, ___theFunction, ___argument, method) ((  void (*) (CachedInvokableCall_1_t3024913723 *, Object_t1181371020 *, MethodInfo_t *, Il2CppObject *, const MethodInfo*))CachedInvokableCall_1__ctor_m79259589_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m2401236944_gshared (CachedInvokableCall_1_t3024913723 * __this, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m2401236944(__this, ___args, method) ((  void (*) (CachedInvokableCall_1_t3024913723 *, ObjectU5BU5D_t3632007997*, const MethodInfo*))CachedInvokableCall_1_Invoke_m2401236944_gshared)(__this, ___args, method)
