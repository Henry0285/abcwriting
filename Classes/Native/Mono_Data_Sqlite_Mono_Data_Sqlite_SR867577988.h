#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Resources.ResourceManager
struct ResourceManager_t1823773437;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SR
struct  SR_t867577988  : public Il2CppObject
{
public:

public:
};

struct SR_t867577988_StaticFields
{
public:
	// System.Resources.ResourceManager Mono.Data.Sqlite.SR::resourceMan
	ResourceManager_t1823773437 * ___resourceMan_0;
	// System.Globalization.CultureInfo Mono.Data.Sqlite.SR::resourceCulture
	CultureInfo_t634113868 * ___resourceCulture_1;

public:
	inline static int32_t get_offset_of_resourceMan_0() { return static_cast<int32_t>(offsetof(SR_t867577988_StaticFields, ___resourceMan_0)); }
	inline ResourceManager_t1823773437 * get_resourceMan_0() const { return ___resourceMan_0; }
	inline ResourceManager_t1823773437 ** get_address_of_resourceMan_0() { return &___resourceMan_0; }
	inline void set_resourceMan_0(ResourceManager_t1823773437 * value)
	{
		___resourceMan_0 = value;
		Il2CppCodeGenWriteBarrier(&___resourceMan_0, value);
	}

	inline static int32_t get_offset_of_resourceCulture_1() { return static_cast<int32_t>(offsetof(SR_t867577988_StaticFields, ___resourceCulture_1)); }
	inline CultureInfo_t634113868 * get_resourceCulture_1() const { return ___resourceCulture_1; }
	inline CultureInfo_t634113868 ** get_address_of_resourceCulture_1() { return &___resourceCulture_1; }
	inline void set_resourceCulture_1(CultureInfo_t634113868 * value)
	{
		___resourceCulture_1 = value;
		Il2CppCodeGenWriteBarrier(&___resourceCulture_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
