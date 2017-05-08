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

// System.Predicate`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
struct Predicate_1_t3496626331;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteKeyReader_Ke89243019.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Predicate`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2928963336_gshared (Predicate_1_t3496626331 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2928963336(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t3496626331 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2928963336_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2794427120_gshared (Predicate_1_t3496626331 * __this, KeyInfo_t89243019  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2794427120(__this, ___obj, method) ((  bool (*) (Predicate_1_t3496626331 *, KeyInfo_t89243019 , const MethodInfo*))Predicate_1_Invoke_m2794427120_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2647489395_gshared (Predicate_1_t3496626331 * __this, KeyInfo_t89243019  ___obj, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2647489395(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t3496626331 *, KeyInfo_t89243019 , AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2647489395_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3919546862_gshared (Predicate_1_t3496626331 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3919546862(__this, ___result, method) ((  bool (*) (Predicate_1_t3496626331 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3919546862_gshared)(__this, ___result, method)
