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

// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.String
struct String_t;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t2822428307;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t1735834324;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t570989426;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1999337200;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3597369375;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1303621427;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3278833192;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t2852185190;
// System.Configuration.SectionInfo
struct SectionInfo_t1608430600;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3172852789;
// System.Xml.XmlReader
struct XmlReader_t1154388064;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1043816813.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Internal2822428307.h"
#include "System_Configuration_System_Configuration_SectionI1608430600.h"
#include "System_Configuration_System_Configuration_SectionG3172852789.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C"  void Configuration__ctor_m3545852494 (Configuration_t1043816813 * __this, Configuration_t1043816813 * ___parent, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C"  void Configuration__ctor_m88421328 (Configuration_t1043816813 * __this, InternalConfigurationSystem_t2822428307 * ___system, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C"  Configuration_t1043816813 * Configuration_FindLocationConfiguration_m4081437406 (Configuration_t1043816813 * __this, String_t* ___relativePath, Configuration_t1043816813 * ___defaultConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C"  void Configuration_Init_m2991025886 (Configuration_t1043816813 * __this, Il2CppObject * ___system, String_t* ___configPath, Configuration_t1043816813 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C"  Configuration_t1043816813 * Configuration_get_Parent_m335637978 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C"  void Configuration_set_Parent_m3106974805 (Configuration_t1043816813 * __this, Configuration_t1043816813 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C"  Configuration_t1043816813 * Configuration_GetParentWithFile_m1651703053 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C"  Il2CppObject * Configuration_get_ConfigHost_m854336265 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C"  String_t* Configuration_get_LocationConfigPath_m609030371 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C"  String_t* Configuration_get_ConfigPath_m937107392 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C"  String_t* Configuration_get_FilePath_m3184045596 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C"  bool Configuration_get_HasFile_m1167170352 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C"  ConfigurationLocationCollection_t1999337200 * Configuration_get_Locations_m2394414303 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C"  ConfigurationSectionGroup_t3597369375 * Configuration_get_RootSectionGroup_m1643677634 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t1303621427 * Configuration_get_SectionGroups_m2782934403 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C"  ConfigurationSectionCollection_t3278833192 * Configuration_get_Sections_m3724328875 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C"  ConfigurationSection_t2852185190 * Configuration_GetSection_m3056810807 (Configuration_t1043816813 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C"  ConfigurationSection_t2852185190 * Configuration_GetSectionInstance_m3769455073 (Configuration_t1043816813 * __this, SectionInfo_t1608430600 * ___config, bool ___createDefaultInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C"  ConfigurationSectionGroup_t3597369375 * Configuration_GetSectionGroupInstance_m2028928705 (Configuration_t1043816813 * __this, SectionGroupInfo_t3172852789 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C"  void Configuration_SetSectionXml_m2783526347 (Configuration_t1043816813 * __this, SectionInfo_t1608430600 * ___config, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C"  String_t* Configuration_GetSectionXml_m1792995434 (Configuration_t1043816813 * __this, SectionInfo_t1608430600 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C"  bool Configuration_Load_m851220319 (Configuration_t1043816813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C"  void Configuration_ReadConfigFile_m1878607525 (Configuration_t1043816813 * __this, XmlReader_t1154388064 * ___reader, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C"  void Configuration_ReadData_m342895002 (Configuration_t1043816813 * __this, XmlReader_t1154388064 * ___reader, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void Configuration_ThrowException_m3079645534 (Configuration_t1043816813 * __this, String_t* ___text, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
