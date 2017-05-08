#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2870962942;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1128058209;

#include "System_Configuration_System_Configuration_Configur1301937485.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
struct  ConfigurationRemoveElement_t1636187934  : public ConfigurationElement_t1301937485
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::properties
	ConfigurationPropertyCollection_t2870962942 * ___properties_13;
	// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::_origElement
	ConfigurationElement_t1301937485 * ____origElement_14;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::_origCollection
	ConfigurationElementCollection_t1128058209 * ____origCollection_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ConfigurationRemoveElement_t1636187934, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2870962942 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2870962942 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2870962942 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of__origElement_14() { return static_cast<int32_t>(offsetof(ConfigurationRemoveElement_t1636187934, ____origElement_14)); }
	inline ConfigurationElement_t1301937485 * get__origElement_14() const { return ____origElement_14; }
	inline ConfigurationElement_t1301937485 ** get_address_of__origElement_14() { return &____origElement_14; }
	inline void set__origElement_14(ConfigurationElement_t1301937485 * value)
	{
		____origElement_14 = value;
		Il2CppCodeGenWriteBarrier(&____origElement_14, value);
	}

	inline static int32_t get_offset_of__origCollection_15() { return static_cast<int32_t>(offsetof(ConfigurationRemoveElement_t1636187934, ____origCollection_15)); }
	inline ConfigurationElementCollection_t1128058209 * get__origCollection_15() const { return ____origCollection_15; }
	inline ConfigurationElementCollection_t1128058209 ** get_address_of__origCollection_15() { return &____origCollection_15; }
	inline void set__origCollection_15(ConfigurationElementCollection_t1128058209 * value)
	{
		____origCollection_15 = value;
		Il2CppCodeGenWriteBarrier(&____origCollection_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
