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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t833745832;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2426041853.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23686033440.h"
#include "mscorlib_System_Reflection_Emit_Label2766254729.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m496941373_gshared (Enumerator_t2426041854 * __this, Dictionary_2_t833745832 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m496941373(__this, ___dictionary, method) ((  void (*) (Enumerator_t2426041854 *, Dictionary_2_t833745832 *, const MethodInfo*))Enumerator__ctor_m496941373_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m984328696_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m984328696(__this, method) ((  Il2CppObject * (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m984328696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m222673160_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m222673160(__this, method) ((  void (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m222673160_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t1445113794  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1762091339_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1762091339(__this, method) ((  DictionaryEntry_t1445113794  (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1762091339_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1625582782_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1625582782(__this, method) ((  Il2CppObject * (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1625582782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1261096000_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1261096000(__this, method) ((  Il2CppObject * (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1261096000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3018149748_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m3018149748(__this, method) ((  bool (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_MoveNext_m3018149748_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C"  KeyValuePair_2_t3686033440  Enumerator_get_Current_m3130898880_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m3130898880(__this, method) ((  KeyValuePair_2_t3686033440  (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_get_Current_m3130898880_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m2503592769_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m2503592769(__this, method) ((  int32_t (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_get_CurrentKey_m2503592769_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentValue()
extern "C"  Label_t2766254729  Enumerator_get_CurrentValue_m3952904993_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m3952904993(__this, method) ((  Label_t2766254729  (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_get_CurrentValue_m3952904993_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C"  void Enumerator_Reset_m2015547391_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_Reset_m2015547391(__this, method) ((  void (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_Reset_m2015547391_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyState()
extern "C"  void Enumerator_VerifyState_m2737116096_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m2737116096(__this, method) ((  void (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_VerifyState_m2737116096_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1931981752_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1931981752(__this, method) ((  void (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_VerifyCurrent_m1931981752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C"  void Enumerator_Dispose_m2214493861_gshared (Enumerator_t2426041854 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2214493861(__this, method) ((  void (*) (Enumerator_t2426041854 *, const MethodInfo*))Enumerator_Dispose_m2214493861_gshared)(__this, method)
