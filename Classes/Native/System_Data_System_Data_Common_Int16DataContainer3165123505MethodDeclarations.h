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

// System.Data.Common.Int16DataContainer
struct Int16DataContainer_t3165123505;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.Int16DataContainer::.ctor()
extern "C"  void Int16DataContainer__ctor_m823801677 (Int16DataContainer_t3165123505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int16DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * Int16DataContainer_GetValue_m2809515196 (Int16DataContainer_t3165123505 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::ZeroOut(System.Int32)
extern "C"  void Int16DataContainer_ZeroOut_m1642555562 (Int16DataContainer_t3165123505 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void Int16DataContainer_SetValue_m2534866259 (Int16DataContainer_t3165123505 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void Int16DataContainer_SetValueFromSafeDataRecord_m3879835284 (Int16DataContainer_t3165123505 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void Int16DataContainer_DoCopyValue_m3770042617 (Int16DataContainer_t3165123505 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int16DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t Int16DataContainer_DoCompareValues_m2033627911 (Int16DataContainer_t3165123505 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int16DataContainer::Resize(System.Int32)
extern "C"  void Int16DataContainer_Resize_m748345420 (Int16DataContainer_t3165123505 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int16DataContainer::GetInt64(System.Int32)
extern "C"  int64_t Int16DataContainer_GetInt64_m1739776556 (Int16DataContainer_t3165123505 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
