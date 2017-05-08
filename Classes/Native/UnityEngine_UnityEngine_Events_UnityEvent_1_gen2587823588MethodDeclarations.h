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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t2587823588;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2994972632;
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

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C"  void UnityEvent_1__ctor_m4051141261_gshared (UnityEvent_1_t2587823588 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m4051141261(__this, method) ((  void (*) (UnityEvent_1_t2587823588 *, const MethodInfo*))UnityEvent_1__ctor_m4051141261_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m1708363187_gshared (UnityEvent_1_t2587823588 * __this, UnityAction_1_t2994972632 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1708363187(__this, ___call, method) ((  void (*) (UnityEvent_1_t2587823588 *, UnityAction_1_t2994972632 *, const MethodInfo*))UnityEvent_1_AddListener_m1708363187_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m670609979_gshared (UnityEvent_1_t2587823588 * __this, UnityAction_1_t2994972632 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m670609979(__this, ___call, method) ((  void (*) (UnityEvent_1_t2587823588 *, UnityAction_1_t2994972632 *, const MethodInfo*))UnityEvent_1_RemoveListener_m670609979_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m3743240374_gshared (UnityEvent_1_t2587823588 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m3743240374(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_1_t2587823588 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m3743240374_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m2856963016_gshared (UnityEvent_1_t2587823588 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2856963016(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1711298336 * (*) (UnityEvent_1_t2587823588 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2856963016_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m1528404507_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t2994972632 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1528404507(__this /* static, unused */, ___action, method) ((  BaseInvokableCall_t1711298336 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t2994972632 *, const MethodInfo*))UnityEvent_1_GetDelegate_m1528404507_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m667974834_gshared (UnityEvent_1_t2587823588 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m667974834(__this, ___arg0, method) ((  void (*) (UnityEvent_1_t2587823588 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m667974834_gshared)(__this, ___arg0, method)
