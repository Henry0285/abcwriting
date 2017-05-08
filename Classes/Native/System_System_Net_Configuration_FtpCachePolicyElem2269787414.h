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

// System.Net.Configuration.FtpCachePolicyElement
struct  FtpCachePolicyElement_t2269787414  : public ConfigurationElement_t1301937485
{
public:

public:
};

struct FtpCachePolicyElement_t2269787414_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.FtpCachePolicyElement::policyLevelProp
	ConfigurationProperty_t4281742376 * ___policyLevelProp_13;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::properties
	ConfigurationPropertyCollection_t2870962942 * ___properties_14;

public:
	inline static int32_t get_offset_of_policyLevelProp_13() { return static_cast<int32_t>(offsetof(FtpCachePolicyElement_t2269787414_StaticFields, ___policyLevelProp_13)); }
	inline ConfigurationProperty_t4281742376 * get_policyLevelProp_13() const { return ___policyLevelProp_13; }
	inline ConfigurationProperty_t4281742376 ** get_address_of_policyLevelProp_13() { return &___policyLevelProp_13; }
	inline void set_policyLevelProp_13(ConfigurationProperty_t4281742376 * value)
	{
		___policyLevelProp_13 = value;
		Il2CppCodeGenWriteBarrier(&___policyLevelProp_13, value);
	}

	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(FtpCachePolicyElement_t2269787414_StaticFields, ___properties_14)); }
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
