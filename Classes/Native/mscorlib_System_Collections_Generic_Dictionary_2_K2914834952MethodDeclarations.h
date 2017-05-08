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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t2914834952;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t1055659596;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t3285463968;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Object
struct Il2CppObject;
// System.Int64[]
struct Int64U5BU5D_t1300640033;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_K2647955617.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void KeyCollection__ctor_m3885543862_gshared (KeyCollection_t2914834952 * __this, Dictionary_2_t1055659596 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m3885543862(__this, ___dictionary, method) ((  void (*) (KeyCollection_t2914834952 *, Dictionary_2_t1055659596 *, const MethodInfo*))KeyCollection__ctor_m3885543862_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3319720888_gshared (KeyCollection_t2914834952 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3319720888(__this, ___item, method) ((  void (*) (KeyCollection_t2914834952 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3319720888_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m3601347139_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m3601347139(__this, method) ((  void (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m3601347139_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m2597166232_gshared (KeyCollection_t2914834952 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m2597166232(__this, ___item, method) ((  bool (*) (KeyCollection_t2914834952 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m2597166232_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1060868683_gshared (KeyCollection_t2914834952 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1060868683(__this, ___item, method) ((  bool (*) (KeyCollection_t2914834952 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1060868683_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C"  Il2CppObject* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m152152421_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m152152421(__this, method) ((  Il2CppObject* (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m152152421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m1539094133_gshared (KeyCollection_t2914834952 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1539094133(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t2914834952 *, Il2CppArray *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1539094133_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1351799188_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1351799188(__this, method) ((  Il2CppObject * (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1351799188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3534394359_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3534394359(__this, method) ((  bool (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3534394359_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m3200643657_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m3200643657(__this, method) ((  bool (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m3200643657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1440087769_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1440087769(__this, method) ((  Il2CppObject * (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1440087769_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m1238003947_gshared (KeyCollection_t2914834952 * __this, Int64U5BU5D_t1300640033* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1238003947(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t2914834952 *, Int64U5BU5D_t1300640033*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1238003947_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2647955617  KeyCollection_GetEnumerator_m3687526536_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m3687526536(__this, method) ((  Enumerator_t2647955617  (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_GetEnumerator_m3687526536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m972382317_gshared (KeyCollection_t2914834952 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m972382317(__this, method) ((  int32_t (*) (KeyCollection_t2914834952 *, const MethodInfo*))KeyCollection_get_Count_m972382317_gshared)(__this, method)
