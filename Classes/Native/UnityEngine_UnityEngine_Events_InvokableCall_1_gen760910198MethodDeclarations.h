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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t760910198;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1643298156;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m4078762228_gshared (InvokableCall_1_t760910198 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m4078762228(__this, ___target, ___theFunction, method) ((  void (*) (InvokableCall_1_t760910198 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m4078762228_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m121193486_gshared (InvokableCall_1_t760910198 * __this, UnityAction_1_t1643298156 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m121193486(__this, ___action, method) ((  void (*) (InvokableCall_1_t760910198 *, UnityAction_1_t1643298156 *, const MethodInfo*))InvokableCall_1__ctor_m121193486_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m4090512311_gshared (InvokableCall_1_t760910198 * __this, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m4090512311(__this, ___args, method) ((  void (*) (InvokableCall_1_t760910198 *, ObjectU5BU5D_t3632007997*, const MethodInfo*))InvokableCall_1_Invoke_m4090512311_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m678413071_gshared (InvokableCall_1_t760910198 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m678413071(__this, ___targetObj, ___method, method) ((  bool (*) (InvokableCall_1_t760910198 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m678413071_gshared)(__this, ___targetObj, ___method, method)