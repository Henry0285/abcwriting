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

// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct KeyQuery_t3876581755;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
extern "C"  void KeyQuery__ctor_m270578394 (KeyQuery_t3876581755 * __this, SqliteConnection_t196696233 * ___cnn, String_t* ___database, String_t* ___table, StringU5BU5D_t3764931161* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::set_IsValid(System.Boolean)
extern "C"  void KeyQuery_set_IsValid_m2992128153 (KeyQuery_t3876581755 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Sync(System.Int64)
extern "C"  void KeyQuery_Sync_m941450692 (KeyQuery_t3876581755 * __this, int64_t ___rowid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Dispose()
extern "C"  void KeyQuery_Dispose_m951728326 (KeyQuery_t3876581755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
