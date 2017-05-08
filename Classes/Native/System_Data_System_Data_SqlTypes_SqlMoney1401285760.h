﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3113349824;

#include "mscorlib_System_ValueType4028081426.h"
#include "mscorlib_System_Decimal173022926.h"
#include "System_Data_System_Data_SqlTypes_SqlMoney1401285760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t1401285760 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t173022926  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760, ___value_0)); }
	inline Decimal_t173022926  get_value_0() const { return ___value_0; }
	inline Decimal_t173022926 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t173022926  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t1401285760_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t1401285760  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t1401285760  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t1401285760  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t1401285760  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t3113349824 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t1401285760  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t1401285760 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t1401285760  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t1401285760  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t1401285760 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t1401285760  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760_StaticFields, ___Null_4)); }
	inline SqlMoney_t1401285760  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t1401285760 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t1401285760  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760_StaticFields, ___Zero_5)); }
	inline SqlMoney_t1401285760  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t1401285760 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t1401285760  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t1401285760_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t3113349824 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t3113349824 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t3113349824 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier(&___MoneyFormat_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1401285760_marshaled_pinvoke
{
	Decimal_t173022926_marshaled_pinvoke ___value_0;
	int32_t ___notNull_1;
};
// Native definition for marshalling of: System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1401285760_marshaled_com
{
	Decimal_t173022926_marshaled_com ___value_0;
	int32_t ___notNull_1;
};
