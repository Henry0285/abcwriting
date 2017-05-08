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

// System.Data.Common.UInt64DataContainer
struct UInt64DataContainer_t1213961189;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.UInt64DataContainer::.ctor()
extern "C"  void UInt64DataContainer__ctor_m2219447413 (UInt64DataContainer_t1213961189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt64DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * UInt64DataContainer_GetValue_m1592687620 (UInt64DataContainer_t1213961189 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::ZeroOut(System.Int32)
extern "C"  void UInt64DataContainer_ZeroOut_m3098424284 (UInt64DataContainer_t1213961189 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void UInt64DataContainer_SetValue_m2343430395 (UInt64DataContainer_t1213961189 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void UInt64DataContainer_SetValueFromSafeDataRecord_m3509768950 (UInt64DataContainer_t1213961189 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void UInt64DataContainer_DoCopyValue_m3425654385 (UInt64DataContainer_t1213961189 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt64DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t UInt64DataContainer_DoCompareValues_m249615671 (UInt64DataContainer_t1213961189 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt64DataContainer::Resize(System.Int32)
extern "C"  void UInt64DataContainer_Resize_m642028878 (UInt64DataContainer_t1213961189 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt64DataContainer::GetInt64(System.Int32)
extern "C"  int64_t UInt64DataContainer_GetInt64_m1037484452 (UInt64DataContainer_t1213961189 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
