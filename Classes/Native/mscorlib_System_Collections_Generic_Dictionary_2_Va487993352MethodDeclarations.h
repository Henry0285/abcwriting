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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t487993352;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t3810628996;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4044978853;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3315407976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V1107957721.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m1016212932_gshared (ValueCollection_t487993352 * __this, Dictionary_2_t3810628996 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1016212932(__this, ___dictionary, method) ((  void (*) (ValueCollection_t487993352 *, Dictionary_2_t3810628996 *, const MethodInfo*))ValueCollection__ctor_m1016212932_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1909364658_gshared (ValueCollection_t487993352 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1909364658(__this, ___item, method) ((  void (*) (ValueCollection_t487993352 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1909364658_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m4184581491_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m4184581491(__this, method) ((  void (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m4184581491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m246642050_gshared (ValueCollection_t487993352 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m246642050(__this, ___item, method) ((  bool (*) (ValueCollection_t487993352 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m246642050_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1476685027_gshared (ValueCollection_t487993352 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1476685027(__this, ___item, method) ((  bool (*) (ValueCollection_t487993352 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1476685027_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Il2CppObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m374665661_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m374665661(__this, method) ((  Il2CppObject* (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m374665661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m2486821337_gshared (ValueCollection_t487993352 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m2486821337(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t487993352 *, Il2CppArray *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m2486821337_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1020497378_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1020497378(__this, method) ((  Il2CppObject * (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1020497378_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m2046100031_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m2046100031(__this, method) ((  bool (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m2046100031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2689217077_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2689217077(__this, method) ((  bool (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2689217077_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m3444889833_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m3444889833(__this, method) ((  Il2CppObject * (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m3444889833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m2054124627_gshared (ValueCollection_t487993352 * __this, Int32U5BU5D_t3315407976* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m2054124627(__this, ___array, ___index, method) ((  void (*) (ValueCollection_t487993352 *, Int32U5BU5D_t3315407976*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m2054124627_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t1107957723  ValueCollection_GetEnumerator_m494496494_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m494496494(__this, method) ((  Enumerator_t1107957723  (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_GetEnumerator_m494496494_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m3077228621_gshared (ValueCollection_t487993352 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m3077228621(__this, method) ((  int32_t (*) (ValueCollection_t487993352 *, const MethodInfo*))ValueCollection_get_Count_m3077228621_gshared)(__this, method)
