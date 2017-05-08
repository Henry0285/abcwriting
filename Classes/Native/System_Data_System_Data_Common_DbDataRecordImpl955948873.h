#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t162982812;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "System_Data_System_Data_Common_DbDataRecord285128853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataRecordImpl
struct  DbDataRecordImpl_t955948873  : public DbDataRecord_t285128853
{
public:
	// System.Data.Common.SchemaInfo[] System.Data.Common.DbDataRecordImpl::schema
	SchemaInfoU5BU5D_t162982812* ___schema_0;
	// System.Object[] System.Data.Common.DbDataRecordImpl::values
	ObjectU5BU5D_t3632007997* ___values_1;
	// System.Int32 System.Data.Common.DbDataRecordImpl::fieldCount
	int32_t ___fieldCount_2;

public:
	inline static int32_t get_offset_of_schema_0() { return static_cast<int32_t>(offsetof(DbDataRecordImpl_t955948873, ___schema_0)); }
	inline SchemaInfoU5BU5D_t162982812* get_schema_0() const { return ___schema_0; }
	inline SchemaInfoU5BU5D_t162982812** get_address_of_schema_0() { return &___schema_0; }
	inline void set_schema_0(SchemaInfoU5BU5D_t162982812* value)
	{
		___schema_0 = value;
		Il2CppCodeGenWriteBarrier(&___schema_0, value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(DbDataRecordImpl_t955948873, ___values_1)); }
	inline ObjectU5BU5D_t3632007997* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t3632007997** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t3632007997* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}

	inline static int32_t get_offset_of_fieldCount_2() { return static_cast<int32_t>(offsetof(DbDataRecordImpl_t955948873, ___fieldCount_2)); }
	inline int32_t get_fieldCount_2() const { return ___fieldCount_2; }
	inline int32_t* get_address_of_fieldCount_2() { return &___fieldCount_2; }
	inline void set_fieldCount_2(int32_t value)
	{
		___fieldCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
