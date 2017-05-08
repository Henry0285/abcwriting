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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t1236149112;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1643298156;
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

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C"  void UnityEvent_1__ctor_m29611311_gshared (UnityEvent_1_t1236149112 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m29611311(__this, method) ((  void (*) (UnityEvent_1_t1236149112 *, const MethodInfo*))UnityEvent_1__ctor_m29611311_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m2377847221_gshared (UnityEvent_1_t1236149112 * __this, UnityAction_1_t1643298156 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2377847221(__this, ___call, method) ((  void (*) (UnityEvent_1_t1236149112 *, UnityAction_1_t1643298156 *, const MethodInfo*))UnityEvent_1_AddListener_m2377847221_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2564825698_gshared (UnityEvent_1_t1236149112 * __this, UnityAction_1_t1643298156 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2564825698(__this, ___call, method) ((  void (*) (UnityEvent_1_t1236149112 *, UnityAction_1_t1643298156 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2564825698_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3813546_gshared (UnityEvent_1_t1236149112 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3813546(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_1_t1236149112 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m3813546_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m2566156550_gshared (UnityEvent_1_t1236149112 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2566156550(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1711298336 * (*) (UnityEvent_1_t1236149112 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2566156550_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m4062537313_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t1643298156 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m4062537313(__this /* static, unused */, ___action, method) ((  BaseInvokableCall_t1711298336 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t1643298156 *, const MethodInfo*))UnityEvent_1_GetDelegate_m4062537313_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1298892870_gshared (UnityEvent_1_t1236149112 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1298892870(__this, ___arg0, method) ((  void (*) (UnityEvent_1_t1236149112 *, float, const MethodInfo*))UnityEvent_1_Invoke_m1298892870_gshared)(__this, ___arg0, method)
