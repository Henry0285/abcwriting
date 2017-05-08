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

// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t499212429;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.MergeFailedEventArgs::.ctor(System.Data.DataTable,System.String)
extern "C"  void MergeFailedEventArgs__ctor_m8967466 (MergeFailedEventArgs_t499212429 * __this, DataTable_t1931745339 * ___table, String_t* ___conflict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.MergeFailedEventArgs::get_Conflict()
extern "C"  String_t* MergeFailedEventArgs_get_Conflict_m3587539311 (MergeFailedEventArgs_t499212429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
