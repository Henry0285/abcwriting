#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t4281742376;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2870962942;

#include "System_Configuration_System_Configuration_Configur1301937485.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t4019449079  : public ConfigurationElement_t1301937485
{
public:

public:
};

struct PerformanceCountersElement_t4019449079_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t4281742376 * ___enabledProp_13;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t2870962942 * ___properties_14;

public:
	inline static int32_t get_offset_of_enabledProp_13() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4019449079_StaticFields, ___enabledProp_13)); }
	inline ConfigurationProperty_t4281742376 * get_enabledProp_13() const { return ___enabledProp_13; }
	inline ConfigurationProperty_t4281742376 ** get_address_of_enabledProp_13() { return &___enabledProp_13; }
	inline void set_enabledProp_13(ConfigurationProperty_t4281742376 * value)
	{
		___enabledProp_13 = value;
		Il2CppCodeGenWriteBarrier(&___enabledProp_13, value);
	}

	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4019449079_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t2870962942 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t2870962942 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t2870962942 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
