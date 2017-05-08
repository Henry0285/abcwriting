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

// System.Collections.BitArray
struct BitArray_t1153580258;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_BitArray1153580258.h"
#include "mscorlib_System_Array4136897760.h"

// System.Void System.Collections.BitArray::.ctor(System.Collections.BitArray)
extern "C"  void BitArray__ctor_m299314540 (BitArray_t1153580258 * __this, BitArray_t1153580258 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::.ctor(System.Int32)
extern "C"  void BitArray__ctor_m2097456003 (BitArray_t1153580258 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Collections.BitArray::getByte(System.Int32)
extern "C"  uint8_t BitArray_getByte_m3213953369 (BitArray_t1153580258 * __this, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.BitArray::get_Count()
extern "C"  int32_t BitArray_get_Count_m2234414662 (BitArray_t1153580258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::get_IsSynchronized()
extern "C"  bool BitArray_get_IsSynchronized_m1008223827 (BitArray_t1153580258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::get_Item(System.Int32)
extern "C"  bool BitArray_get_Item_m3110014315 (BitArray_t1153580258 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::set_Item(System.Int32,System.Boolean)
extern "C"  void BitArray_set_Item_m3801461194 (BitArray_t1153580258 * __this, int32_t ___index, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.BitArray::get_Length()
extern "C"  int32_t BitArray_get_Length_m496691485 (BitArray_t1153580258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::set_Length(System.Int32)
extern "C"  void BitArray_set_Length_m2083275088 (BitArray_t1153580258 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.BitArray::get_SyncRoot()
extern "C"  Il2CppObject * BitArray_get_SyncRoot_m93225619 (BitArray_t1153580258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.BitArray::Clone()
extern "C"  Il2CppObject * BitArray_Clone_m2745235396 (BitArray_t1153580258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::CopyTo(System.Array,System.Int32)
extern "C"  void BitArray_CopyTo_m2910588211 (BitArray_t1153580258 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::Get(System.Int32)
extern "C"  bool BitArray_Get_m659851701 (BitArray_t1153580258 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::Set(System.Int32,System.Boolean)
extern "C"  void BitArray_Set_m2878881714 (BitArray_t1153580258 * __this, int32_t ___index, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.BitArray::GetEnumerator()
extern "C"  Il2CppObject * BitArray_GetEnumerator_m3178154410 (BitArray_t1153580258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;