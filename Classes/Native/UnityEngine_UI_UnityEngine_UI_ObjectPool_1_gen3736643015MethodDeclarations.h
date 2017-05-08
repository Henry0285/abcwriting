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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen4254639482MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m3088201237(__this, ___actionOnGet, ___actionOnRelease, method) ((  void (*) (ObjectPool_1_t3736643015 *, UnityAction_1_t41750736 *, UnityAction_1_t41750736 *, const MethodInfo*))ObjectPool_1__ctor_m1532275833_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m2047107698(__this, method) ((  int32_t (*) (ObjectPool_1_t3736643015 *, const MethodInfo*))ObjectPool_1_get_countAll_m4217365918_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m33558671(__this, ___value, method) ((  void (*) (ObjectPool_1_t3736643015 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m1742773675_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m1685082641(__this, method) ((  int32_t (*) (ObjectPool_1_t3736643015 *, const MethodInfo*))ObjectPool_1_get_countActive_m2655657865_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m928600844(__this, method) ((  int32_t (*) (ObjectPool_1_t3736643015 *, const MethodInfo*))ObjectPool_1_get_countInactive_m763736764_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2924542120(__this, method) ((  List_1_t189972673 * (*) (ObjectPool_1_t3736643015 *, const MethodInfo*))ObjectPool_1_Get_m3724675538_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m3964972930(__this, ___element, method) ((  void (*) (ObjectPool_1_t3736643015 *, List_1_t189972673 *, const MethodInfo*))ObjectPool_1_Release_m1615270002_gshared)(__this, ___element, method)