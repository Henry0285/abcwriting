#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3597369375;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3172852789;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1303621427;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3278833192;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1043816813.h"
#include "System_Configuration_System_Configuration_SectionG3172852789.h"

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C"  void ConfigurationSectionGroup__ctor_m2215148105 (ConfigurationSectionGroup_t3597369375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C"  Configuration_t1043816813 * ConfigurationSectionGroup_get_Config_m3001742842 (ConfigurationSectionGroup_t3597369375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroup_Initialize_m2622037419 (ConfigurationSectionGroup_t3597369375 * __this, Configuration_t1043816813 * ___config, SectionGroupInfo_t3172852789 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t1303621427 * ConfigurationSectionGroup_get_SectionGroups_m2522870927 (ConfigurationSectionGroup_t3597369375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C"  ConfigurationSectionCollection_t3278833192 * ConfigurationSectionGroup_get_Sections_m3081736119 (ConfigurationSectionGroup_t3597369375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
