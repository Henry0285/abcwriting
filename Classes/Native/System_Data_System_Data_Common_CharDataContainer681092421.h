#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1685951112;

#include "System_Data_System_Data_Common_DataContainer245809077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CharDataContainer
struct  CharDataContainer_t681092421  : public DataContainer_t245809077
{
public:
	// System.Char[] System.Data.Common.CharDataContainer::_values
	CharU5BU5D_t1685951112* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(CharDataContainer_t681092421, ____values_3)); }
	inline CharU5BU5D_t1685951112* get__values_3() const { return ____values_3; }
	inline CharU5BU5D_t1685951112** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(CharU5BU5D_t1685951112* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
