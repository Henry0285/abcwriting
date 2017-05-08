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
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_t3299108201;

#include "System_Data_System_Data_Common_DbParameterCollectio730125587.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteParameterCollection
struct  SqliteParameterCollection_t3688613832  : public DbParameterCollection_t730125587
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteParameterCollection::_command
	SqliteCommand_t1985130020 * ____command_1;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter> Mono.Data.Sqlite.SqliteParameterCollection::_parameterList
	List_1_t3299108201 * ____parameterList_2;
	// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::_unboundFlag
	bool ____unboundFlag_3;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t3688613832, ____command_1)); }
	inline SqliteCommand_t1985130020 * get__command_1() const { return ____command_1; }
	inline SqliteCommand_t1985130020 ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_t1985130020 * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier(&____command_1, value);
	}

	inline static int32_t get_offset_of__parameterList_2() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t3688613832, ____parameterList_2)); }
	inline List_1_t3299108201 * get__parameterList_2() const { return ____parameterList_2; }
	inline List_1_t3299108201 ** get_address_of__parameterList_2() { return &____parameterList_2; }
	inline void set__parameterList_2(List_1_t3299108201 * value)
	{
		____parameterList_2 = value;
		Il2CppCodeGenWriteBarrier(&____parameterList_2, value);
	}

	inline static int32_t get_offset_of__unboundFlag_3() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t3688613832, ____unboundFlag_3)); }
	inline bool get__unboundFlag_3() const { return ____unboundFlag_3; }
	inline bool* get_address_of__unboundFlag_3() { return &____unboundFlag_3; }
	inline void set__unboundFlag_3(bool value)
	{
		____unboundFlag_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
