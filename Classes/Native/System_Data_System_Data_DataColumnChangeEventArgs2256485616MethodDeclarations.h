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

// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t2256485616;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Data.DataColumnChangeEventArgs::.ctor(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataColumnChangeEventArgs__ctor_m593451244 (DataColumnChangeEventArgs_t2256485616 * __this, DataRow_t3422932271 * ___row, DataColumn_t1080745049 * ___column, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventArgs::.ctor()
extern "C"  void DataColumnChangeEventArgs__ctor_m1114997944 (DataColumnChangeEventArgs_t2256485616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumnChangeEventArgs::get_ProposedValue()
extern "C"  Il2CppObject * DataColumnChangeEventArgs_get_ProposedValue_m1803913821 (DataColumnChangeEventArgs_t2256485616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventArgs::Initialize(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataColumnChangeEventArgs_Initialize_m3667499312 (DataColumnChangeEventArgs_t2256485616 * __this, DataRow_t3422932271 * ___row, DataColumn_t1080745049 * ___column, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
