#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t3862711131;
// System.String
struct String_t;
// System.Data.Common.DbCommand
struct DbCommand_t637345143;

#include "System_System_ComponentModel_Component3731065100.h"
#include "System_Data_System_Data_Common_CatalogLocation2088751516.h"
#include "System_Data_System_Data_ConflictOption623010494.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommandBuilder
struct  DbCommandBuilder_t25394394  : public Component_t3731065100
{
public:
	// System.Boolean System.Data.Common.DbCommandBuilder::_disposed
	bool ____disposed_4;
	// System.Data.DataTable System.Data.Common.DbCommandBuilder::_dbSchemaTable
	DataTable_t1931745339 * ____dbSchemaTable_5;
	// System.Data.Common.DbDataAdapter System.Data.Common.DbCommandBuilder::_dbDataAdapter
	DbDataAdapter_t3862711131 * ____dbDataAdapter_6;
	// System.Data.Common.CatalogLocation System.Data.Common.DbCommandBuilder::_catalogLocation
	int32_t ____catalogLocation_7;
	// System.Data.ConflictOption System.Data.Common.DbCommandBuilder::_conflictOption
	int32_t ____conflictOption_8;
	// System.String System.Data.Common.DbCommandBuilder::_tableName
	String_t* ____tableName_9;
	// System.String System.Data.Common.DbCommandBuilder::_quotePrefix
	String_t* ____quotePrefix_10;
	// System.String System.Data.Common.DbCommandBuilder::_quoteSuffix
	String_t* ____quoteSuffix_11;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_dbCommand
	DbCommand_t637345143 * ____dbCommand_12;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_deleteCommand
	DbCommand_t637345143 * ____deleteCommand_13;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_insertCommand
	DbCommand_t637345143 * ____insertCommand_14;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_updateCommand
	DbCommand_t637345143 * ____updateCommand_15;

public:
	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__dbSchemaTable_5() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____dbSchemaTable_5)); }
	inline DataTable_t1931745339 * get__dbSchemaTable_5() const { return ____dbSchemaTable_5; }
	inline DataTable_t1931745339 ** get_address_of__dbSchemaTable_5() { return &____dbSchemaTable_5; }
	inline void set__dbSchemaTable_5(DataTable_t1931745339 * value)
	{
		____dbSchemaTable_5 = value;
		Il2CppCodeGenWriteBarrier(&____dbSchemaTable_5, value);
	}

	inline static int32_t get_offset_of__dbDataAdapter_6() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____dbDataAdapter_6)); }
	inline DbDataAdapter_t3862711131 * get__dbDataAdapter_6() const { return ____dbDataAdapter_6; }
	inline DbDataAdapter_t3862711131 ** get_address_of__dbDataAdapter_6() { return &____dbDataAdapter_6; }
	inline void set__dbDataAdapter_6(DbDataAdapter_t3862711131 * value)
	{
		____dbDataAdapter_6 = value;
		Il2CppCodeGenWriteBarrier(&____dbDataAdapter_6, value);
	}

	inline static int32_t get_offset_of__catalogLocation_7() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____catalogLocation_7)); }
	inline int32_t get__catalogLocation_7() const { return ____catalogLocation_7; }
	inline int32_t* get_address_of__catalogLocation_7() { return &____catalogLocation_7; }
	inline void set__catalogLocation_7(int32_t value)
	{
		____catalogLocation_7 = value;
	}

	inline static int32_t get_offset_of__conflictOption_8() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____conflictOption_8)); }
	inline int32_t get__conflictOption_8() const { return ____conflictOption_8; }
	inline int32_t* get_address_of__conflictOption_8() { return &____conflictOption_8; }
	inline void set__conflictOption_8(int32_t value)
	{
		____conflictOption_8 = value;
	}

	inline static int32_t get_offset_of__tableName_9() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____tableName_9)); }
	inline String_t* get__tableName_9() const { return ____tableName_9; }
	inline String_t** get_address_of__tableName_9() { return &____tableName_9; }
	inline void set__tableName_9(String_t* value)
	{
		____tableName_9 = value;
		Il2CppCodeGenWriteBarrier(&____tableName_9, value);
	}

	inline static int32_t get_offset_of__quotePrefix_10() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____quotePrefix_10)); }
	inline String_t* get__quotePrefix_10() const { return ____quotePrefix_10; }
	inline String_t** get_address_of__quotePrefix_10() { return &____quotePrefix_10; }
	inline void set__quotePrefix_10(String_t* value)
	{
		____quotePrefix_10 = value;
		Il2CppCodeGenWriteBarrier(&____quotePrefix_10, value);
	}

	inline static int32_t get_offset_of__quoteSuffix_11() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____quoteSuffix_11)); }
	inline String_t* get__quoteSuffix_11() const { return ____quoteSuffix_11; }
	inline String_t** get_address_of__quoteSuffix_11() { return &____quoteSuffix_11; }
	inline void set__quoteSuffix_11(String_t* value)
	{
		____quoteSuffix_11 = value;
		Il2CppCodeGenWriteBarrier(&____quoteSuffix_11, value);
	}

	inline static int32_t get_offset_of__dbCommand_12() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____dbCommand_12)); }
	inline DbCommand_t637345143 * get__dbCommand_12() const { return ____dbCommand_12; }
	inline DbCommand_t637345143 ** get_address_of__dbCommand_12() { return &____dbCommand_12; }
	inline void set__dbCommand_12(DbCommand_t637345143 * value)
	{
		____dbCommand_12 = value;
		Il2CppCodeGenWriteBarrier(&____dbCommand_12, value);
	}

	inline static int32_t get_offset_of__deleteCommand_13() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____deleteCommand_13)); }
	inline DbCommand_t637345143 * get__deleteCommand_13() const { return ____deleteCommand_13; }
	inline DbCommand_t637345143 ** get_address_of__deleteCommand_13() { return &____deleteCommand_13; }
	inline void set__deleteCommand_13(DbCommand_t637345143 * value)
	{
		____deleteCommand_13 = value;
		Il2CppCodeGenWriteBarrier(&____deleteCommand_13, value);
	}

	inline static int32_t get_offset_of__insertCommand_14() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____insertCommand_14)); }
	inline DbCommand_t637345143 * get__insertCommand_14() const { return ____insertCommand_14; }
	inline DbCommand_t637345143 ** get_address_of__insertCommand_14() { return &____insertCommand_14; }
	inline void set__insertCommand_14(DbCommand_t637345143 * value)
	{
		____insertCommand_14 = value;
		Il2CppCodeGenWriteBarrier(&____insertCommand_14, value);
	}

	inline static int32_t get_offset_of__updateCommand_15() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394, ____updateCommand_15)); }
	inline DbCommand_t637345143 * get__updateCommand_15() const { return ____updateCommand_15; }
	inline DbCommand_t637345143 ** get_address_of__updateCommand_15() { return &____updateCommand_15; }
	inline void set__updateCommand_15(DbCommand_t637345143 * value)
	{
		____updateCommand_15 = value;
		Il2CppCodeGenWriteBarrier(&____updateCommand_15, value);
	}
};

struct DbCommandBuilder_t25394394_StaticFields
{
public:
	// System.String System.Data.Common.DbCommandBuilder::SEPARATOR_DEFAULT
	String_t* ___SEPARATOR_DEFAULT_16;
	// System.String System.Data.Common.DbCommandBuilder::clause1
	String_t* ___clause1_17;
	// System.String System.Data.Common.DbCommandBuilder::clause2
	String_t* ___clause2_18;

public:
	inline static int32_t get_offset_of_SEPARATOR_DEFAULT_16() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394_StaticFields, ___SEPARATOR_DEFAULT_16)); }
	inline String_t* get_SEPARATOR_DEFAULT_16() const { return ___SEPARATOR_DEFAULT_16; }
	inline String_t** get_address_of_SEPARATOR_DEFAULT_16() { return &___SEPARATOR_DEFAULT_16; }
	inline void set_SEPARATOR_DEFAULT_16(String_t* value)
	{
		___SEPARATOR_DEFAULT_16 = value;
		Il2CppCodeGenWriteBarrier(&___SEPARATOR_DEFAULT_16, value);
	}

	inline static int32_t get_offset_of_clause1_17() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394_StaticFields, ___clause1_17)); }
	inline String_t* get_clause1_17() const { return ___clause1_17; }
	inline String_t** get_address_of_clause1_17() { return &___clause1_17; }
	inline void set_clause1_17(String_t* value)
	{
		___clause1_17 = value;
		Il2CppCodeGenWriteBarrier(&___clause1_17, value);
	}

	inline static int32_t get_offset_of_clause2_18() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t25394394_StaticFields, ___clause2_18)); }
	inline String_t* get_clause2_18() const { return ___clause2_18; }
	inline String_t** get_address_of_clause2_18() { return &___clause2_18; }
	inline void set_clause2_18(String_t* value)
	{
		___clause2_18 = value;
		Il2CppCodeGenWriteBarrier(&___clause2_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
