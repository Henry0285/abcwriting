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

// System.Data.TableMappingCollection
struct TableMappingCollection_t440988401;
// System.Data.TableMapping
struct TableMapping_t1043808253;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_TableMapping1043808253.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.TableMappingCollection::.ctor()
extern "C"  void TableMappingCollection__ctor_m2646464817 (TableMappingCollection_t440988401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMappingCollection::Add(System.Data.TableMapping)
extern "C"  void TableMappingCollection_Add_m2854072319 (TableMappingCollection_t440988401 * __this, TableMapping_t1043808253 * ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.TableMappingCollection::get_Item(System.String)
extern "C"  TableMapping_t1043808253 * TableMappingCollection_get_Item_m200652439 (TableMappingCollection_t440988401 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
