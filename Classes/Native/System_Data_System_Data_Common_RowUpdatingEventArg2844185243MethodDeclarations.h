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

// System.Data.Common.RowUpdatingEventArgs
struct RowUpdatingEventArgs_t2844185243;
// System.Data.IDbCommand
struct IDbCommand_t3795299841;
// System.Exception
struct Exception_t1145979430;
// System.Data.DataRow
struct DataRow_t3422932271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_Data_System_Data_StatementType1932463478.h"
#include "System_Data_System_Data_UpdateStatus42023486.h"

// System.Data.IDbCommand System.Data.Common.RowUpdatingEventArgs::get_Command()
extern "C"  Il2CppObject * RowUpdatingEventArgs_get_Command_m845614687 (RowUpdatingEventArgs_t2844185243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RowUpdatingEventArgs::set_Command(System.Data.IDbCommand)
extern "C"  void RowUpdatingEventArgs_set_Command_m2868863648 (RowUpdatingEventArgs_t2844185243 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RowUpdatingEventArgs::set_Errors(System.Exception)
extern "C"  void RowUpdatingEventArgs_set_Errors_m4270970713 (RowUpdatingEventArgs_t2844185243 * __this, Exception_t1145979430 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.Common.RowUpdatingEventArgs::get_Row()
extern "C"  DataRow_t3422932271 * RowUpdatingEventArgs_get_Row_m910488092 (RowUpdatingEventArgs_t2844185243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.StatementType System.Data.Common.RowUpdatingEventArgs::get_StatementType()
extern "C"  int32_t RowUpdatingEventArgs_get_StatementType_m2777875198 (RowUpdatingEventArgs_t2844185243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RowUpdatingEventArgs::set_Status(System.Data.UpdateStatus)
extern "C"  void RowUpdatingEventArgs_set_Status_m656750994 (RowUpdatingEventArgs_t2844185243 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
