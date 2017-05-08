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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t152598159;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t559747203;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1711298336;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C"  void UnityEvent_1__ctor_m2073978020_gshared (UnityEvent_1_t152598159 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2073978020(__this, method) ((  void (*) (UnityEvent_1_t152598159 *, const MethodInfo*))UnityEvent_1__ctor_m2073978020_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m22503421_gshared (UnityEvent_1_t152598159 * __this, UnityAction_1_t559747203 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m22503421(__this, ___call, method) ((  void (*) (UnityEvent_1_t152598159 *, UnityAction_1_t559747203 *, const MethodInfo*))UnityEvent_1_AddListener_m22503421_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m4278264272_gshared (UnityEvent_1_t152598159 * __this, UnityAction_1_t559747203 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m4278264272(__this, ___call, method) ((  void (*) (UnityEvent_1_t152598159 *, UnityAction_1_t559747203 *, const MethodInfo*))UnityEvent_1_RemoveListener_m4278264272_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2223850067_gshared (UnityEvent_1_t152598159 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2223850067(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_1_t152598159 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2223850067_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m669290055_gshared (UnityEvent_1_t152598159 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m669290055(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1711298336 * (*) (UnityEvent_1_t152598159 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m669290055_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m3098147632_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t559747203 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3098147632(__this /* static, unused */, ___action, method) ((  BaseInvokableCall_t1711298336 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t559747203 *, const MethodInfo*))UnityEvent_1_GetDelegate_m3098147632_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m838874366_gshared (UnityEvent_1_t152598159 * __this, Il2CppObject * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m838874366(__this, ___arg0, method) ((  void (*) (UnityEvent_1_t152598159 *, Il2CppObject *, const MethodInfo*))UnityEvent_1_Invoke_m838874366_gshared)(__this, ___arg0, method)
