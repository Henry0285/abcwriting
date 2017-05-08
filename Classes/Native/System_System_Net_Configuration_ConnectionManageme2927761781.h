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
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t4281742376;

#include "System_Configuration_System_Configuration_Configur1301937485.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t2927761781  : public ConfigurationElement_t1301937485
{
public:

public:
};

struct ConnectionManagementElement_t2927761781_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t2870962942 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t4281742376 * ___addressProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t4281742376 * ___maxConnectionProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t2927761781_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2870962942 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2870962942 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2870962942 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of_addressProp_14() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t2927761781_StaticFields, ___addressProp_14)); }
	inline ConfigurationProperty_t4281742376 * get_addressProp_14() const { return ___addressProp_14; }
	inline ConfigurationProperty_t4281742376 ** get_address_of_addressProp_14() { return &___addressProp_14; }
	inline void set_addressProp_14(ConfigurationProperty_t4281742376 * value)
	{
		___addressProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___addressProp_14, value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t2927761781_StaticFields, ___maxConnectionProp_15)); }
	inline ConfigurationProperty_t4281742376 * get_maxConnectionProp_15() const { return ___maxConnectionProp_15; }
	inline ConfigurationProperty_t4281742376 ** get_address_of_maxConnectionProp_15() { return &___maxConnectionProp_15; }
	inline void set_maxConnectionProp_15(ConfigurationProperty_t4281742376 * value)
	{
		___maxConnectionProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___maxConnectionProp_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
