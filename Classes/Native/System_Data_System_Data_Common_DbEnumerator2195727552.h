#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.IDataReader
struct IDataReader_t1583822747;
// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t162982812;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbEnumerator
struct  DbEnumerator_t2195727552  : public Il2CppObject
{
public:
	// System.Data.IDataReader System.Data.Common.DbEnumerator::reader
	Il2CppObject * ___reader_0;
	// System.Boolean System.Data.Common.DbEnumerator::closeReader
	bool ___closeReader_1;
	// System.Data.Common.SchemaInfo[] System.Data.Common.DbEnumerator::schema
	SchemaInfoU5BU5D_t162982812* ___schema_2;
	// System.Object[] System.Data.Common.DbEnumerator::values
	ObjectU5BU5D_t3632007997* ___values_3;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(DbEnumerator_t2195727552, ___reader_0)); }
	inline Il2CppObject * get_reader_0() const { return ___reader_0; }
	inline Il2CppObject ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(Il2CppObject * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier(&___reader_0, value);
	}

	inline static int32_t get_offset_of_closeReader_1() { return static_cast<int32_t>(offsetof(DbEnumerator_t2195727552, ___closeReader_1)); }
	inline bool get_closeReader_1() const { return ___closeReader_1; }
	inline bool* get_address_of_closeReader_1() { return &___closeReader_1; }
	inline void set_closeReader_1(bool value)
	{
		___closeReader_1 = value;
	}

	inline static int32_t get_offset_of_schema_2() { return static_cast<int32_t>(offsetof(DbEnumerator_t2195727552, ___schema_2)); }
	inline SchemaInfoU5BU5D_t162982812* get_schema_2() const { return ___schema_2; }
	inline SchemaInfoU5BU5D_t162982812** get_address_of_schema_2() { return &___schema_2; }
	inline void set_schema_2(SchemaInfoU5BU5D_t162982812* value)
	{
		___schema_2 = value;
		Il2CppCodeGenWriteBarrier(&___schema_2, value);
	}

	inline static int32_t get_offset_of_values_3() { return static_cast<int32_t>(offsetof(DbEnumerator_t2195727552, ___values_3)); }
	inline ObjectU5BU5D_t3632007997* get_values_3() const { return ___values_3; }
	inline ObjectU5BU5D_t3632007997** get_address_of_values_3() { return &___values_3; }
	inline void set_values_3(ObjectU5BU5D_t3632007997* value)
	{
		___values_3 = value;
		Il2CppCodeGenWriteBarrier(&___values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
