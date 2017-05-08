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

// System.Data.FillErrorEventArgs
struct FillErrorEventArgs_t577193385;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void System.Data.FillErrorEventArgs::.ctor(System.Data.DataTable,System.Object[])
extern "C"  void FillErrorEventArgs__ctor_m3847190488 (FillErrorEventArgs_t577193385 * __this, DataTable_t1931745339 * ___dataTable, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.FillErrorEventArgs::get_Continue()
extern "C"  bool FillErrorEventArgs_get_Continue_m1069749433 (FillErrorEventArgs_t577193385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.FillErrorEventArgs::set_Continue(System.Boolean)
extern "C"  void FillErrorEventArgs_set_Continue_m629543938 (FillErrorEventArgs_t577193385 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.FillErrorEventArgs::set_Errors(System.Exception)
extern "C"  void FillErrorEventArgs_set_Errors_m2650811075 (FillErrorEventArgs_t577193385 * __this, Exception_t1145979430 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
