#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1818895878;
// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct Dictionary_2_t2670586307;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t45166166;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t12811102;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t1346775202;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct List_1_t1894614264;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunction
struct  SqliteFunction_t1990322597  : public Il2CppObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteFunction::_base
	SQLiteBase_t1818895878 * ____base_0;
	// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData> Mono.Data.Sqlite.SqliteFunction::_contextDataList
	Dictionary_2_t2670586307 * ____contextDataList_1;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_InvokeFunc
	SQLiteCallback_t45166166 * ____InvokeFunc_2;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_StepFunc
	SQLiteCallback_t45166166 * ____StepFunc_3;
	// Mono.Data.Sqlite.SQLiteFinalCallback Mono.Data.Sqlite.SqliteFunction::_FinalFunc
	SQLiteFinalCallback_t12811102 * ____FinalFunc_4;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc
	SQLiteCollation_t1346775202 * ____CompareFunc_5;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc16
	SQLiteCollation_t1346775202 * ____CompareFunc16_6;
	// System.IntPtr Mono.Data.Sqlite.SqliteFunction::_context
	IntPtr_t ____context_7;

public:
	inline static int32_t get_offset_of__base_0() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____base_0)); }
	inline SQLiteBase_t1818895878 * get__base_0() const { return ____base_0; }
	inline SQLiteBase_t1818895878 ** get_address_of__base_0() { return &____base_0; }
	inline void set__base_0(SQLiteBase_t1818895878 * value)
	{
		____base_0 = value;
		Il2CppCodeGenWriteBarrier(&____base_0, value);
	}

	inline static int32_t get_offset_of__contextDataList_1() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____contextDataList_1)); }
	inline Dictionary_2_t2670586307 * get__contextDataList_1() const { return ____contextDataList_1; }
	inline Dictionary_2_t2670586307 ** get_address_of__contextDataList_1() { return &____contextDataList_1; }
	inline void set__contextDataList_1(Dictionary_2_t2670586307 * value)
	{
		____contextDataList_1 = value;
		Il2CppCodeGenWriteBarrier(&____contextDataList_1, value);
	}

	inline static int32_t get_offset_of__InvokeFunc_2() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____InvokeFunc_2)); }
	inline SQLiteCallback_t45166166 * get__InvokeFunc_2() const { return ____InvokeFunc_2; }
	inline SQLiteCallback_t45166166 ** get_address_of__InvokeFunc_2() { return &____InvokeFunc_2; }
	inline void set__InvokeFunc_2(SQLiteCallback_t45166166 * value)
	{
		____InvokeFunc_2 = value;
		Il2CppCodeGenWriteBarrier(&____InvokeFunc_2, value);
	}

	inline static int32_t get_offset_of__StepFunc_3() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____StepFunc_3)); }
	inline SQLiteCallback_t45166166 * get__StepFunc_3() const { return ____StepFunc_3; }
	inline SQLiteCallback_t45166166 ** get_address_of__StepFunc_3() { return &____StepFunc_3; }
	inline void set__StepFunc_3(SQLiteCallback_t45166166 * value)
	{
		____StepFunc_3 = value;
		Il2CppCodeGenWriteBarrier(&____StepFunc_3, value);
	}

	inline static int32_t get_offset_of__FinalFunc_4() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____FinalFunc_4)); }
	inline SQLiteFinalCallback_t12811102 * get__FinalFunc_4() const { return ____FinalFunc_4; }
	inline SQLiteFinalCallback_t12811102 ** get_address_of__FinalFunc_4() { return &____FinalFunc_4; }
	inline void set__FinalFunc_4(SQLiteFinalCallback_t12811102 * value)
	{
		____FinalFunc_4 = value;
		Il2CppCodeGenWriteBarrier(&____FinalFunc_4, value);
	}

	inline static int32_t get_offset_of__CompareFunc_5() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____CompareFunc_5)); }
	inline SQLiteCollation_t1346775202 * get__CompareFunc_5() const { return ____CompareFunc_5; }
	inline SQLiteCollation_t1346775202 ** get_address_of__CompareFunc_5() { return &____CompareFunc_5; }
	inline void set__CompareFunc_5(SQLiteCollation_t1346775202 * value)
	{
		____CompareFunc_5 = value;
		Il2CppCodeGenWriteBarrier(&____CompareFunc_5, value);
	}

	inline static int32_t get_offset_of__CompareFunc16_6() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____CompareFunc16_6)); }
	inline SQLiteCollation_t1346775202 * get__CompareFunc16_6() const { return ____CompareFunc16_6; }
	inline SQLiteCollation_t1346775202 ** get_address_of__CompareFunc16_6() { return &____CompareFunc16_6; }
	inline void set__CompareFunc16_6(SQLiteCollation_t1346775202 * value)
	{
		____CompareFunc16_6 = value;
		Il2CppCodeGenWriteBarrier(&____CompareFunc16_6, value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597, ____context_7)); }
	inline IntPtr_t get__context_7() const { return ____context_7; }
	inline IntPtr_t* get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(IntPtr_t value)
	{
		____context_7 = value;
	}
};

struct SqliteFunction_t1990322597_StaticFields
{
public:
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute> Mono.Data.Sqlite.SqliteFunction::_registeredFunctions
	List_1_t1894614264 * ____registeredFunctions_8;

public:
	inline static int32_t get_offset_of__registeredFunctions_8() { return static_cast<int32_t>(offsetof(SqliteFunction_t1990322597_StaticFields, ____registeredFunctions_8)); }
	inline List_1_t1894614264 * get__registeredFunctions_8() const { return ____registeredFunctions_8; }
	inline List_1_t1894614264 ** get_address_of__registeredFunctions_8() { return &____registeredFunctions_8; }
	inline void set__registeredFunctions_8(List_1_t1894614264 * value)
	{
		____registeredFunctions_8 = value;
		Il2CppCodeGenWriteBarrier(&____registeredFunctions_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
