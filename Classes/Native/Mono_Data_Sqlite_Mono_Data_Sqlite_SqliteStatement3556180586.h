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
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t1378415992;
// System.String[]
struct StringU5BU5D_t3764931161;
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t1311847231;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t1985130020;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteStatement
struct  SqliteStatement_t3556180586  : public Il2CppObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteStatement::_sql
	SQLiteBase_t1818895878 * ____sql_0;
	// System.String Mono.Data.Sqlite.SqliteStatement::_sqlStatement
	String_t* ____sqlStatement_1;
	// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatement::_sqlite_stmt
	SqliteStatementHandle_t1378415992 * ____sqlite_stmt_2;
	// System.Int32 Mono.Data.Sqlite.SqliteStatement::_unnamedParameters
	int32_t ____unnamedParameters_3;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_paramNames
	StringU5BU5D_t3764931161* ____paramNames_4;
	// Mono.Data.Sqlite.SqliteParameter[] Mono.Data.Sqlite.SqliteStatement::_paramValues
	SqliteParameterU5BU5D_t1311847231* ____paramValues_5;
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteStatement::_command
	SqliteCommand_t1985130020 * ____command_6;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_types
	StringU5BU5D_t3764931161* ____types_7;

public:
	inline static int32_t get_offset_of__sql_0() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____sql_0)); }
	inline SQLiteBase_t1818895878 * get__sql_0() const { return ____sql_0; }
	inline SQLiteBase_t1818895878 ** get_address_of__sql_0() { return &____sql_0; }
	inline void set__sql_0(SQLiteBase_t1818895878 * value)
	{
		____sql_0 = value;
		Il2CppCodeGenWriteBarrier(&____sql_0, value);
	}

	inline static int32_t get_offset_of__sqlStatement_1() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____sqlStatement_1)); }
	inline String_t* get__sqlStatement_1() const { return ____sqlStatement_1; }
	inline String_t** get_address_of__sqlStatement_1() { return &____sqlStatement_1; }
	inline void set__sqlStatement_1(String_t* value)
	{
		____sqlStatement_1 = value;
		Il2CppCodeGenWriteBarrier(&____sqlStatement_1, value);
	}

	inline static int32_t get_offset_of__sqlite_stmt_2() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____sqlite_stmt_2)); }
	inline SqliteStatementHandle_t1378415992 * get__sqlite_stmt_2() const { return ____sqlite_stmt_2; }
	inline SqliteStatementHandle_t1378415992 ** get_address_of__sqlite_stmt_2() { return &____sqlite_stmt_2; }
	inline void set__sqlite_stmt_2(SqliteStatementHandle_t1378415992 * value)
	{
		____sqlite_stmt_2 = value;
		Il2CppCodeGenWriteBarrier(&____sqlite_stmt_2, value);
	}

	inline static int32_t get_offset_of__unnamedParameters_3() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____unnamedParameters_3)); }
	inline int32_t get__unnamedParameters_3() const { return ____unnamedParameters_3; }
	inline int32_t* get_address_of__unnamedParameters_3() { return &____unnamedParameters_3; }
	inline void set__unnamedParameters_3(int32_t value)
	{
		____unnamedParameters_3 = value;
	}

	inline static int32_t get_offset_of__paramNames_4() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____paramNames_4)); }
	inline StringU5BU5D_t3764931161* get__paramNames_4() const { return ____paramNames_4; }
	inline StringU5BU5D_t3764931161** get_address_of__paramNames_4() { return &____paramNames_4; }
	inline void set__paramNames_4(StringU5BU5D_t3764931161* value)
	{
		____paramNames_4 = value;
		Il2CppCodeGenWriteBarrier(&____paramNames_4, value);
	}

	inline static int32_t get_offset_of__paramValues_5() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____paramValues_5)); }
	inline SqliteParameterU5BU5D_t1311847231* get__paramValues_5() const { return ____paramValues_5; }
	inline SqliteParameterU5BU5D_t1311847231** get_address_of__paramValues_5() { return &____paramValues_5; }
	inline void set__paramValues_5(SqliteParameterU5BU5D_t1311847231* value)
	{
		____paramValues_5 = value;
		Il2CppCodeGenWriteBarrier(&____paramValues_5, value);
	}

	inline static int32_t get_offset_of__command_6() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____command_6)); }
	inline SqliteCommand_t1985130020 * get__command_6() const { return ____command_6; }
	inline SqliteCommand_t1985130020 ** get_address_of__command_6() { return &____command_6; }
	inline void set__command_6(SqliteCommand_t1985130020 * value)
	{
		____command_6 = value;
		Il2CppCodeGenWriteBarrier(&____command_6, value);
	}

	inline static int32_t get_offset_of__types_7() { return static_cast<int32_t>(offsetof(SqliteStatement_t3556180586, ____types_7)); }
	inline StringU5BU5D_t3764931161* get__types_7() const { return ____types_7; }
	inline StringU5BU5D_t3764931161** get_address_of__types_7() { return &____types_7; }
	inline void set__types_7(StringU5BU5D_t3764931161* value)
	{
		____types_7 = value;
		Il2CppCodeGenWriteBarrier(&____types_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
