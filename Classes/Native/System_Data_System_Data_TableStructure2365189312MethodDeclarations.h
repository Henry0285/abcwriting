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

// System.Data.TableStructure
struct TableStructure_t2365189312;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.TableStructure::.ctor(System.Data.DataTable)
extern "C"  void TableStructure__ctor_m2898989693 (TableStructure_t2365189312 * __this, DataTable_t1931745339 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.TableStructure::ContainsColumn(System.String)
extern "C"  bool TableStructure_ContainsColumn_m4092610217 (TableStructure_t2365189312 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
