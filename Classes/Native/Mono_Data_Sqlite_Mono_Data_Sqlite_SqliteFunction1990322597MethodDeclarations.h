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

// Mono.Data.Sqlite.SqliteFunction
struct SqliteFunction_t1990322597;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_t696207912;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1818895878;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteBase1818895878.h"

// System.Void Mono.Data.Sqlite.SqliteFunction::.cctor()
extern "C"  void SqliteFunction__cctor_m449480182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[])
extern "C"  Il2CppObject * SqliteFunction_Invoke_m3931136062 (SqliteFunction_t1990322597 * __this, ObjectU5BU5D_t3632007997* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&)
extern "C"  void SqliteFunction_Step_m4270568968 (SqliteFunction_t1990322597 * __this, ObjectU5BU5D_t3632007997* ___args, int32_t ___stepNumber, Il2CppObject ** ___contextData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object)
extern "C"  Il2CppObject * SqliteFunction_Final_m4222365480 (SqliteFunction_t1990322597 * __this, Il2CppObject * ___contextData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String)
extern "C"  int32_t SqliteFunction_Compare_m2847016942 (SqliteFunction_t1990322597 * __this, String_t* ___param1, String_t* ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
extern "C"  ObjectU5BU5D_t3632007997* SqliteFunction_ConvertParams_m2146968012 (SqliteFunction_t1990322597 * __this, int32_t ___nArgs, IntPtr_t ___argsptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
extern "C"  void SqliteFunction_SetReturnValue_m861686036 (SqliteFunction_t1990322597 * __this, IntPtr_t ___context, Il2CppObject * ___returnValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::ScalarCallback(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void SqliteFunction_ScalarCallback_m2875354027 (SqliteFunction_t1990322597 * __this, IntPtr_t ___context, int32_t ___nArgs, IntPtr_t ___argsptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t SqliteFunction_CompareCallback_m239219207 (SqliteFunction_t1990322597 * __this, IntPtr_t ___ptr, int32_t ___len1, IntPtr_t ___ptr1, int32_t ___len2, IntPtr_t ___ptr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback16(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t SqliteFunction_CompareCallback16_m828130140 (SqliteFunction_t1990322597 * __this, IntPtr_t ___ptr, int32_t ___len1, IntPtr_t ___ptr1, int32_t ___len2, IntPtr_t ___ptr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::StepCallback(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void SqliteFunction_StepCallback_m40504675 (SqliteFunction_t1990322597 * __this, IntPtr_t ___context, int32_t ___nArgs, IntPtr_t ___argsptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::FinalCallback(System.IntPtr)
extern "C"  void SqliteFunction_FinalCallback_m2133047866 (SqliteFunction_t1990322597 * __this, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::Dispose(System.Boolean)
extern "C"  void SqliteFunction_Dispose_m2778442657 (SqliteFunction_t1990322597 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteFunction::Dispose()
extern "C"  void SqliteFunction_Dispose_m3126580814 (SqliteFunction_t1990322597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteFunction[] Mono.Data.Sqlite.SqliteFunction::BindFunctions(Mono.Data.Sqlite.SQLiteBase)
extern "C"  SqliteFunctionU5BU5D_t696207912* SqliteFunction_BindFunctions_m1392425603 (Il2CppObject * __this /* static, unused */, SQLiteBase_t1818895878 * ___sqlbase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
