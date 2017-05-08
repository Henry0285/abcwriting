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
// System.Transactions.ISinglePhaseNotification
struct ISinglePhaseNotification_t4088712495;

#include "System_Transactions_System_Transactions_Enlistment86096201.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.SinglePhaseEnlistment
struct  SinglePhaseEnlistment_t541773544  : public Enlistment_t86096201
{
public:
	// System.Transactions.Transaction System.Transactions.SinglePhaseEnlistment::tx
	Transaction_t1371701312 * ___tx_1;
	// System.Transactions.ISinglePhaseNotification System.Transactions.SinglePhaseEnlistment::enlisted
	Il2CppObject * ___enlisted_2;

public:
	inline static int32_t get_offset_of_tx_1() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t541773544, ___tx_1)); }
	inline Transaction_t1371701312 * get_tx_1() const { return ___tx_1; }
	inline Transaction_t1371701312 ** get_address_of_tx_1() { return &___tx_1; }
	inline void set_tx_1(Transaction_t1371701312 * value)
	{
		___tx_1 = value;
		Il2CppCodeGenWriteBarrier(&___tx_1, value);
	}

	inline static int32_t get_offset_of_enlisted_2() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t541773544, ___enlisted_2)); }
	inline Il2CppObject * get_enlisted_2() const { return ___enlisted_2; }
	inline Il2CppObject ** get_address_of_enlisted_2() { return &___enlisted_2; }
	inline void set_enlisted_2(Il2CppObject * value)
	{
		___enlisted_2 = value;
		Il2CppCodeGenWriteBarrier(&___enlisted_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
