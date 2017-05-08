#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "System_Data_System_Data_Common_DataContainer245809077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ByteDataContainer
struct  ByteDataContainer_t2548252015  : public DataContainer_t245809077
{
public:
	// System.Byte[] System.Data.Common.ByteDataContainer::_values
	ByteU5BU5D_t3835026402* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ByteDataContainer_t2548252015, ____values_3)); }
	inline ByteU5BU5D_t3835026402* get__values_3() const { return ____values_3; }
	inline ByteU5BU5D_t3835026402** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ByteU5BU5D_t3835026402* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
