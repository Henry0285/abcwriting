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

// System.Data.Common.UInt16DataContainer
struct UInt16DataContainer_t1946510274;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.UInt16DataContainer::.ctor()
extern "C"  void UInt16DataContainer__ctor_m2393169946 (UInt16DataContainer_t1946510274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt16DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * UInt16DataContainer_GetValue_m3409036137 (UInt16DataContainer_t1946510274 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::ZeroOut(System.Int32)
extern "C"  void UInt16DataContainer_ZeroOut_m1586640393 (UInt16DataContainer_t1946510274 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void UInt16DataContainer_SetValue_m1749254986 (UInt16DataContainer_t1946510274 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void UInt16DataContainer_SetValueFromSafeDataRecord_m3553619343 (UInt16DataContainer_t1946510274 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void UInt16DataContainer_DoCopyValue_m3437516886 (UInt16DataContainer_t1946510274 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt16DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t UInt16DataContainer_DoCompareValues_m2795583060 (UInt16DataContainer_t1946510274 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt16DataContainer::Resize(System.Int32)
extern "C"  void UInt16DataContainer_Resize_m2008270631 (UInt16DataContainer_t1946510274 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt16DataContainer::GetInt64(System.Int32)
extern "C"  int64_t UInt16DataContainer_GetInt64_m3656323471 (UInt16DataContainer_t1946510274 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
