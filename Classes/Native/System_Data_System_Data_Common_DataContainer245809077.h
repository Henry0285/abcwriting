﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.BitArray
struct BitArray_t1153580258;
// System.Type
struct Type_t;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataContainer
struct  DataContainer_t245809077  : public Il2CppObject
{
public:
	// System.Collections.BitArray System.Data.Common.DataContainer::null_values
	BitArray_t1153580258 * ___null_values_0;
	// System.Type System.Data.Common.DataContainer::_type
	Type_t * ____type_1;
	// System.Data.DataColumn System.Data.Common.DataContainer::_column
	DataColumn_t1080745049 * ____column_2;

public:
	inline static int32_t get_offset_of_null_values_0() { return static_cast<int32_t>(offsetof(DataContainer_t245809077, ___null_values_0)); }
	inline BitArray_t1153580258 * get_null_values_0() const { return ___null_values_0; }
	inline BitArray_t1153580258 ** get_address_of_null_values_0() { return &___null_values_0; }
	inline void set_null_values_0(BitArray_t1153580258 * value)
	{
		___null_values_0 = value;
		Il2CppCodeGenWriteBarrier(&___null_values_0, value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DataContainer_t245809077, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier(&____type_1, value);
	}

	inline static int32_t get_offset_of__column_2() { return static_cast<int32_t>(offsetof(DataContainer_t245809077, ____column_2)); }
	inline DataColumn_t1080745049 * get__column_2() const { return ____column_2; }
	inline DataColumn_t1080745049 ** get_address_of__column_2() { return &____column_2; }
	inline void set__column_2(DataColumn_t1080745049 * value)
	{
		____column_2 = value;
		Il2CppCodeGenWriteBarrier(&____column_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
