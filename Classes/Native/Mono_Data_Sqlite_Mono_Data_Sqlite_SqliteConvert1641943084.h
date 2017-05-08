#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t3764931161;
// System.Text.Encoding
struct Encoding_t2125916575;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Data.DbType[]
struct DbTypeU5BU5D_t904029220;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// Mono.Data.Sqlite.SQLiteTypeNames[]
struct SQLiteTypeNamesU5BU5D_t4048384280;
// Mono.Data.Sqlite.TypeAffinity[]
struct TypeAffinityU5BU5D_t2298263896;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "mscorlib_System_Object707969140.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteDateFormat1592298981.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConvert
struct  SqliteConvert_t1641943084  : public Il2CppObject
{
public:
	// Mono.Data.Sqlite.SQLiteDateFormats Mono.Data.Sqlite.SqliteConvert::_datetimeFormat
	int32_t ____datetimeFormat_2;

public:
	inline static int32_t get_offset_of__datetimeFormat_2() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084, ____datetimeFormat_2)); }
	inline int32_t get__datetimeFormat_2() const { return ____datetimeFormat_2; }
	inline int32_t* get_address_of__datetimeFormat_2() { return &____datetimeFormat_2; }
	inline void set__datetimeFormat_2(int32_t value)
	{
		____datetimeFormat_2 = value;
	}
};

struct SqliteConvert_t1641943084_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteConvert::_datetimeFormats
	StringU5BU5D_t3764931161* ____datetimeFormats_0;
	// System.Text.Encoding Mono.Data.Sqlite.SqliteConvert::_utf8
	Encoding_t2125916575 * ____utf8_1;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_affinitytotype
	TypeU5BU5D_t2442356668* ____affinitytotype_3;
	// System.Data.DbType[] Mono.Data.Sqlite.SqliteConvert::_typetodbtype
	DbTypeU5BU5D_t904029220* ____typetodbtype_4;
	// System.Int32[] Mono.Data.Sqlite.SqliteConvert::_dbtypetocolumnsize
	Int32U5BU5D_t3315407976* ____dbtypetocolumnsize_5;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericprecision
	ObjectU5BU5D_t3632007997* ____dbtypetonumericprecision_6;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericscale
	ObjectU5BU5D_t3632007997* ____dbtypetonumericscale_7;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_dbtypeNames
	SQLiteTypeNamesU5BU5D_t4048384280* ____dbtypeNames_8;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_dbtypeToType
	TypeU5BU5D_t2442356668* ____dbtypeToType_9;
	// Mono.Data.Sqlite.TypeAffinity[] Mono.Data.Sqlite.SqliteConvert::_typecodeAffinities
	TypeAffinityU5BU5D_t2298263896* ____typecodeAffinities_10;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_typeNames
	SQLiteTypeNamesU5BU5D_t4048384280* ____typeNames_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConvert::<>f__switch$map0
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map0_12;

public:
	inline static int32_t get_offset_of__datetimeFormats_0() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____datetimeFormats_0)); }
	inline StringU5BU5D_t3764931161* get__datetimeFormats_0() const { return ____datetimeFormats_0; }
	inline StringU5BU5D_t3764931161** get_address_of__datetimeFormats_0() { return &____datetimeFormats_0; }
	inline void set__datetimeFormats_0(StringU5BU5D_t3764931161* value)
	{
		____datetimeFormats_0 = value;
		Il2CppCodeGenWriteBarrier(&____datetimeFormats_0, value);
	}

	inline static int32_t get_offset_of__utf8_1() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____utf8_1)); }
	inline Encoding_t2125916575 * get__utf8_1() const { return ____utf8_1; }
	inline Encoding_t2125916575 ** get_address_of__utf8_1() { return &____utf8_1; }
	inline void set__utf8_1(Encoding_t2125916575 * value)
	{
		____utf8_1 = value;
		Il2CppCodeGenWriteBarrier(&____utf8_1, value);
	}

	inline static int32_t get_offset_of__affinitytotype_3() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____affinitytotype_3)); }
	inline TypeU5BU5D_t2442356668* get__affinitytotype_3() const { return ____affinitytotype_3; }
	inline TypeU5BU5D_t2442356668** get_address_of__affinitytotype_3() { return &____affinitytotype_3; }
	inline void set__affinitytotype_3(TypeU5BU5D_t2442356668* value)
	{
		____affinitytotype_3 = value;
		Il2CppCodeGenWriteBarrier(&____affinitytotype_3, value);
	}

	inline static int32_t get_offset_of__typetodbtype_4() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____typetodbtype_4)); }
	inline DbTypeU5BU5D_t904029220* get__typetodbtype_4() const { return ____typetodbtype_4; }
	inline DbTypeU5BU5D_t904029220** get_address_of__typetodbtype_4() { return &____typetodbtype_4; }
	inline void set__typetodbtype_4(DbTypeU5BU5D_t904029220* value)
	{
		____typetodbtype_4 = value;
		Il2CppCodeGenWriteBarrier(&____typetodbtype_4, value);
	}

	inline static int32_t get_offset_of__dbtypetocolumnsize_5() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____dbtypetocolumnsize_5)); }
	inline Int32U5BU5D_t3315407976* get__dbtypetocolumnsize_5() const { return ____dbtypetocolumnsize_5; }
	inline Int32U5BU5D_t3315407976** get_address_of__dbtypetocolumnsize_5() { return &____dbtypetocolumnsize_5; }
	inline void set__dbtypetocolumnsize_5(Int32U5BU5D_t3315407976* value)
	{
		____dbtypetocolumnsize_5 = value;
		Il2CppCodeGenWriteBarrier(&____dbtypetocolumnsize_5, value);
	}

	inline static int32_t get_offset_of__dbtypetonumericprecision_6() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____dbtypetonumericprecision_6)); }
	inline ObjectU5BU5D_t3632007997* get__dbtypetonumericprecision_6() const { return ____dbtypetonumericprecision_6; }
	inline ObjectU5BU5D_t3632007997** get_address_of__dbtypetonumericprecision_6() { return &____dbtypetonumericprecision_6; }
	inline void set__dbtypetonumericprecision_6(ObjectU5BU5D_t3632007997* value)
	{
		____dbtypetonumericprecision_6 = value;
		Il2CppCodeGenWriteBarrier(&____dbtypetonumericprecision_6, value);
	}

	inline static int32_t get_offset_of__dbtypetonumericscale_7() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____dbtypetonumericscale_7)); }
	inline ObjectU5BU5D_t3632007997* get__dbtypetonumericscale_7() const { return ____dbtypetonumericscale_7; }
	inline ObjectU5BU5D_t3632007997** get_address_of__dbtypetonumericscale_7() { return &____dbtypetonumericscale_7; }
	inline void set__dbtypetonumericscale_7(ObjectU5BU5D_t3632007997* value)
	{
		____dbtypetonumericscale_7 = value;
		Il2CppCodeGenWriteBarrier(&____dbtypetonumericscale_7, value);
	}

	inline static int32_t get_offset_of__dbtypeNames_8() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____dbtypeNames_8)); }
	inline SQLiteTypeNamesU5BU5D_t4048384280* get__dbtypeNames_8() const { return ____dbtypeNames_8; }
	inline SQLiteTypeNamesU5BU5D_t4048384280** get_address_of__dbtypeNames_8() { return &____dbtypeNames_8; }
	inline void set__dbtypeNames_8(SQLiteTypeNamesU5BU5D_t4048384280* value)
	{
		____dbtypeNames_8 = value;
		Il2CppCodeGenWriteBarrier(&____dbtypeNames_8, value);
	}

	inline static int32_t get_offset_of__dbtypeToType_9() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____dbtypeToType_9)); }
	inline TypeU5BU5D_t2442356668* get__dbtypeToType_9() const { return ____dbtypeToType_9; }
	inline TypeU5BU5D_t2442356668** get_address_of__dbtypeToType_9() { return &____dbtypeToType_9; }
	inline void set__dbtypeToType_9(TypeU5BU5D_t2442356668* value)
	{
		____dbtypeToType_9 = value;
		Il2CppCodeGenWriteBarrier(&____dbtypeToType_9, value);
	}

	inline static int32_t get_offset_of__typecodeAffinities_10() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____typecodeAffinities_10)); }
	inline TypeAffinityU5BU5D_t2298263896* get__typecodeAffinities_10() const { return ____typecodeAffinities_10; }
	inline TypeAffinityU5BU5D_t2298263896** get_address_of__typecodeAffinities_10() { return &____typecodeAffinities_10; }
	inline void set__typecodeAffinities_10(TypeAffinityU5BU5D_t2298263896* value)
	{
		____typecodeAffinities_10 = value;
		Il2CppCodeGenWriteBarrier(&____typecodeAffinities_10, value);
	}

	inline static int32_t get_offset_of__typeNames_11() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ____typeNames_11)); }
	inline SQLiteTypeNamesU5BU5D_t4048384280* get__typeNames_11() const { return ____typeNames_11; }
	inline SQLiteTypeNamesU5BU5D_t4048384280** get_address_of__typeNames_11() { return &____typeNames_11; }
	inline void set__typeNames_11(SQLiteTypeNamesU5BU5D_t4048384280* value)
	{
		____typeNames_11 = value;
		Il2CppCodeGenWriteBarrier(&____typeNames_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_12() { return static_cast<int32_t>(offsetof(SqliteConvert_t1641943084_StaticFields, ___U3CU3Ef__switchU24map0_12)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map0_12() const { return ___U3CU3Ef__switchU24map0_12; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map0_12() { return &___U3CU3Ef__switchU24map0_12; }
	inline void set_U3CU3Ef__switchU24map0_12(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
