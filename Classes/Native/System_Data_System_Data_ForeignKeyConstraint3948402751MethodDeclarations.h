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

// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3948402751;
// System.String
struct String_t;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.Data.ConstraintCollection
struct ConstraintCollection_t571689508;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_ConstraintCollection571689508.h"
#include "System_Data_System_Data_AcceptRejectRule2959144382.h"
#include "System_Data_System_Data_Rule146695665.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataColumn1080745049.h"

// System.Void System.Data.ForeignKeyConstraint::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__ctor_m2128830283 (ForeignKeyConstraint_t3948402751 * __this, String_t* ___constraintName, DataColumnU5BU5D_t2781139492* ___parentColumns, DataColumnU5BU5D_t2781139492* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_foreignKeyConstraint(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__foreignKeyConstraint_m3955867796 (ForeignKeyConstraint_t3948402751 * __this, String_t* ___constraintName, DataColumnU5BU5D_t2781139492* ___parentColumns, DataColumnU5BU5D_t2781139492* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_validateColumns(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__validateColumns_m3758608565 (ForeignKeyConstraint_t3948402751 * __this, DataColumnU5BU5D_t2781139492* ___parentColumns, DataColumnU5BU5D_t2781139492* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_ensureUniqueConstraintExists(System.Data.ConstraintCollection,System.Data.DataColumn[])
extern "C"  void ForeignKeyConstraint__ensureUniqueConstraintExists_m3306761849 (ForeignKeyConstraint_t3948402751 * __this, ConstraintCollection_t571689508 * ___collection, DataColumnU5BU5D_t2781139492* ___parentColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::get_AcceptRejectRule()
extern "C"  int32_t ForeignKeyConstraint_get_AcceptRejectRule_m3777211048 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_AcceptRejectRule(System.Data.AcceptRejectRule)
extern "C"  void ForeignKeyConstraint_set_AcceptRejectRule_m1234627173 (ForeignKeyConstraint_t3948402751 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_Columns()
extern "C"  DataColumnU5BU5D_t2781139492* ForeignKeyConstraint_get_Columns_m990112067 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Rule System.Data.ForeignKeyConstraint::get_DeleteRule()
extern "C"  int32_t ForeignKeyConstraint_get_DeleteRule_m2644222531 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_DeleteRule(System.Data.Rule)
extern "C"  void ForeignKeyConstraint_set_DeleteRule_m4136341904 (ForeignKeyConstraint_t3948402751 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Rule System.Data.ForeignKeyConstraint::get_UpdateRule()
extern "C"  int32_t ForeignKeyConstraint_get_UpdateRule_m1115425599 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_UpdateRule(System.Data.Rule)
extern "C"  void ForeignKeyConstraint_set_UpdateRule_m2674286782 (ForeignKeyConstraint_t3948402751 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_RelatedColumns()
extern "C"  DataColumnU5BU5D_t2781139492* ForeignKeyConstraint_get_RelatedColumns_m678624218 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ForeignKeyConstraint::get_RelatedTable()
extern "C"  DataTable_t1931745339 * ForeignKeyConstraint_get_RelatedTable_m2407910977 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ForeignKeyConstraint::get_Table()
extern "C"  DataTable_t1931745339 * ForeignKeyConstraint_get_Table_m1890734610 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::Equals(System.Object)
extern "C"  bool ForeignKeyConstraint_Equals_m3269151536 (ForeignKeyConstraint_t3948402751 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ForeignKeyConstraint::GetHashCode()
extern "C"  int32_t ForeignKeyConstraint_GetHashCode_m3269428148 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
extern "C"  void ForeignKeyConstraint_AddToConstraintCollectionSetup_m2798744861 (ForeignKeyConstraint_t3948402751 * __this, ConstraintCollection_t571689508 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
extern "C"  void ForeignKeyConstraint_RemoveFromConstraintCollectionCleanup_m1742061778 (ForeignKeyConstraint_t3948402751 * __this, ConstraintCollection_t571689508 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::IsConstraintViolated()
extern "C"  bool ForeignKeyConstraint_IsConstraintViolated_m742606596 (ForeignKeyConstraint_t3948402751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::AssertConstraint(System.Data.DataRow)
extern "C"  void ForeignKeyConstraint_AssertConstraint_m3702921505 (ForeignKeyConstraint_t3948402751 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::IsColumnContained(System.Data.DataColumn)
extern "C"  bool ForeignKeyConstraint_IsColumnContained_m1663612575 (ForeignKeyConstraint_t3948402751 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
extern "C"  bool ForeignKeyConstraint_CanRemoveFromCollection_m1280457764 (ForeignKeyConstraint_t3948402751 * __this, ConstraintCollection_t571689508 * ___col, bool ___shouldThrow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.ForeignKeyConstraint::GetErrorMessage(System.Data.DataRow)
extern "C"  String_t* ForeignKeyConstraint_GetErrorMessage_m4248031506 (ForeignKeyConstraint_t3948402751 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
