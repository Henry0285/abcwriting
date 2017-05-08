#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4028081426.h"
#include "System_Transactions_System_Transactions_IsolationL3450808514.h"
#include "mscorlib_System_TimeSpan1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionOptions
struct  TransactionOptions_t2510613230 
{
public:
	// System.Transactions.IsolationLevel System.Transactions.TransactionOptions::level
	int32_t ___level_0;
	// System.TimeSpan System.Transactions.TransactionOptions::timeout
	TimeSpan_t1834055012  ___timeout_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(TransactionOptions_t2510613230, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(TransactionOptions_t2510613230, ___timeout_1)); }
	inline TimeSpan_t1834055012  get_timeout_1() const { return ___timeout_1; }
	inline TimeSpan_t1834055012 * get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(TimeSpan_t1834055012  value)
	{
		___timeout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Transactions.TransactionOptions
struct TransactionOptions_t2510613230_marshaled_pinvoke
{
	int32_t ___level_0;
	TimeSpan_t1834055012_marshaled_pinvoke ___timeout_1;
};
// Native definition for marshalling of: System.Transactions.TransactionOptions
struct TransactionOptions_t2510613230_marshaled_com
{
	int32_t ___level_0;
	TimeSpan_t1834055012_marshaled_com ___timeout_1;
};
