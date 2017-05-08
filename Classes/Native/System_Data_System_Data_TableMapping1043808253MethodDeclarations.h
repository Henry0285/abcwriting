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

// System.Data.TableMapping
struct TableMapping_t1043808253;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataTable1931745339.h"

// System.Void System.Data.TableMapping::.ctor(System.String,System.String)
extern "C"  void TableMapping__ctor_m918666767 (TableMapping_t1043808253 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMapping::.ctor(System.Data.DataTable)
extern "C"  void TableMapping__ctor_m3736348282 (TableMapping_t1043808253 * __this, DataTable_t1931745339 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.TableMapping::get_ExistsInDataSet()
extern "C"  bool TableMapping_get_ExistsInDataSet_m3667819711 (TableMapping_t1043808253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.TableMapping::GetColumn(System.String)
extern "C"  DataColumn_t1080745049 * TableMapping_GetColumn_m2381823481 (TableMapping_t1043808253 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMapping::RemoveElementColumn(System.String)
extern "C"  void TableMapping_RemoveElementColumn_m3120156395 (TableMapping_t1043808253 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
