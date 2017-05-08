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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t870236354;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Collections.ICollection
struct ICollection_t2033110931;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>[]
struct KeyValuePair_2U5BU5D_t1283019617;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct IEnumerator_1_t1987874400;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1087952561;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.Emit.Label>
struct KeyCollection_t2692921188;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t1806077484;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23686033440.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Reflection_Emit_Label2766254729.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2426041853.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor()
extern "C"  void Dictionary_2__ctor_m1255943071_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1255943071(__this, method) ((  void (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2__ctor_m1255943071_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1961911780_gshared (Dictionary_2_t833745832 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1961911780(__this, ___comparer, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1961911780_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3874783032_gshared (Dictionary_2_t833745832 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m3874783032(__this, ___capacity, method) ((  void (*) (Dictionary_2_t833745832 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3874783032_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3819672642_gshared (Dictionary_2_t833745832 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m3819672642(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t833745832 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2__ctor_m3819672642_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2089661407_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2089661407(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2089661407_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m3844287543_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m3844287543(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m3844287543_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1601131725_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1601131725(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t833745832 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1601131725_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3040171210_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3040171210(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3040171210_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2028650011_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2028650011(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2028650011_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2855753903_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2855753903(__this, ___key, method) ((  bool (*) (Dictionary_2_t833745832 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2855753903_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1193528230_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1193528230(__this, ___key, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1193528230_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4204714737_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4204714737(__this, method) ((  bool (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4204714737_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2668618613_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2668618613(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2668618613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1478455_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1478455(__this, method) ((  bool (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1478455_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2251404332_gshared (Dictionary_2_t833745832 * __this, KeyValuePair_2_t3686033440  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2251404332(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t833745832 *, KeyValuePair_2_t3686033440 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2251404332_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m102057800_gshared (Dictionary_2_t833745832 * __this, KeyValuePair_2_t3686033440  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m102057800(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t833745832 *, KeyValuePair_2_t3686033440 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m102057800_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3235903856_gshared (Dictionary_2_t833745832 * __this, KeyValuePair_2U5BU5D_t1283019617* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3235903856(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t833745832 *, KeyValuePair_2U5BU5D_t1283019617*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3235903856_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1024352029_gshared (Dictionary_2_t833745832 * __this, KeyValuePair_2_t3686033440  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1024352029(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t833745832 *, KeyValuePair_2_t3686033440 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1024352029_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m638774149_gshared (Dictionary_2_t833745832 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m638774149(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m638774149_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1050705630_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1050705630(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1050705630_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1170449695_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1170449695(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1170449695_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3566210484_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3566210484(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3566210484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2999565297_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2999565297(__this, method) ((  int32_t (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_get_Count_m2999565297_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Item(TKey)
extern "C"  Label_t2766254729  Dictionary_2_get_Item_m3547883356_gshared (Dictionary_2_t833745832 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3547883356(__this, ___key, method) ((  Label_t2766254729  (*) (Dictionary_2_t833745832 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m3547883356_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2056992613_gshared (Dictionary_2_t833745832 * __this, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2056992613(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t833745832 *, int32_t, Label_t2766254729 , const MethodInfo*))Dictionary_2_set_Item_m2056992613_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m4137582497_gshared (Dictionary_2_t833745832 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m4137582497(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t833745832 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m4137582497_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1796781880_gshared (Dictionary_2_t833745832 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1796781880(__this, ___size, method) ((  void (*) (Dictionary_2_t833745832 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1796781880_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m237703390_gshared (Dictionary_2_t833745832 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m237703390(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m237703390_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3686033440  Dictionary_2_make_pair_m1277678188_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1277678188(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t3686033440  (*) (Il2CppObject * /* static, unused */, int32_t, Label_t2766254729 , const MethodInfo*))Dictionary_2_make_pair_m1277678188_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m1974910902_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1974910902(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, Label_t2766254729 , const MethodInfo*))Dictionary_2_pick_key_m1974910902_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_value(TKey,TValue)
extern "C"  Label_t2766254729  Dictionary_2_pick_value_m1483117046_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1483117046(__this /* static, unused */, ___key, ___value, method) ((  Label_t2766254729  (*) (Il2CppObject * /* static, unused */, int32_t, Label_t2766254729 , const MethodInfo*))Dictionary_2_pick_value_m1483117046_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2522771241_gshared (Dictionary_2_t833745832 * __this, KeyValuePair_2U5BU5D_t1283019617* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2522771241(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t833745832 *, KeyValuePair_2U5BU5D_t1283019617*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2522771241_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Resize()
extern "C"  void Dictionary_2_Resize_m2065716115_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2065716115(__this, method) ((  void (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_Resize_m2065716115_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m444805628_gshared (Dictionary_2_t833745832 * __this, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m444805628(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t833745832 *, int32_t, Label_t2766254729 , const MethodInfo*))Dictionary_2_Add_m444805628_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Clear()
extern "C"  void Dictionary_2_Clear_m3442407368_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3442407368(__this, method) ((  void (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_Clear_m3442407368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m712756244_gshared (Dictionary_2_t833745832 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m712756244(__this, ___key, method) ((  bool (*) (Dictionary_2_t833745832 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m712756244_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1674754740_gshared (Dictionary_2_t833745832 * __this, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1674754740(__this, ___value, method) ((  bool (*) (Dictionary_2_t833745832 *, Label_t2766254729 , const MethodInfo*))Dictionary_2_ContainsValue_m1674754740_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2529611545_gshared (Dictionary_2_t833745832 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2529611545(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t833745832 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2_GetObjectData_m2529611545_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1471785509_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1471785509(__this, ___sender, method) ((  void (*) (Dictionary_2_t833745832 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1471785509_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3708265808_gshared (Dictionary_2_t833745832 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m3708265808(__this, ___key, method) ((  bool (*) (Dictionary_2_t833745832 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m3708265808_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1253677461_gshared (Dictionary_2_t833745832 * __this, int32_t ___key, Label_t2766254729 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1253677461(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t833745832 *, int32_t, Label_t2766254729 *, const MethodInfo*))Dictionary_2_TryGetValue_m1253677461_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Keys()
extern "C"  KeyCollection_t2692921188 * Dictionary_2_get_Keys_m1681172752_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1681172752(__this, method) ((  KeyCollection_t2692921188 * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_get_Keys_m1681172752_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Values()
extern "C"  ValueCollection_t1806077484 * Dictionary_2_get_Values_m497108920_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m497108920(__this, method) ((  ValueCollection_t1806077484 * (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_get_Values_m497108920_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m4007525955_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m4007525955(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t833745832 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m4007525955_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTValue(System.Object)
extern "C"  Label_t2766254729  Dictionary_2_ToTValue_m3087822123_gshared (Dictionary_2_t833745832 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3087822123(__this, ___value, method) ((  Label_t2766254729  (*) (Dictionary_2_t833745832 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3087822123_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2182015149_gshared (Dictionary_2_t833745832 * __this, KeyValuePair_2_t3686033440  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2182015149(__this, ___pair, method) ((  bool (*) (Dictionary_2_t833745832 *, KeyValuePair_2_t3686033440 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2182015149_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C"  Enumerator_t2426041854  Dictionary_2_GetEnumerator_m507501620_gshared (Dictionary_2_t833745832 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m507501620(__this, method) ((  Enumerator_t2426041854  (*) (Dictionary_2_t833745832 *, const MethodInfo*))Dictionary_2_GetEnumerator_m507501620_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Dictionary_2_U3CCopyToU3Em__2_m1293939133_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key, Label_t2766254729  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m1293939133(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Il2CppObject * /* static, unused */, int32_t, Label_t2766254729 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m1293939133_gshared)(__this /* static, unused */, ___key, ___value, method)
