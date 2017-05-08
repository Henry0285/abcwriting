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
// System.Transactions.TransactionInformation
struct TransactionInformation_t392815506;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t2283223032;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t3200083838;
// System.Transactions.TransactionScope
struct TransactionScope_t2839726848;
// System.Exception
struct Exception_t1145979430;

#include "mscorlib_System_Object707969140.h"
#include "System_Transactions_System_Transactions_IsolationL3450808514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Transaction
struct  Transaction_t1371701312  : public Il2CppObject
{
public:
	// System.Transactions.IsolationLevel System.Transactions.Transaction::level
	int32_t ___level_1;
	// System.Transactions.TransactionInformation System.Transactions.Transaction::info
	TransactionInformation_t392815506 * ___info_2;
	// System.Collections.ArrayList System.Transactions.Transaction::dependents
	ArrayList_t1468494371 * ___dependents_3;
	// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::volatiles
	List_1_t2283223032 * ___volatiles_4;
	// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::durables
	List_1_t3200083838 * ___durables_5;
	// System.Boolean System.Transactions.Transaction::committing
	bool ___committing_6;
	// System.Boolean System.Transactions.Transaction::committed
	bool ___committed_7;
	// System.Boolean System.Transactions.Transaction::aborted
	bool ___aborted_8;
	// System.Transactions.TransactionScope System.Transactions.Transaction::scope
	TransactionScope_t2839726848 * ___scope_9;
	// System.Exception System.Transactions.Transaction::innerException
	Exception_t1145979430 * ___innerException_10;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___info_2)); }
	inline TransactionInformation_t392815506 * get_info_2() const { return ___info_2; }
	inline TransactionInformation_t392815506 ** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(TransactionInformation_t392815506 * value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier(&___info_2, value);
	}

	inline static int32_t get_offset_of_dependents_3() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___dependents_3)); }
	inline ArrayList_t1468494371 * get_dependents_3() const { return ___dependents_3; }
	inline ArrayList_t1468494371 ** get_address_of_dependents_3() { return &___dependents_3; }
	inline void set_dependents_3(ArrayList_t1468494371 * value)
	{
		___dependents_3 = value;
		Il2CppCodeGenWriteBarrier(&___dependents_3, value);
	}

	inline static int32_t get_offset_of_volatiles_4() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___volatiles_4)); }
	inline List_1_t2283223032 * get_volatiles_4() const { return ___volatiles_4; }
	inline List_1_t2283223032 ** get_address_of_volatiles_4() { return &___volatiles_4; }
	inline void set_volatiles_4(List_1_t2283223032 * value)
	{
		___volatiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___volatiles_4, value);
	}

	inline static int32_t get_offset_of_durables_5() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___durables_5)); }
	inline List_1_t3200083838 * get_durables_5() const { return ___durables_5; }
	inline List_1_t3200083838 ** get_address_of_durables_5() { return &___durables_5; }
	inline void set_durables_5(List_1_t3200083838 * value)
	{
		___durables_5 = value;
		Il2CppCodeGenWriteBarrier(&___durables_5, value);
	}

	inline static int32_t get_offset_of_committing_6() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___committing_6)); }
	inline bool get_committing_6() const { return ___committing_6; }
	inline bool* get_address_of_committing_6() { return &___committing_6; }
	inline void set_committing_6(bool value)
	{
		___committing_6 = value;
	}

	inline static int32_t get_offset_of_committed_7() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___committed_7)); }
	inline bool get_committed_7() const { return ___committed_7; }
	inline bool* get_address_of_committed_7() { return &___committed_7; }
	inline void set_committed_7(bool value)
	{
		___committed_7 = value;
	}

	inline static int32_t get_offset_of_aborted_8() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___aborted_8)); }
	inline bool get_aborted_8() const { return ___aborted_8; }
	inline bool* get_address_of_aborted_8() { return &___aborted_8; }
	inline void set_aborted_8(bool value)
	{
		___aborted_8 = value;
	}

	inline static int32_t get_offset_of_scope_9() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___scope_9)); }
	inline TransactionScope_t2839726848 * get_scope_9() const { return ___scope_9; }
	inline TransactionScope_t2839726848 ** get_address_of_scope_9() { return &___scope_9; }
	inline void set_scope_9(TransactionScope_t2839726848 * value)
	{
		___scope_9 = value;
		Il2CppCodeGenWriteBarrier(&___scope_9, value);
	}

	inline static int32_t get_offset_of_innerException_10() { return static_cast<int32_t>(offsetof(Transaction_t1371701312, ___innerException_10)); }
	inline Exception_t1145979430 * get_innerException_10() const { return ___innerException_10; }
	inline Exception_t1145979430 ** get_address_of_innerException_10() { return &___innerException_10; }
	inline void set_innerException_10(Exception_t1145979430 * value)
	{
		___innerException_10 = value;
		Il2CppCodeGenWriteBarrier(&___innerException_10, value);
	}
};

struct Transaction_t1371701312_ThreadStaticFields
{
public:
	// System.Transactions.Transaction System.Transactions.Transaction::ambient
	Transaction_t1371701312 * ___ambient_0;

public:
	inline static int32_t get_offset_of_ambient_0() { return static_cast<int32_t>(offsetof(Transaction_t1371701312_ThreadStaticFields, ___ambient_0)); }
	inline Transaction_t1371701312 * get_ambient_0() const { return ___ambient_0; }
	inline Transaction_t1371701312 ** get_address_of_ambient_0() { return &___ambient_0; }
	inline void set_ambient_0(Transaction_t1371701312 * value)
	{
		___ambient_0 = value;
		Il2CppCodeGenWriteBarrier(&___ambient_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
