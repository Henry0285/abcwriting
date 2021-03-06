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

// System.Data.DataRelation
struct DataRelation_t3033993051;
// System.String
struct String_t;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3948402751;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Data.PropertyCollection
struct PropertyCollection_t1951657822;
// System.Data.UniqueConstraint
struct UniqueConstraint_t2586895203;
// System.Data.ConstraintCollection
struct ConstraintCollection_t571689508;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "System_Data_System_Data_ForeignKeyConstraint3948402751.h"
#include "System_Data_System_Data_UniqueConstraint2586895203.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Data_System_Data_ConstraintCollection571689508.h"

// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void DataRelation__ctor_m2284500473 (DataRelation_t3033993051 * __this, String_t* ___relationName, DataColumnU5BU5D_t2781139492* ___parentColumns, DataColumnU5BU5D_t2781139492* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn,System.Data.DataColumn,System.Boolean)
extern "C"  void DataRelation__ctor_m2783385514 (DataRelation_t3033993051 * __this, String_t* ___relationName, DataColumn_t1080745049 * ___parentColumn, DataColumn_t1080745049 * ___childColumn, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[],System.Boolean)
extern "C"  void DataRelation__ctor_m3599726538 (DataRelation_t3033993051 * __this, String_t* ___relationName, DataColumnU5BU5D_t2781139492* ___parentColumns, DataColumnU5BU5D_t2781139492* ___childColumns, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumns()
extern "C"  DataColumnU5BU5D_t2781139492* DataRelation_get_ChildColumns_m4110784615 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.DataRelation::get_ChildKeyConstraint()
extern "C"  ForeignKeyConstraint_t3948402751 * DataRelation_get_ChildKeyConstraint_m1561186900 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetChildKeyConstraint(System.Data.ForeignKeyConstraint)
extern "C"  void DataRelation_SetChildKeyConstraint_m1855702332 (DataRelation_t3033993051 * __this, ForeignKeyConstraint_t3948402751 * ___foreignKeyConstraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRelation::get_ChildTable()
extern "C"  DataTable_t1931745339 * DataRelation_get_ChildTable_m2591824906 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelation::get_DataSet()
extern "C"  DataSet_t646994783 * DataRelation_get_DataSet_m271651938 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataRelation::get_ExtendedProperties()
extern "C"  PropertyCollection_t1951657822 * DataRelation_get_ExtendedProperties_m165401023 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::get_Nested()
extern "C"  bool DataRelation_get_Nested_m3359669723 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::set_Nested(System.Boolean)
extern "C"  void DataRelation_set_Nested_m2935088302 (DataRelation_t3033993051 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumns()
extern "C"  DataColumnU5BU5D_t2781139492* DataRelation_get_ParentColumns_m560766689 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.DataRelation::get_ParentKeyConstraint()
extern "C"  UniqueConstraint_t2586895203 * DataRelation_get_ParentKeyConstraint_m2835789088 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetParentKeyConstraint(System.Data.UniqueConstraint)
extern "C"  void DataRelation_SetParentKeyConstraint_m1778542002 (DataRelation_t3033993051 * __this, UniqueConstraint_t2586895203 * ___uniqueConstraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetDataSet(System.Data.DataSet)
extern "C"  void DataRelation_SetDataSet_m3137689200 (DataRelation_t3033993051 * __this, DataSet_t646994783 * ___ds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRelation::get_ParentTable()
extern "C"  DataTable_t1931745339 * DataRelation_get_ParentTable_m2581567118 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelation::get_RelationName()
extern "C"  String_t* DataRelation_get_RelationName_m2319296786 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::set_RelationName(System.String)
extern "C"  void DataRelation_set_RelationName_m1017825017 (DataRelation_t3033993051 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelation::ToString()
extern "C"  String_t* DataRelation_ToString_m3243382636 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::UpdateConstraints()
extern "C"  void DataRelation_UpdateConstraints_m1932355078 (DataRelation_t3033993051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::CompareDataColumns(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  bool DataRelation_CompareDataColumns_m1153732413 (Il2CppObject * __this /* static, unused */, DataColumnU5BU5D_t2781139492* ___dc1, DataColumnU5BU5D_t2781139492* ___dc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.DataRelation::FindForeignKey(System.Data.ConstraintCollection)
extern "C"  ForeignKeyConstraint_t3948402751 * DataRelation_FindForeignKey_m2773438151 (DataRelation_t3033993051 * __this, ConstraintCollection_t571689508 * ___cl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.DataRelation::FindUniqueConstraint(System.Data.ConstraintCollection)
extern "C"  UniqueConstraint_t2586895203 * DataRelation_FindUniqueConstraint_m1918176442 (DataRelation_t3033993051 * __this, ConstraintCollection_t571689508 * ___cl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::Contains(System.Data.DataColumn)
extern "C"  bool DataRelation_Contains_m2169627211 (DataRelation_t3033993051 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
