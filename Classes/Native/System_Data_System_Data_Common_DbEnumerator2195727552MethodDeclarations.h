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

// System.Data.Common.DbEnumerator
struct DbEnumerator_t2195727552;
// System.Data.IDataReader
struct IDataReader_t1583822747;
// System.Object
struct Il2CppObject;
// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t162982812;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Data.Common.DbEnumerator::.ctor(System.Data.IDataReader,System.Boolean)
extern "C"  void DbEnumerator__ctor_m1342530734 (DbEnumerator_t2195727552 * __this, Il2CppObject * ___reader, bool ___closeReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DbEnumerator::get_Current()
extern "C"  Il2CppObject * DbEnumerator_get_Current_m994520989 (DbEnumerator_t2195727552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.SchemaInfo[] System.Data.Common.DbEnumerator::LoadSchema(System.Data.IDataReader)
extern "C"  SchemaInfoU5BU5D_t162982812* DbEnumerator_LoadSchema_m1612921104 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DbEnumerator::MoveNext()
extern "C"  bool DbEnumerator_MoveNext_m2943197904 (DbEnumerator_t2195727552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DbEnumerator::Reset()
extern "C"  void DbEnumerator_Reset_m4131234289 (DbEnumerator_t2195727552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
