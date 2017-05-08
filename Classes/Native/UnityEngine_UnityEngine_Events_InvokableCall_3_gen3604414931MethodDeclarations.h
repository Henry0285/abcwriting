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

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t3604414931;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_3__ctor_m3141607487_gshared (InvokableCall_3_t3604414931 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_3__ctor_m3141607487(__this, ___target, ___theFunction, method) ((  void (*) (InvokableCall_3_t3604414931 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m3141607487_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_3_Invoke_m74557124_gshared (InvokableCall_3_t3604414931 * __this, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method);
#define InvokableCall_3_Invoke_m74557124(__this, ___args, method) ((  void (*) (InvokableCall_3_t3604414931 *, ObjectU5BU5D_t3632007997*, const MethodInfo*))InvokableCall_3_Invoke_m74557124_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_3_Find_m3470456112_gshared (InvokableCall_3_t3604414931 * __this, Il2CppObject * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_3_Find_m3470456112(__this, ___targetObj, ___method, method) ((  bool (*) (InvokableCall_3_t3604414931 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m3470456112_gshared)(__this, ___targetObj, ___method, method)
