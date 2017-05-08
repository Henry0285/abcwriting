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

// Mono.Data.Sqlite.SqliteException
struct SqliteException_t11742288;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqliteException__ctor_m4124555695 (SqliteException_t11742288 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
extern "C"  void SqliteException__ctor_m843081719 (SqliteException_t11742288 * __this, int32_t ___errorCode, String_t* ___extendedInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteException::.ctor()
extern "C"  void SqliteException__ctor_m1297067236 (SqliteException_t11742288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteException::.cctor()
extern "C"  void SqliteException__cctor_m3233858927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
extern "C"  String_t* SqliteException_GetStockErrorMessage_m2901484491 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode, String_t* ___errorMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
