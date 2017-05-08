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

// System.Data.Common.BitDataContainer
struct BitDataContainer_t3634605782;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.BitDataContainer::.ctor()
extern "C"  void BitDataContainer__ctor_m3119296016 (BitDataContainer_t3634605782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.BitDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * BitDataContainer_GetValue_m2028553007 (BitDataContainer_t3634605782 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::ZeroOut(System.Int32)
extern "C"  void BitDataContainer_ZeroOut_m3822633635 (BitDataContainer_t3634605782 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void BitDataContainer_SetValue_m3448247320 (BitDataContainer_t3634605782 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void BitDataContainer_SetValueFromSafeDataRecord_m1826486713 (BitDataContainer_t3634605782 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void BitDataContainer_DoCopyValue_m741258064 (BitDataContainer_t3634605782 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.BitDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t BitDataContainer_DoCompareValues_m1878317486 (BitDataContainer_t3634605782 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.BitDataContainer::Resize(System.Int32)
extern "C"  void BitDataContainer_Resize_m3769279761 (BitDataContainer_t3634605782 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.BitDataContainer::GetInt64(System.Int32)
extern "C"  int64_t BitDataContainer_GetInt64_m3810692201 (BitDataContainer_t3634605782 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
