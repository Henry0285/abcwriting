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

// System.Data.Common.UInt32DataContainer
struct UInt32DataContainer_t3245498260;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.UInt32DataContainer::.ctor()
extern "C"  void UInt32DataContainer__ctor_m4118789152 (UInt32DataContainer_t3245498260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.UInt32DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * UInt32DataContainer_GetValue_m962787439 (UInt32DataContainer_t3245498260 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::ZeroOut(System.Int32)
extern "C"  void UInt32DataContainer_ZeroOut_m1729276887 (UInt32DataContainer_t3245498260 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void UInt32DataContainer_SetValue_m906467716 (UInt32DataContainer_t3245498260 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void UInt32DataContainer_SetValueFromSafeDataRecord_m3576658249 (UInt32DataContainer_t3245498260 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void UInt32DataContainer_DoCopyValue_m3466059344 (UInt32DataContainer_t3245498260 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.UInt32DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t UInt32DataContainer_DoCompareValues_m1517294502 (UInt32DataContainer_t3245498260 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.UInt32DataContainer::Resize(System.Int32)
extern "C"  void UInt32DataContainer_Resize_m3818778465 (UInt32DataContainer_t3245498260 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.UInt32DataContainer::GetInt64(System.Int32)
extern "C"  int64_t UInt32DataContainer_GetInt64_m749338173 (UInt32DataContainer_t3245498260 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
