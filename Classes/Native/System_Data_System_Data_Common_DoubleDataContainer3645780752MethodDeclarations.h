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

// System.Data.Common.DoubleDataContainer
struct DoubleDataContainer_t3645780752;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.DoubleDataContainer::.ctor()
extern "C"  void DoubleDataContainer__ctor_m2054132420 (DoubleDataContainer_t3645780752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DoubleDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * DoubleDataContainer_GetValue_m3865533269 (DoubleDataContainer_t3645780752 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::ZeroOut(System.Int32)
extern "C"  void DoubleDataContainer_ZeroOut_m3345681005 (DoubleDataContainer_t3645780752 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void DoubleDataContainer_SetValue_m1414443788 (DoubleDataContainer_t3645780752 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void DoubleDataContainer_SetValueFromSafeDataRecord_m2726853351 (DoubleDataContainer_t3645780752 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void DoubleDataContainer_DoCopyValue_m2420067904 (DoubleDataContainer_t3645780752 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DoubleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t DoubleDataContainer_DoCompareValues_m3033862146 (DoubleDataContainer_t3645780752 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DoubleDataContainer::Resize(System.Int32)
extern "C"  void DoubleDataContainer_Resize_m1703512831 (DoubleDataContainer_t3645780752 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.DoubleDataContainer::GetInt64(System.Int32)
extern "C"  int64_t DoubleDataContainer_GetInt64_m2835051727 (DoubleDataContainer_t3645780752 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
