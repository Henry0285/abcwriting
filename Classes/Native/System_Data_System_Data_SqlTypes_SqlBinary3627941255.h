﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_ValueType4028081426.h"
#include "System_Data_System_Data_SqlTypes_SqlBinary3627941255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t3627941255 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t3835026402* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t3627941255, ___value_0)); }
	inline ByteU5BU5D_t3835026402* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t3835026402** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t3835026402* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t3627941255, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t3627941255_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t3627941255  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t3627941255_StaticFields, ___Null_2)); }
	inline SqlBinary_t3627941255  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t3627941255 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t3627941255  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Data.SqlTypes.SqlBinary
struct SqlBinary_t3627941255_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for marshalling of: System.Data.SqlTypes.SqlBinary
struct SqlBinary_t3627941255_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
