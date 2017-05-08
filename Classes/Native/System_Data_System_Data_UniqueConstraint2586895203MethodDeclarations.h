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

// System.Data.UniqueConstraint
struct UniqueConstraint_t2586895203;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.ConstraintCollection
struct ConstraintCollection_t571689508;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3948402751;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataColumn1080745049.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_ConstraintCollection571689508.h"
#include "System_Data_System_Data_UniqueConstraint2586895203.h"
#include "System_Data_System_Data_ForeignKeyConstraint3948402751.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DataRow3422932271.h"

// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn)
extern "C"  void UniqueConstraint__ctor_m4240779444 (UniqueConstraint_t2586895203 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn[])
extern "C"  void UniqueConstraint__ctor_m3904839064 (UniqueConstraint_t2586895203 * __this, DataColumnU5BU5D_t2781139492* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.Data.DataColumn[],System.Boolean)
extern "C"  void UniqueConstraint__ctor_m3132443605 (UniqueConstraint_t2586895203 * __this, DataColumnU5BU5D_t2781139492* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.String,System.Data.DataColumn,System.Boolean)
extern "C"  void UniqueConstraint__ctor_m446464085 (UniqueConstraint_t2586895203 * __this, String_t* ___name, DataColumn_t1080745049 * ___column, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::.ctor(System.String,System.Data.DataColumn[],System.Boolean)
extern "C"  void UniqueConstraint__ctor_m722313899 (UniqueConstraint_t2586895203 * __this, String_t* ___name, DataColumnU5BU5D_t2781139492* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_uniqueConstraint(System.String,System.Data.DataColumn,System.Boolean)
extern "C"  void UniqueConstraint__uniqueConstraint_m1731559536 (UniqueConstraint_t2586895203 * __this, String_t* ___name, DataColumn_t1080745049 * ___column, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_uniqueConstraint(System.String,System.Data.DataColumn[],System.Boolean)
extern "C"  void UniqueConstraint__uniqueConstraint_m1155179684 (UniqueConstraint_t2586895203 * __this, String_t* ___name, DataColumnU5BU5D_t2781139492* ___columns, bool ___isPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumns(System.Data.DataColumn[])
extern "C"  void UniqueConstraint__validateColumns_m236354498 (UniqueConstraint_t2586895203 * __this, DataColumnU5BU5D_t2781139492* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumns(System.Data.DataColumn[],System.Data.DataTable&)
extern "C"  void UniqueConstraint__validateColumns_m17306419 (UniqueConstraint_t2586895203 * __this, DataColumnU5BU5D_t2781139492* ___columns, DataTable_t1931745339 ** ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::_validateColumn(System.Data.DataColumn)
extern "C"  void UniqueConstraint__validateColumn_m2005502095 (UniqueConstraint_t2586895203 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::SetAsPrimaryKey(System.Data.ConstraintCollection,System.Data.UniqueConstraint)
extern "C"  void UniqueConstraint_SetAsPrimaryKey_m3453397901 (Il2CppObject * __this /* static, unused */, ConstraintCollection_t571689508 * ___collection, UniqueConstraint_t2586895203 * ___newPrimaryKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.UniqueConstraint::GetPrimaryKeyConstraint(System.Data.ConstraintCollection)
extern "C"  UniqueConstraint_t2586895203 * UniqueConstraint_GetPrimaryKeyConstraint_m211321377 (Il2CppObject * __this /* static, unused */, ConstraintCollection_t571689508 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.UniqueConstraint::GetUniqueConstraintForColumnSet(System.Data.ConstraintCollection,System.Data.DataColumn[])
extern "C"  UniqueConstraint_t2586895203 * UniqueConstraint_GetUniqueConstraintForColumnSet_m78263159 (Il2CppObject * __this /* static, unused */, ConstraintCollection_t571689508 * ___collection, DataColumnU5BU5D_t2781139492* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::get_ChildConstraint()
extern "C"  ForeignKeyConstraint_t3948402751 * UniqueConstraint_get_ChildConstraint_m772235231 (UniqueConstraint_t2586895203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::set_ChildConstraint(System.Data.ForeignKeyConstraint)
extern "C"  void UniqueConstraint_set_ChildConstraint_m3532864568 (UniqueConstraint_t2586895203 * __this, ForeignKeyConstraint_t3948402751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.UniqueConstraint::get_Columns()
extern "C"  DataColumnU5BU5D_t2781139492* UniqueConstraint_get_Columns_m2970727953 (UniqueConstraint_t2586895203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::get_IsPrimaryKey()
extern "C"  bool UniqueConstraint_get_IsPrimaryKey_m2163965931 (UniqueConstraint_t2586895203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.UniqueConstraint::get_Table()
extern "C"  DataTable_t1931745339 * UniqueConstraint_get_Table_m168949334 (UniqueConstraint_t2586895203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::SetIsPrimaryKey(System.Boolean)
extern "C"  void UniqueConstraint_SetIsPrimaryKey_m3501212879 (UniqueConstraint_t2586895203 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::Equals(System.Object)
extern "C"  bool UniqueConstraint_Equals_m2512258944 (UniqueConstraint_t2586895203 * __this, Il2CppObject * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.UniqueConstraint::GetHashCode()
extern "C"  int32_t UniqueConstraint_GetHashCode_m7418140 (UniqueConstraint_t2586895203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
extern "C"  void UniqueConstraint_AddToConstraintCollectionSetup_m2962411295 (UniqueConstraint_t2586895203 * __this, ConstraintCollection_t571689508 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
extern "C"  void UniqueConstraint_RemoveFromConstraintCollectionCleanup_m1709054598 (UniqueConstraint_t2586895203 * __this, ConstraintCollection_t571689508 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::IsConstraintViolated()
extern "C"  bool UniqueConstraint_IsConstraintViolated_m2081129680 (UniqueConstraint_t2586895203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.UniqueConstraint::AssertConstraint(System.Data.DataRow)
extern "C"  void UniqueConstraint_AssertConstraint_m4255104407 (UniqueConstraint_t2586895203 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::IsColumnContained(System.Data.DataColumn)
extern "C"  bool UniqueConstraint_IsColumnContained_m2958213249 (UniqueConstraint_t2586895203 * __this, DataColumn_t1080745049 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.UniqueConstraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
extern "C"  bool UniqueConstraint_CanRemoveFromCollection_m3947005788 (UniqueConstraint_t2586895203 * __this, ConstraintCollection_t571689508 * ___col, bool ___shouldThrow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.UniqueConstraint::GetErrorMessage(System.Data.DataRow)
extern "C"  String_t* UniqueConstraint_GetErrorMessage_m642039050 (UniqueConstraint_t2586895203 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
