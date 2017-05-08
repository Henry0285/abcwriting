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

// System.Data.Common.SingleDataContainer
struct SingleDataContainer_t423854759;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.SingleDataContainer::.ctor()
extern "C"  void SingleDataContainer__ctor_m3990898615 (SingleDataContainer_t423854759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.SingleDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * SingleDataContainer_GetValue_m4177433430 (SingleDataContainer_t423854759 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::ZeroOut(System.Int32)
extern "C"  void SingleDataContainer_ZeroOut_m679085142 (SingleDataContainer_t423854759 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void SingleDataContainer_SetValue_m144749293 (SingleDataContainer_t423854759 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void SingleDataContainer_SetValueFromSafeDataRecord_m370907816 (SingleDataContainer_t423854759 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void SingleDataContainer_DoCopyValue_m3046809183 (SingleDataContainer_t423854759 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.SingleDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t SingleDataContainer_DoCompareValues_m2151572969 (SingleDataContainer_t423854759 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.SingleDataContainer::Resize(System.Int32)
extern "C"  void SingleDataContainer_Resize_m711109808 (SingleDataContainer_t423854759 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.SingleDataContainer::GetInt64(System.Int32)
extern "C"  int64_t SingleDataContainer_GetInt64_m1969453578 (SingleDataContainer_t423854759 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
