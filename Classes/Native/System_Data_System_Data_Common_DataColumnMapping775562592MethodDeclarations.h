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

// System.Data.Common.DataColumnMapping
struct DataColumnMapping_t775562592;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "mscorlib_System_Type77837473.h"
#include "System_Data_System_Data_MissingSchemaAction1278884340.h"

// System.Void System.Data.Common.DataColumnMapping::.ctor(System.String,System.String)
extern "C"  void DataColumnMapping__ctor_m3932988470 (DataColumnMapping_t775562592 * __this, String_t* ___sourceColumn, String_t* ___dataSetColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMapping::System.ICloneable.Clone()
extern "C"  Il2CppObject * DataColumnMapping_System_ICloneable_Clone_m3030294887 (DataColumnMapping_t775562592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataColumnMapping::get_DataSetColumn()
extern "C"  String_t* DataColumnMapping_get_DataSetColumn_m2622953122 (DataColumnMapping_t775562592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataColumnMapping::get_SourceColumn()
extern "C"  String_t* DataColumnMapping_get_SourceColumn_m1057369331 (DataColumnMapping_t775562592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.Common.DataColumnMapping::GetDataColumnBySchemaAction(System.Data.DataTable,System.Type,System.Data.MissingSchemaAction)
extern "C"  DataColumn_t1080745049 * DataColumnMapping_GetDataColumnBySchemaAction_m2903560928 (DataColumnMapping_t775562592 * __this, DataTable_t1931745339 * ___dataTable, Type_t * ___dataType, int32_t ___schemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataColumnMapping::ToString()
extern "C"  String_t* DataColumnMapping_ToString_m3481771403 (DataColumnMapping_t775562592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
