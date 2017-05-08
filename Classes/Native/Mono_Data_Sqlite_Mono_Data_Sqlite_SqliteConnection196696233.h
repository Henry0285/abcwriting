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
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_t2167674164;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t1818895878;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t936776887;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t4075712783;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t1047005064;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t195232278;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t590493586;
// System.EventHandler
struct EventHandler_t1189809773;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t3930991234;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "System_Data_System_Data_Common_DbConnection233213810.h"
#include "System_Data_System_Data_ConnectionState1356093486.h"
#include "System_Data_System_Data_IsolationLevel3029761637.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConnection
struct  SqliteConnection_t196696233  : public DbConnection_t233213810
{
public:
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_5;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_6;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_7;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_8;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_t2167674164 * ____enlistment_9;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_t1818895878 * ____sql_10;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_11;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_t3835026402* ____password_12;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_13;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_14;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_15;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_t936776887 * ____updateCallback_16;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_t4075712783 * ____commitCallback_17;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t1047005064 * ____rollbackCallback_18;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t195232278 * ____updateHandler_19;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_t590493586 * ____commitHandler_20;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_t1189809773 * ____rollbackHandler_21;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_t3930991234 * ___StateChange_22;

public:
	inline static int32_t get_offset_of__connectionState_5() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____connectionState_5)); }
	inline int32_t get__connectionState_5() const { return ____connectionState_5; }
	inline int32_t* get_address_of__connectionState_5() { return &____connectionState_5; }
	inline void set__connectionState_5(int32_t value)
	{
		____connectionState_5 = value;
	}

	inline static int32_t get_offset_of__connectionString_6() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____connectionString_6)); }
	inline String_t* get__connectionString_6() const { return ____connectionString_6; }
	inline String_t** get_address_of__connectionString_6() { return &____connectionString_6; }
	inline void set__connectionString_6(String_t* value)
	{
		____connectionString_6 = value;
		Il2CppCodeGenWriteBarrier(&____connectionString_6, value);
	}

	inline static int32_t get_offset_of__transactionLevel_7() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____transactionLevel_7)); }
	inline int32_t get__transactionLevel_7() const { return ____transactionLevel_7; }
	inline int32_t* get_address_of__transactionLevel_7() { return &____transactionLevel_7; }
	inline void set__transactionLevel_7(int32_t value)
	{
		____transactionLevel_7 = value;
	}

	inline static int32_t get_offset_of__defaultIsolation_8() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____defaultIsolation_8)); }
	inline int32_t get__defaultIsolation_8() const { return ____defaultIsolation_8; }
	inline int32_t* get_address_of__defaultIsolation_8() { return &____defaultIsolation_8; }
	inline void set__defaultIsolation_8(int32_t value)
	{
		____defaultIsolation_8 = value;
	}

	inline static int32_t get_offset_of__enlistment_9() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____enlistment_9)); }
	inline SQLiteEnlistment_t2167674164 * get__enlistment_9() const { return ____enlistment_9; }
	inline SQLiteEnlistment_t2167674164 ** get_address_of__enlistment_9() { return &____enlistment_9; }
	inline void set__enlistment_9(SQLiteEnlistment_t2167674164 * value)
	{
		____enlistment_9 = value;
		Il2CppCodeGenWriteBarrier(&____enlistment_9, value);
	}

	inline static int32_t get_offset_of__sql_10() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____sql_10)); }
	inline SQLiteBase_t1818895878 * get__sql_10() const { return ____sql_10; }
	inline SQLiteBase_t1818895878 ** get_address_of__sql_10() { return &____sql_10; }
	inline void set__sql_10(SQLiteBase_t1818895878 * value)
	{
		____sql_10 = value;
		Il2CppCodeGenWriteBarrier(&____sql_10, value);
	}

	inline static int32_t get_offset_of__dataSource_11() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____dataSource_11)); }
	inline String_t* get__dataSource_11() const { return ____dataSource_11; }
	inline String_t** get_address_of__dataSource_11() { return &____dataSource_11; }
	inline void set__dataSource_11(String_t* value)
	{
		____dataSource_11 = value;
		Il2CppCodeGenWriteBarrier(&____dataSource_11, value);
	}

	inline static int32_t get_offset_of__password_12() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____password_12)); }
	inline ByteU5BU5D_t3835026402* get__password_12() const { return ____password_12; }
	inline ByteU5BU5D_t3835026402** get_address_of__password_12() { return &____password_12; }
	inline void set__password_12(ByteU5BU5D_t3835026402* value)
	{
		____password_12 = value;
		Il2CppCodeGenWriteBarrier(&____password_12, value);
	}

	inline static int32_t get_offset_of__defaultTimeout_13() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____defaultTimeout_13)); }
	inline int32_t get__defaultTimeout_13() const { return ____defaultTimeout_13; }
	inline int32_t* get_address_of__defaultTimeout_13() { return &____defaultTimeout_13; }
	inline void set__defaultTimeout_13(int32_t value)
	{
		____defaultTimeout_13 = value;
	}

	inline static int32_t get_offset_of__binaryGuid_14() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____binaryGuid_14)); }
	inline bool get__binaryGuid_14() const { return ____binaryGuid_14; }
	inline bool* get_address_of__binaryGuid_14() { return &____binaryGuid_14; }
	inline void set__binaryGuid_14(bool value)
	{
		____binaryGuid_14 = value;
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____version_15)); }
	inline int64_t get__version_15() const { return ____version_15; }
	inline int64_t* get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(int64_t value)
	{
		____version_15 = value;
	}

	inline static int32_t get_offset_of__updateCallback_16() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____updateCallback_16)); }
	inline SQLiteUpdateCallback_t936776887 * get__updateCallback_16() const { return ____updateCallback_16; }
	inline SQLiteUpdateCallback_t936776887 ** get_address_of__updateCallback_16() { return &____updateCallback_16; }
	inline void set__updateCallback_16(SQLiteUpdateCallback_t936776887 * value)
	{
		____updateCallback_16 = value;
		Il2CppCodeGenWriteBarrier(&____updateCallback_16, value);
	}

	inline static int32_t get_offset_of__commitCallback_17() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____commitCallback_17)); }
	inline SQLiteCommitCallback_t4075712783 * get__commitCallback_17() const { return ____commitCallback_17; }
	inline SQLiteCommitCallback_t4075712783 ** get_address_of__commitCallback_17() { return &____commitCallback_17; }
	inline void set__commitCallback_17(SQLiteCommitCallback_t4075712783 * value)
	{
		____commitCallback_17 = value;
		Il2CppCodeGenWriteBarrier(&____commitCallback_17, value);
	}

	inline static int32_t get_offset_of__rollbackCallback_18() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____rollbackCallback_18)); }
	inline SQLiteRollbackCallback_t1047005064 * get__rollbackCallback_18() const { return ____rollbackCallback_18; }
	inline SQLiteRollbackCallback_t1047005064 ** get_address_of__rollbackCallback_18() { return &____rollbackCallback_18; }
	inline void set__rollbackCallback_18(SQLiteRollbackCallback_t1047005064 * value)
	{
		____rollbackCallback_18 = value;
		Il2CppCodeGenWriteBarrier(&____rollbackCallback_18, value);
	}

	inline static int32_t get_offset_of__updateHandler_19() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____updateHandler_19)); }
	inline SQLiteUpdateEventHandler_t195232278 * get__updateHandler_19() const { return ____updateHandler_19; }
	inline SQLiteUpdateEventHandler_t195232278 ** get_address_of__updateHandler_19() { return &____updateHandler_19; }
	inline void set__updateHandler_19(SQLiteUpdateEventHandler_t195232278 * value)
	{
		____updateHandler_19 = value;
		Il2CppCodeGenWriteBarrier(&____updateHandler_19, value);
	}

	inline static int32_t get_offset_of__commitHandler_20() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____commitHandler_20)); }
	inline SQLiteCommitHandler_t590493586 * get__commitHandler_20() const { return ____commitHandler_20; }
	inline SQLiteCommitHandler_t590493586 ** get_address_of__commitHandler_20() { return &____commitHandler_20; }
	inline void set__commitHandler_20(SQLiteCommitHandler_t590493586 * value)
	{
		____commitHandler_20 = value;
		Il2CppCodeGenWriteBarrier(&____commitHandler_20, value);
	}

	inline static int32_t get_offset_of__rollbackHandler_21() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ____rollbackHandler_21)); }
	inline EventHandler_t1189809773 * get__rollbackHandler_21() const { return ____rollbackHandler_21; }
	inline EventHandler_t1189809773 ** get_address_of__rollbackHandler_21() { return &____rollbackHandler_21; }
	inline void set__rollbackHandler_21(EventHandler_t1189809773 * value)
	{
		____rollbackHandler_21 = value;
		Il2CppCodeGenWriteBarrier(&____rollbackHandler_21, value);
	}

	inline static int32_t get_offset_of_StateChange_22() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233, ___StateChange_22)); }
	inline StateChangeEventHandler_t3930991234 * get_StateChange_22() const { return ___StateChange_22; }
	inline StateChangeEventHandler_t3930991234 ** get_address_of_StateChange_22() { return &___StateChange_22; }
	inline void set_StateChange_22(StateChangeEventHandler_t3930991234 * value)
	{
		___StateChange_22 = value;
		Il2CppCodeGenWriteBarrier(&___StateChange_22, value);
	}
};

struct SqliteConnection_t196696233_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map1
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map1_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map2
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map2_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_23() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233_StaticFields, ___U3CU3Ef__switchU24map1_23)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map1_23() const { return ___U3CU3Ef__switchU24map1_23; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map1_23() { return &___U3CU3Ef__switchU24map1_23; }
	inline void set_U3CU3Ef__switchU24map1_23(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map1_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_24() { return static_cast<int32_t>(offsetof(SqliteConnection_t196696233_StaticFields, ___U3CU3Ef__switchU24map2_24)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map2_24() const { return ___U3CU3Ef__switchU24map2_24; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map2_24() { return &___U3CU3Ef__switchU24map2_24; }
	inline void set_U3CU3Ef__switchU24map2_24(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map2_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
