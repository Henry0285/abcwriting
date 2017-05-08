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

// System.Data.Constraint
struct Constraint_t1326448910;
// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t2684863396;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t1951657822;
// System.Data.ConstraintCollection
struct ConstraintCollection_t571689508;
// System.Data.Common.Index
struct Index_t435155372;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DelegateConstraintNameChan2684863396.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_ConstraintCollection571689508.h"
#include "System_Data_System_Data_PropertyCollection1951657822.h"
#include "System_Data_System_Data_Common_Index435155372.h"

// System.Void System.Data.Constraint::.ctor()
extern "C"  void Constraint__ctor_m27108564 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::.cctor()
extern "C"  void Constraint__cctor_m1453331719 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::add_BeforeConstraintNameChange(System.Data.DelegateConstraintNameChange)
extern "C"  void Constraint_add_BeforeConstraintNameChange_m3687231825 (Constraint_t1326448910 * __this, DelegateConstraintNameChange_t2684863396 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::remove_BeforeConstraintNameChange(System.Data.DelegateConstraintNameChange)
extern "C"  void Constraint_remove_BeforeConstraintNameChange_m4046523024 (Constraint_t1326448910 * __this, DelegateConstraintNameChange_t2684863396 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Constraint::get_ConstraintName()
extern "C"  String_t* Constraint_get_ConstraintName_m2653062146 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_ConstraintName(System.String)
extern "C"  void Constraint_set_ConstraintName_m2389805801 (Constraint_t1326448910 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.Constraint::get_ExtendedProperties()
extern "C"  PropertyCollection_t1951657822 * Constraint_get_ExtendedProperties_m779591850 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.Constraint::get_ConstraintCollection()
extern "C"  ConstraintCollection_t571689508 * Constraint_get_ConstraintCollection_m447236759 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_ConstraintCollection(System.Data.ConstraintCollection)
extern "C"  void Constraint_set_ConstraintCollection_m4290700154 (Constraint_t1326448910 * __this, ConstraintCollection_t571689508 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::_onConstraintNameChange(System.String)
extern "C"  void Constraint__onConstraintNameChange_m1455436906 (Constraint_t1326448910 * __this, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::ThrowConstraintException()
extern "C"  void Constraint_ThrowConstraintException_m249929754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Constraint::get_InitInProgress()
extern "C"  bool Constraint_get_InitInProgress_m2680890069 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::AssertConstraint()
extern "C"  void Constraint_AssertConstraint_m279068343 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::SetExtendedProperties(System.Data.PropertyCollection)
extern "C"  void Constraint_SetExtendedProperties_m808798760 (Constraint_t1326448910 * __this, PropertyCollection_t1951657822 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.Constraint::get_Index()
extern "C"  Index_t435155372 * Constraint_get_Index_m3838946090 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_Index(System.Data.Common.Index)
extern "C"  void Constraint_set_Index_m1698307499 (Constraint_t1326448910 * __this, Index_t435155372 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Constraint::ToString()
extern "C"  String_t* Constraint_ToString_m4285749535 (Constraint_t1326448910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
