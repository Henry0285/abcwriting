#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t2322360381;
// System.Transactions.Transaction
struct Transaction_t1371701312;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteEnlistment
struct  SQLiteEnlistment_t2167674164  : public Il2CppObject
{
public:
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SQLiteEnlistment::_transaction
	SqliteTransaction_t2322360381 * ____transaction_0;
	// System.Transactions.Transaction Mono.Data.Sqlite.SQLiteEnlistment::_scope
	Transaction_t1371701312 * ____scope_1;
	// System.Boolean Mono.Data.Sqlite.SQLiteEnlistment::_disposeConnection
	bool ____disposeConnection_2;

public:
	inline static int32_t get_offset_of__transaction_0() { return static_cast<int32_t>(offsetof(SQLiteEnlistment_t2167674164, ____transaction_0)); }
	inline SqliteTransaction_t2322360381 * get__transaction_0() const { return ____transaction_0; }
	inline SqliteTransaction_t2322360381 ** get_address_of__transaction_0() { return &____transaction_0; }
	inline void set__transaction_0(SqliteTransaction_t2322360381 * value)
	{
		____transaction_0 = value;
		Il2CppCodeGenWriteBarrier(&____transaction_0, value);
	}

	inline static int32_t get_offset_of__scope_1() { return static_cast<int32_t>(offsetof(SQLiteEnlistment_t2167674164, ____scope_1)); }
	inline Transaction_t1371701312 * get__scope_1() const { return ____scope_1; }
	inline Transaction_t1371701312 ** get_address_of__scope_1() { return &____scope_1; }
	inline void set__scope_1(Transaction_t1371701312 * value)
	{
		____scope_1 = value;
		Il2CppCodeGenWriteBarrier(&____scope_1, value);
	}

	inline static int32_t get_offset_of__disposeConnection_2() { return static_cast<int32_t>(offsetof(SQLiteEnlistment_t2167674164, ____disposeConnection_2)); }
	inline bool get__disposeConnection_2() const { return ____disposeConnection_2; }
	inline bool* get_address_of__disposeConnection_2() { return &____disposeConnection_2; }
	inline void set__disposeConnection_2(bool value)
	{
		____disposeConnection_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
