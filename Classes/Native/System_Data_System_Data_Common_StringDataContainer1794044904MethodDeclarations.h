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

// System.Data.Common.StringDataContainer
struct StringDataContainer_t1794044904;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.ISafeDataRecord
struct ISafeDataRecord_t3160403298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Data.Common.StringDataContainer::.ctor()
extern "C"  void StringDataContainer__ctor_m3347927960 (StringDataContainer_t1794044904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.StringDataContainer::SetValue(System.Int32,System.String)
extern "C"  void StringDataContainer_SetValue_m9686590 (StringDataContainer_t1794044904 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.StringDataContainer::SetValue(System.Int32,System.Object)
extern "C"  void StringDataContainer_SetValue_m2677576692 (StringDataContainer_t1794044904 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.StringDataContainer::SetValueFromSafeDataRecord(System.Int32,System.Data.ISafeDataRecord,System.Int32)
extern "C"  void StringDataContainer_SetValueFromSafeDataRecord_m4029547855 (StringDataContainer_t1794044904 * __this, int32_t ___index, Il2CppObject * ___record, int32_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.StringDataContainer::DoCompareValues(System.Int32,System.Int32)
extern "C"  int32_t StringDataContainer_DoCompareValues_m159841786 (StringDataContainer_t1794044904 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
