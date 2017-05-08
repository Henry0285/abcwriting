#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[]
struct KeyInfoU5BU5D_t2493324266;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteKeyReader
struct  SqliteKeyReader_t4039977153  : public Il2CppObject
{
public:
	// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[] Mono.Data.Sqlite.SqliteKeyReader::_keyInfo
	KeyInfoU5BU5D_t2493324266* ____keyInfo_0;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteKeyReader::_stmt
	SqliteStatement_t3556180586 * ____stmt_1;
	// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::_isValid
	bool ____isValid_2;

public:
	inline static int32_t get_offset_of__keyInfo_0() { return static_cast<int32_t>(offsetof(SqliteKeyReader_t4039977153, ____keyInfo_0)); }
	inline KeyInfoU5BU5D_t2493324266* get__keyInfo_0() const { return ____keyInfo_0; }
	inline KeyInfoU5BU5D_t2493324266** get_address_of__keyInfo_0() { return &____keyInfo_0; }
	inline void set__keyInfo_0(KeyInfoU5BU5D_t2493324266* value)
	{
		____keyInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&____keyInfo_0, value);
	}

	inline static int32_t get_offset_of__stmt_1() { return static_cast<int32_t>(offsetof(SqliteKeyReader_t4039977153, ____stmt_1)); }
	inline SqliteStatement_t3556180586 * get__stmt_1() const { return ____stmt_1; }
	inline SqliteStatement_t3556180586 ** get_address_of__stmt_1() { return &____stmt_1; }
	inline void set__stmt_1(SqliteStatement_t3556180586 * value)
	{
		____stmt_1 = value;
		Il2CppCodeGenWriteBarrier(&____stmt_1, value);
	}

	inline static int32_t get_offset_of__isValid_2() { return static_cast<int32_t>(offsetof(SqliteKeyReader_t4039977153, ____isValid_2)); }
	inline bool get__isValid_2() const { return ____isValid_2; }
	inline bool* get_address_of__isValid_2() { return &____isValid_2; }
	inline void set__isValid_2(bool value)
	{
		____isValid_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
