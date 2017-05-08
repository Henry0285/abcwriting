#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Transactions.Transaction
struct Transaction_t1371701312;
// System.Transactions.TransactionScope
struct TransactionScope_t2839726848;

#include "mscorlib_System_Object707969140.h"
#include "System_Transactions_System_Transactions_Transactio2510613230.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionScope
struct  TransactionScope_t2839726848  : public Il2CppObject
{
public:
	// System.Transactions.Transaction System.Transactions.TransactionScope::transaction
	Transaction_t1371701312 * ___transaction_1;
	// System.Transactions.Transaction System.Transactions.TransactionScope::oldTransaction
	Transaction_t1371701312 * ___oldTransaction_2;
	// System.Transactions.TransactionScope System.Transactions.TransactionScope::parentScope
	TransactionScope_t2839726848 * ___parentScope_3;
	// System.Int32 System.Transactions.TransactionScope::nested
	int32_t ___nested_4;
	// System.Boolean System.Transactions.TransactionScope::disposed
	bool ___disposed_5;
	// System.Boolean System.Transactions.TransactionScope::completed
	bool ___completed_6;
	// System.Boolean System.Transactions.TransactionScope::isRoot
	bool ___isRoot_7;

public:
	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___transaction_1)); }
	inline Transaction_t1371701312 * get_transaction_1() const { return ___transaction_1; }
	inline Transaction_t1371701312 ** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(Transaction_t1371701312 * value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier(&___transaction_1, value);
	}

	inline static int32_t get_offset_of_oldTransaction_2() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___oldTransaction_2)); }
	inline Transaction_t1371701312 * get_oldTransaction_2() const { return ___oldTransaction_2; }
	inline Transaction_t1371701312 ** get_address_of_oldTransaction_2() { return &___oldTransaction_2; }
	inline void set_oldTransaction_2(Transaction_t1371701312 * value)
	{
		___oldTransaction_2 = value;
		Il2CppCodeGenWriteBarrier(&___oldTransaction_2, value);
	}

	inline static int32_t get_offset_of_parentScope_3() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___parentScope_3)); }
	inline TransactionScope_t2839726848 * get_parentScope_3() const { return ___parentScope_3; }
	inline TransactionScope_t2839726848 ** get_address_of_parentScope_3() { return &___parentScope_3; }
	inline void set_parentScope_3(TransactionScope_t2839726848 * value)
	{
		___parentScope_3 = value;
		Il2CppCodeGenWriteBarrier(&___parentScope_3, value);
	}

	inline static int32_t get_offset_of_nested_4() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___nested_4)); }
	inline int32_t get_nested_4() const { return ___nested_4; }
	inline int32_t* get_address_of_nested_4() { return &___nested_4; }
	inline void set_nested_4(int32_t value)
	{
		___nested_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_isRoot_7() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848, ___isRoot_7)); }
	inline bool get_isRoot_7() const { return ___isRoot_7; }
	inline bool* get_address_of_isRoot_7() { return &___isRoot_7; }
	inline void set_isRoot_7(bool value)
	{
		___isRoot_7 = value;
	}
};

struct TransactionScope_t2839726848_StaticFields
{
public:
	// System.Transactions.TransactionOptions System.Transactions.TransactionScope::defaultOptions
	TransactionOptions_t2510613230  ___defaultOptions_0;

public:
	inline static int32_t get_offset_of_defaultOptions_0() { return static_cast<int32_t>(offsetof(TransactionScope_t2839726848_StaticFields, ___defaultOptions_0)); }
	inline TransactionOptions_t2510613230  get_defaultOptions_0() const { return ___defaultOptions_0; }
	inline TransactionOptions_t2510613230 * get_address_of_defaultOptions_0() { return &___defaultOptions_0; }
	inline void set_defaultOptions_0(TransactionOptions_t2510613230  value)
	{
		___defaultOptions_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
