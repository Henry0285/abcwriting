﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlReader
struct XmlReader_t1154388064;

#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_XmlReadMode1968640897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataReader
struct  XmlDataReader_t3623290133  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlDataReader::dataset
	DataSet_t646994783 * ___dataset_0;
	// System.Xml.XmlReader System.Data.XmlDataReader::reader
	XmlReader_t1154388064 * ___reader_1;
	// System.Data.XmlReadMode System.Data.XmlDataReader::mode
	int32_t ___mode_2;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataReader_t3623290133, ___dataset_0)); }
	inline DataSet_t646994783 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t646994783 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t646994783 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataset_0, value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(XmlDataReader_t3623290133, ___reader_1)); }
	inline XmlReader_t1154388064 * get_reader_1() const { return ___reader_1; }
	inline XmlReader_t1154388064 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(XmlReader_t1154388064 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataReader_t3623290133, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
