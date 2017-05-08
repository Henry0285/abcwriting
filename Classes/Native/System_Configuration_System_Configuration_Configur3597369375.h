#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3278833192;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1303621427;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3172852789;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t3597369375  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t3278833192 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1303621427 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t1043816813 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t3172852789 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t3597369375, ___sections_0)); }
	inline ConfigurationSectionCollection_t3278833192 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t3278833192 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t3278833192 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier(&___sections_0, value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t3597369375, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t1303621427 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t1303621427 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t1303621427 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier(&___groups_1, value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t3597369375, ___config_2)); }
	inline Configuration_t1043816813 * get_config_2() const { return ___config_2; }
	inline Configuration_t1043816813 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t1043816813 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier(&___config_2, value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t3597369375, ___group_3)); }
	inline SectionGroupInfo_t3172852789 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t3172852789 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t3172852789 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier(&___group_3, value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t3597369375, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
