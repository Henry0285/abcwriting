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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t3972326541;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t559747203;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m54675381_gshared (InvokableCall_1_t3972326541 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m54675381(__this, ___target, ___theFunction, method) ((  void (*) (InvokableCall_1_t3972326541 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m54675381_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m833213021_gshared (InvokableCall_1_t3972326541 * __this, UnityAction_1_t559747203 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m833213021(__this, ___action, method) ((  void (*) (InvokableCall_1_t3972326541 *, UnityAction_1_t559747203 *, const MethodInfo*))InvokableCall_1__ctor_m833213021_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m1715547918_gshared (InvokableCall_1_t3972326541 * __this, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m1715547918(__this, ___args, method) ((  void (*) (InvokableCall_1_t3972326541 *, ObjectU5BU5D_t3632007997*, const MethodInfo*))InvokableCall_1_Invoke_m1715547918_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m1325295794_gshared (InvokableCall_1_t3972326541 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m1325295794(__this, ___targetObj, ___method, method) ((  bool (*) (InvokableCall_1_t3972326541 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m1325295794_gshared)(__this, ___targetObj, ___method, method)
