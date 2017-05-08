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

// System.Data.RelationStructureCollection
struct RelationStructureCollection_t4052480210;
// System.Data.RelationStructure
struct RelationStructure_t3076676356;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_RelationStructure3076676356.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.RelationStructureCollection::.ctor()
extern "C"  void RelationStructureCollection__ctor_m2407712646 (RelationStructureCollection_t4052480210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.RelationStructureCollection::Add(System.Data.RelationStructure)
extern "C"  void RelationStructureCollection_Add_m2861766835 (RelationStructureCollection_t4052480210 * __this, RelationStructure_t3076676356 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.RelationStructure System.Data.RelationStructureCollection::get_Item(System.String,System.String)
extern "C"  RelationStructure_t3076676356 * RelationStructureCollection_get_Item_m2836496173 (RelationStructureCollection_t4052480210 * __this, String_t* ___parent, String_t* ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
