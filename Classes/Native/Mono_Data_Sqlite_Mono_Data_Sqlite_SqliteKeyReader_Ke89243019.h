#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct KeyQuery_t3876581755;

#include "mscorlib_System_ValueType4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct  KeyInfo_t89243019 
{
public:
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::databaseName
	String_t* ___databaseName_0;
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::tableName
	String_t* ___tableName_1;
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::columnName
	String_t* ___columnName_2;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::database
	int32_t ___database_3;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::rootPage
	int32_t ___rootPage_4;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::cursor
	int32_t ___cursor_5;
	// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::query
	KeyQuery_t3876581755 * ___query_6;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::column
	int32_t ___column_7;

public:
	inline static int32_t get_offset_of_databaseName_0() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___databaseName_0)); }
	inline String_t* get_databaseName_0() const { return ___databaseName_0; }
	inline String_t** get_address_of_databaseName_0() { return &___databaseName_0; }
	inline void set_databaseName_0(String_t* value)
	{
		___databaseName_0 = value;
		Il2CppCodeGenWriteBarrier(&___databaseName_0, value);
	}

	inline static int32_t get_offset_of_tableName_1() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___tableName_1)); }
	inline String_t* get_tableName_1() const { return ___tableName_1; }
	inline String_t** get_address_of_tableName_1() { return &___tableName_1; }
	inline void set_tableName_1(String_t* value)
	{
		___tableName_1 = value;
		Il2CppCodeGenWriteBarrier(&___tableName_1, value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier(&___columnName_2, value);
	}

	inline static int32_t get_offset_of_database_3() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___database_3)); }
	inline int32_t get_database_3() const { return ___database_3; }
	inline int32_t* get_address_of_database_3() { return &___database_3; }
	inline void set_database_3(int32_t value)
	{
		___database_3 = value;
	}

	inline static int32_t get_offset_of_rootPage_4() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___rootPage_4)); }
	inline int32_t get_rootPage_4() const { return ___rootPage_4; }
	inline int32_t* get_address_of_rootPage_4() { return &___rootPage_4; }
	inline void set_rootPage_4(int32_t value)
	{
		___rootPage_4 = value;
	}

	inline static int32_t get_offset_of_cursor_5() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___cursor_5)); }
	inline int32_t get_cursor_5() const { return ___cursor_5; }
	inline int32_t* get_address_of_cursor_5() { return &___cursor_5; }
	inline void set_cursor_5(int32_t value)
	{
		___cursor_5 = value;
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___query_6)); }
	inline KeyQuery_t3876581755 * get_query_6() const { return ___query_6; }
	inline KeyQuery_t3876581755 ** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(KeyQuery_t3876581755 * value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier(&___query_6, value);
	}

	inline static int32_t get_offset_of_column_7() { return static_cast<int32_t>(offsetof(KeyInfo_t89243019, ___column_7)); }
	inline int32_t get_column_7() const { return ___column_7; }
	inline int32_t* get_address_of_column_7() { return &___column_7; }
	inline void set_column_7(int32_t value)
	{
		___column_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
