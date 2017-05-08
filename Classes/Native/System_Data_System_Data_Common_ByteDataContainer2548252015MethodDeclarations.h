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

// System.Data.Common.ByteDataContainer
struct ByteDataContainer_t2548252015;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.ByteDataContainer::.ctor()
extern "C"  void ByteDataContainer__ctor_m1891402387 (ByteDataContainer_t2548252015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.ByteDataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * ByteDataContainer_GetValue_m565693268 (ByteDataContainer_t2548252015 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::ZeroOut(System.Int32)
extern "C"  void ByteDataContainer_ZeroOut_m2849374356 (ByteDataContainer_t2548252015 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void ByteDataContainer_SetValue_m3616679101 (ByteDataContainer_t2548252015 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void ByteDataContainer_SetValueFromSafeDataRecord_m4158426018 (ByteDataContainer_t2548252015 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void ByteDataContainer_DoCopyValue_m3916851691 (ByteDataContainer_t2548252015 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.ByteDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t ByteDataContainer_DoCompareValues_m2836895697 (ByteDataContainer_t2548252015 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.ByteDataContainer::Resize(System.Int32)
extern "C"  void ByteDataContainer_Resize_m1596179050 (ByteDataContainer_t2548252015 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.ByteDataContainer::GetInt64(System.Int32)
extern "C"  int64_t ByteDataContainer_GetInt64_m1210651696 (ByteDataContainer_t2548252015 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
