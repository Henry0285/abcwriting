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

// System.Data.Common.Int64DataContainer
struct Int64DataContainer_t852633474;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;
// System.Data.Common.DataContainer
struct DataContainer_t245809077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_Common_DataContainer245809077.h"

// System.Void System.Data.Common.Int64DataContainer::.ctor()
extern "C"  void Int64DataContainer__ctor_m2270455396 (Int64DataContainer_t852633474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.Int64DataContainer::GetValue(System.Int32)
extern "C"  Il2CppObject * Int64DataContainer_GetValue_m3892396757 (Int64DataContainer_t852633474 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::ZeroOut(System.Int32)
extern "C"  void Int64DataContainer_ZeroOut_m3018218201 (Int64DataContainer_t852633474 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::SetValue(System.Int32,System.Object)
extern "C"  void Int64DataContainer_SetValue_m233655184 (Int64DataContainer_t852633474 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void Int64DataContainer_SetValueFromSafeDataRecord_m2296427727 (Int64DataContainer_t852633474 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::DoCopyValue(System.Data.Common.DataContainer,System.Int32,System.Int32)
extern "C"  void Int64DataContainer_DoCopyValue_m1280700192 (Int64DataContainer_t852633474 * __this, DataContainer_t245809077 * ___from, int32_t ___from_index, int32_t ___to_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Int64DataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t Int64DataContainer_DoCompareValues_m1133701518 (Int64DataContainer_t852633474 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Int64DataContainer::Resize(System.Int32)
extern "C"  void Int64DataContainer_Resize_m4154118855 (Int64DataContainer_t852633474 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.Common.Int64DataContainer::GetInt64(System.Int32)
extern "C"  int64_t Int64DataContainer_GetInt64_m2667305779 (Int64DataContainer_t852633474 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
