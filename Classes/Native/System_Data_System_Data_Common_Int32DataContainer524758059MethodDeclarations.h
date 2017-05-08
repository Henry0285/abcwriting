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

// System.Data.Common.Int32DataContainer
struct Int32DataContainer_t524758059;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.Int32DataContainer::.ctor()
extern "C"  void Int32DataContainer__ctor_m3749702815 (Int32DataContainer_t524758059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int32DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * Int32DataContainer_GetValue_m2166400782 (Int32DataContainer_t524758059 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::ZeroOut(System.Int32)
extern "C"  void Int32DataContainer_ZeroOut_m379537428 (Int32DataContainer_t524758059 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void Int32DataContainer_SetValue_m4226101953 (Int32DataContainer_t524758059 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void Int32DataContainer_SetValueFromSafeDataRecord_m2831106178 (Int32DataContainer_t524758059 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void Int32DataContainer_DoCopyValue_m498657703 (Int32DataContainer_t524758059 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int32DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t Int32DataContainer_DoCompareValues_m951900161 (Int32DataContainer_t524758059 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int32DataContainer::Resize(System.Int32)
extern "C"  void Int32DataContainer_Resize_m280710074 (Int32DataContainer_t524758059 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int32DataContainer::GetInt64(System.Int32)
extern "C"  int64_t Int32DataContainer_GetInt64_m842209822 (Int32DataContainer_t524758059 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
