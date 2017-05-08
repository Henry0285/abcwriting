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
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_t3171851689;

#include "System_Transactions_System_Transactions_Enlistment86096201.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.PreparingEnlistment
struct  PreparingEnlistment_t522094769  : public Enlistment_t86096201
{
public:
	// System.Boolean System.Transactions.PreparingEnlistment::prepared
	bool ___prepared_1;
	// System.Transactions.Transaction System.Transactions.PreparingEnlistment::tx
	Transaction_t1371701312 * ___tx_2;
	// System.Transactions.IEnlistmentNotification System.Transactions.PreparingEnlistment::enlisted
	Il2CppObject * ___enlisted_3;

public:
	inline static int32_t get_offset_of_prepared_1() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t522094769, ___prepared_1)); }
	inline bool get_prepared_1() const { return ___prepared_1; }
	inline bool* get_address_of_prepared_1() { return &___prepared_1; }
	inline void set_prepared_1(bool value)
	{
		___prepared_1 = value;
	}

	inline static int32_t get_offset_of_tx_2() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t522094769, ___tx_2)); }
	inline Transaction_t1371701312 * get_tx_2() const { return ___tx_2; }
	inline Transaction_t1371701312 ** get_address_of_tx_2() { return &___tx_2; }
	inline void set_tx_2(Transaction_t1371701312 * value)
	{
		___tx_2 = value;
		Il2CppCodeGenWriteBarrier(&___tx_2, value);
	}

	inline static int32_t get_offset_of_enlisted_3() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t522094769, ___enlisted_3)); }
	inline Il2CppObject * get_enlisted_3() const { return ___enlisted_3; }
	inline Il2CppObject ** get_address_of_enlisted_3() { return &___enlisted_3; }
	inline void set_enlisted_3(Il2CppObject * value)
	{
		___enlisted_3 = value;
		Il2CppCodeGenWriteBarrier(&___enlisted_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
