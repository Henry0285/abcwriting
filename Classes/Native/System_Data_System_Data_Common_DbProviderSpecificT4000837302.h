#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute1145342165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderSpecificTypePropertyAttribute
struct  DbProviderSpecificTypePropertyAttribute_t4000837302  : public Attribute_t1145342165
{
public:
	// System.Boolean System.Data.Common.DbProviderSpecificTypePropertyAttribute::isProviderSpecificTypeProperty
	bool ___isProviderSpecificTypeProperty_0;

public:
	inline static int32_t get_offset_of_isProviderSpecificTypeProperty_0() { return static_cast<int32_t>(offsetof(DbProviderSpecificTypePropertyAttribute_t4000837302, ___isProviderSpecificTypeProperty_0)); }
	inline bool get_isProviderSpecificTypeProperty_0() const { return ___isProviderSpecificTypeProperty_0; }
	inline bool* get_address_of_isProviderSpecificTypeProperty_0() { return &___isProviderSpecificTypeProperty_0; }
	inline void set_isProviderSpecificTypeProperty_0(bool value)
	{
		___isProviderSpecificTypeProperty_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
