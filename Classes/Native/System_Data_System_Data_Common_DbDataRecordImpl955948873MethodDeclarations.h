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

// System.Data.Common.DbDataRecordImpl
struct DbDataRecordImpl_t955948873;
// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t162982812;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.Common.DbDataRecordImpl::.ctor(System.Data.Common.SchemaInfo[],System.Object[])
extern "C"  void DbDataRecordImpl__ctor_m3862213960 (DbDataRecordImpl_t955948873 * __this, SchemaInfoU5BU5D_t162982812* ___schema, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DbDataRecordImpl::get_FieldCount()
extern "C"  int32_t DbDataRecordImpl_get_FieldCount_m1811398251 (DbDataRecordImpl_t955948873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DbDataRecordImpl::get_Item(System.String)
extern "C"  Il2CppObject * DbDataRecordImpl_get_Item_m1237666332 (DbDataRecordImpl_t955948873 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DbDataRecordImpl::get_Item(System.Int32)
extern "C"  Il2CppObject * DbDataRecordImpl_get_Item_m3574238497 (DbDataRecordImpl_t955948873 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbDataRecordImpl::GetDataTypeName(System.Int32)
extern "C"  String_t* DbDataRecordImpl_GetDataTypeName_m1204659322 (DbDataRecordImpl_t955948873 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.Common.DbDataRecordImpl::GetFieldType(System.Int32)
extern "C"  Type_t * DbDataRecordImpl_GetFieldType_m1271668414 (DbDataRecordImpl_t955948873 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DbDataRecordImpl::GetName(System.Int32)
extern "C"  String_t* DbDataRecordImpl_GetName_m833554930 (DbDataRecordImpl_t955948873 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DbDataRecordImpl::GetOrdinal(System.String)
extern "C"  int32_t DbDataRecordImpl_GetOrdinal_m677429086 (DbDataRecordImpl_t955948873 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DbDataRecordImpl::GetValue(System.Int32)
extern "C"  Il2CppObject * DbDataRecordImpl_GetValue_m33003152 (DbDataRecordImpl_t955948873 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DbDataRecordImpl::GetValues(System.Object[])
extern "C"  int32_t DbDataRecordImpl_GetValues_m4233779265 (DbDataRecordImpl_t955948873 * __this, ObjectU5BU5D_t3632007997* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DbDataRecordImpl::IsDBNull(System.Int32)
extern "C"  bool DbDataRecordImpl_IsDBNull_m529039411 (DbDataRecordImpl_t955948873 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
