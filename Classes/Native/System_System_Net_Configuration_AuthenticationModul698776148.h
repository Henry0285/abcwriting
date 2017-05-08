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

#include "System_Configuration_System_Configuration_Configur2852185190.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t698776148  : public ConfigurationSection_t2852185190
{
public:

public:
};

struct AuthenticationModulesSection_t698776148_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t2870962942 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t4281742376 * ___authenticationModulesProp_18;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t698776148_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2870962942 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2870962942 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2870962942 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier(&___properties_17, value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_18() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t698776148_StaticFields, ___authenticationModulesProp_18)); }
	inline ConfigurationProperty_t4281742376 * get_authenticationModulesProp_18() const { return ___authenticationModulesProp_18; }
	inline ConfigurationProperty_t4281742376 ** get_address_of_authenticationModulesProp_18() { return &___authenticationModulesProp_18; }
	inline void set_authenticationModulesProp_18(ConfigurationProperty_t4281742376 * value)
	{
		___authenticationModulesProp_18 = value;
		Il2CppCodeGenWriteBarrier(&___authenticationModulesProp_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
