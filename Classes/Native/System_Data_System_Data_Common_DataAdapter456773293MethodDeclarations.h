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

// System.Data.Common.DataAdapter
struct DataAdapter_t456773293;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t845819338;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.IDataReader
struct IDataReader_t1583822747;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Data.FillErrorEventArgs
struct FillErrorEventArgs_t577193385;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Exception
struct Exception_t1145979430;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_MissingMappingAction3124835611.h"
#include "System_Data_System_Data_MissingSchemaAction1278884340.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_SchemaType2496304954.h"
#include "System_Data_System_Data_Common_DataTableMappingColl845819338.h"
#include "System_Data_System_Data_FillErrorEventArgs577193385.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.Common.DataAdapter::.ctor()
extern "C"  void DataAdapter__ctor_m2487176329 (DataAdapter_t456773293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataAdapter::get_AcceptChangesDuringFill()
extern "C"  bool DataAdapter_get_AcceptChangesDuringFill_m2840111909 (DataAdapter_t456773293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.MissingMappingAction System.Data.Common.DataAdapter::get_MissingMappingAction()
extern "C"  int32_t DataAdapter_get_MissingMappingAction_m450913786 (DataAdapter_t456773293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.MissingSchemaAction System.Data.Common.DataAdapter::get_MissingSchemaAction()
extern "C"  int32_t DataAdapter_get_MissingSchemaAction_m2024824794 (DataAdapter_t456773293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::get_TableMappings()
extern "C"  DataTableMappingCollection_t845819338 * DataAdapter_get_TableMappings_m458804938 (DataAdapter_t456773293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataAdapter::Dispose(System.Boolean)
extern "C"  void DataAdapter_Dispose_m728997269 (DataAdapter_t456773293 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataAdapter::FillInternal(System.Data.DataTable,System.Data.IDataReader)
extern "C"  int32_t DataAdapter_FillInternal_m3661003597 (DataAdapter_t456773293 * __this, DataTable_t1931745339 * ___dataTable, Il2CppObject * ___dataReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.DataAdapter::BuildSchema(System.Data.IDataReader,System.Data.DataTable,System.Data.SchemaType)
extern "C"  Int32U5BU5D_t3315407976* DataAdapter_BuildSchema_m4069905408 (DataAdapter_t456773293 * __this, Il2CppObject * ___reader, DataTable_t1931745339 * ___table, int32_t ___schemaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.DataAdapter::BuildSchema(System.Data.IDataReader,System.Data.DataTable,System.Data.SchemaType,System.Data.MissingSchemaAction,System.Data.MissingMappingAction,System.Data.Common.DataTableMappingCollection)
extern "C"  Int32U5BU5D_t3315407976* DataAdapter_BuildSchema_m2304840519 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___reader, DataTable_t1931745339 * ___table, int32_t ___schemaType, int32_t ___missingSchAction, int32_t ___missingMapAction, DataTableMappingCollection_t845819338 * ___dtMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.DataAdapter::FillTable(System.Data.DataTable,System.Data.IDataReader,System.Int32,System.Int32,System.Int32&)
extern "C"  bool DataAdapter_FillTable_m1446027965 (DataAdapter_t456773293 * __this, DataTable_t1931745339 * ___dataTable, Il2CppObject * ___dataReader, int32_t ___startRecord, int32_t ___maxRecords, int32_t* ___counter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataAdapter::OnFillErrorInternal(System.Data.FillErrorEventArgs)
extern "C"  void DataAdapter_OnFillErrorInternal_m1049286981 (DataAdapter_t456773293 * __this, FillErrorEventArgs_t577193385 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.FillErrorEventArgs System.Data.Common.DataAdapter::CreateFillErrorEvent(System.Data.DataTable,System.Object[],System.Exception)
extern "C"  FillErrorEventArgs_t577193385 * DataAdapter_CreateFillErrorEvent_m783203119 (DataAdapter_t456773293 * __this, DataTable_t1931745339 * ___dataTable, ObjectU5BU5D_t3632007997* ___values, Exception_t1145979430 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataAdapter::SetupSchema(System.Data.SchemaType,System.String)
extern "C"  String_t* DataAdapter_SetupSchema_m3526691242 (DataAdapter_t456773293 * __this, int32_t ___schemaType, String_t* ___sourceTableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.DataAdapter::Fill(System.Data.DataTable,System.Data.IDataReader)
extern "C"  int32_t DataAdapter_Fill_m3731288262 (DataAdapter_t456773293 * __this, DataTable_t1931745339 * ___dataTable, Il2CppObject * ___dataReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataAdapter::OnFillError(System.Data.FillErrorEventArgs)
extern "C"  void DataAdapter_OnFillError_m3986864814 (DataAdapter_t456773293 * __this, FillErrorEventArgs_t577193385 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
