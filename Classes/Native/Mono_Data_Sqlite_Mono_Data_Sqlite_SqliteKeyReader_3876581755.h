#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t1985130020;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t2985396474;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct  KeyQuery_t3876581755  : public Il2CppObject
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::_command
	SqliteCommand_t1985130020 * ____command_0;
	// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::_reader
	SqliteDataReader_t2985396474 * ____reader_1;

public:
	inline static int32_t get_offset_of__command_0() { return static_cast<int32_t>(offsetof(KeyQuery_t3876581755, ____command_0)); }
	inline SqliteCommand_t1985130020 * get__command_0() const { return ____command_0; }
	inline SqliteCommand_t1985130020 ** get_address_of__command_0() { return &____command_0; }
	inline void set__command_0(SqliteCommand_t1985130020 * value)
	{
		____command_0 = value;
		Il2CppCodeGenWriteBarrier(&____command_0, value);
	}

	inline static int32_t get_offset_of__reader_1() { return static_cast<int32_t>(offsetof(KeyQuery_t3876581755, ____reader_1)); }
	inline SqliteDataReader_t2985396474 * get__reader_1() const { return ____reader_1; }
	inline SqliteDataReader_t2985396474 ** get_address_of__reader_1() { return &____reader_1; }
	inline void set__reader_1(SqliteDataReader_t2985396474 * value)
	{
		____reader_1 = value;
		Il2CppCodeGenWriteBarrier(&____reader_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
