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

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t1055659596;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t110721469;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Collections.ICollection
struct ICollection_t2033110931;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t726187437;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t2209788164;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1087952561;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t2914834952;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t2027991248;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23907947204.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2647955617.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m124580243_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m124580243(__this, method) ((  void (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2__ctor_m124580243_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2326253746_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m2326253746(__this, ___comparer, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2326253746_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m4124809118_gshared (Dictionary_2_t1055659596 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m4124809118(__this, ___capacity, method) ((  void (*) (Dictionary_2_t1055659596 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m4124809118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m911950084_gshared (Dictionary_2_t1055659596 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m911950084(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1055659596 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2__ctor_m911950084_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1813892273_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1813892273(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1813892273_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m801292737_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m801292737(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m801292737_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3718341703_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3718341703(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3718341703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1687041320_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1687041320(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1687041320_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3508451905_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3508451905(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3508451905_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m220046645_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m220046645(__this, ___key, method) ((  bool (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m220046645_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m4271917748_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m4271917748(__this, ___key, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m4271917748_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2486839199_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2486839199(__this, method) ((  bool (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2486839199_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4071822443_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4071822443(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4071822443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m888307177_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m888307177(__this, method) ((  bool (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m888307177_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2109085310_gshared (Dictionary_2_t1055659596 * __this, KeyValuePair_2_t3907947204  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2109085310(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t1055659596 *, KeyValuePair_2_t3907947204 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2109085310_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m702018262_gshared (Dictionary_2_t1055659596 * __this, KeyValuePair_2_t3907947204  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m702018262(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1055659596 *, KeyValuePair_2_t3907947204 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m702018262_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3986830834_gshared (Dictionary_2_t1055659596 * __this, KeyValuePair_2U5BU5D_t726187437* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3986830834(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1055659596 *, KeyValuePair_2U5BU5D_t726187437*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3986830834_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m726496379_gshared (Dictionary_2_t1055659596 * __this, KeyValuePair_2_t3907947204  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m726496379(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1055659596 *, KeyValuePair_2_t3907947204 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m726496379_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1208203871_gshared (Dictionary_2_t1055659596 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1208203871(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1208203871_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1197244232_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1197244232(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1197244232_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1100726089_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1100726089(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1100726089_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3328478662_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3328478662(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3328478662_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m448824823_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m448824823(__this, method) ((  int32_t (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_get_Count_m448824823_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m3471279138_gshared (Dictionary_2_t1055659596 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3471279138(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m3471279138_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m833853867_gshared (Dictionary_2_t1055659596 * __this, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m833853867(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1055659596 *, int64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m833853867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m714553675_gshared (Dictionary_2_t1055659596 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m714553675(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t1055659596 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m714553675_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2616434050_gshared (Dictionary_2_t1055659596 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2616434050(__this, ___size, method) ((  void (*) (Dictionary_2_t1055659596 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2616434050_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2218457516_gshared (Dictionary_2_t1055659596 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2218457516(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2218457516_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3907947204  Dictionary_2_make_pair_m1191177978_gshared (Il2CppObject * __this /* static, unused */, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1191177978(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t3907947204  (*) (Il2CppObject * /* static, unused */, int64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m1191177978_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C"  int64_t Dictionary_2_pick_key_m2837971332_gshared (Il2CppObject * __this /* static, unused */, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m2837971332(__this /* static, unused */, ___key, ___value, method) ((  int64_t (*) (Il2CppObject * /* static, unused */, int64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m2837971332_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m505674372_gshared (Il2CppObject * __this /* static, unused */, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m505674372(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, int64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m505674372_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m464317087_gshared (Dictionary_2_t1055659596 * __this, KeyValuePair_2U5BU5D_t726187437* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m464317087(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1055659596 *, KeyValuePair_2U5BU5D_t726187437*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m464317087_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m712255353_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m712255353(__this, method) ((  void (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_Resize_m712255353_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m4090877298_gshared (Dictionary_2_t1055659596 * __this, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m4090877298(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1055659596 *, int64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m4090877298_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m2719677234_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2719677234(__this, method) ((  void (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_Clear_m2719677234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1696530778_gshared (Dictionary_2_t1055659596 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1696530778(__this, ___key, method) ((  bool (*) (Dictionary_2_t1055659596 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m1696530778_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m708762778_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m708762778(__this, ___value, method) ((  bool (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m708762778_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2535477411_gshared (Dictionary_2_t1055659596 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2535477411(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1055659596 *, SerializationInfo_t1029367511 *, StreamingContext_t3848318932 , const MethodInfo*))Dictionary_2_GetObjectData_m2535477411_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m580017739_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m580017739(__this, ___sender, method) ((  void (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m580017739_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1021937566_gshared (Dictionary_2_t1055659596 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1021937566(__this, ___key, method) ((  bool (*) (Dictionary_2_t1055659596 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m1021937566_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2816326379_gshared (Dictionary_2_t1055659596 * __this, int64_t ___key, Il2CppObject ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2816326379(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t1055659596 *, int64_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m2816326379_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C"  KeyCollection_t2914834952 * Dictionary_2_get_Keys_m3224914778_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3224914778(__this, method) ((  KeyCollection_t2914834952 * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_get_Keys_m3224914778_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C"  ValueCollection_t2027991248 * Dictionary_2_get_Values_m1211041850_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1211041850(__this, method) ((  ValueCollection_t2027991248 * (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_get_Values_m1211041850_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C"  int64_t Dictionary_2_ToTKey_m3985428345_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3985428345(__this, ___key, method) ((  int64_t (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3985428345_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m2608319129_gshared (Dictionary_2_t1055659596 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2608319129(__this, ___value, method) ((  Il2CppObject * (*) (Dictionary_2_t1055659596 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2608319129_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2652199299_gshared (Dictionary_2_t1055659596 * __this, KeyValuePair_2_t3907947204  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2652199299(__this, ___pair, method) ((  bool (*) (Dictionary_2_t1055659596 *, KeyValuePair_2_t3907947204 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2652199299_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2647955618  Dictionary_2_GetEnumerator_m3878797192_gshared (Dictionary_2_t1055659596 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3878797192(__this, method) ((  Enumerator_t2647955618  (*) (Dictionary_2_t1055659596 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3878797192_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t1445113794  Dictionary_2_U3CCopyToU3Em__2_m2173854003_gshared (Il2CppObject * __this /* static, unused */, int64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m2173854003(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1445113794  (*) (Il2CppObject * /* static, unused */, int64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m2173854003_gshared)(__this /* static, unused */, ___key, ___value, method)
