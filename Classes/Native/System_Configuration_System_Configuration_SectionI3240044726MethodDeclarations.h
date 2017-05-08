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

// System.Configuration.SectionInformation
struct SectionInformation_t3240044726;
// System.String
struct String_t;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t2852185190;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Configur1314059801.h"
#include "System_Configuration_System_Configuration_Configur3975932567.h"
#include "System_Configuration_System_Configuration_Configur2852185190.h"

// System.Void System.Configuration.SectionInformation::.ctor()
extern "C"  void SectionInformation__ctor_m118501942 (SectionInformation_t3240044726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.SectionInformation::get_ConfigFilePath()
extern "C"  String_t* SectionInformation_get_ConfigFilePath_m966874317 (SectionInformation_t3240044726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_ConfigFilePath(System.String)
extern "C"  void SectionInformation_set_ConfigFilePath_m2908232936 (SectionInformation_t3240044726 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowDefinition(System.Configuration.ConfigurationAllowDefinition)
extern "C"  void SectionInformation_set_AllowDefinition_m391233744 (SectionInformation_t3240044726 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowExeDefinition(System.Configuration.ConfigurationAllowExeDefinition)
extern "C"  void SectionInformation_set_AllowExeDefinition_m2089738550 (SectionInformation_t3240044726 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowLocation(System.Boolean)
extern "C"  void SectionInformation_set_AllowLocation_m1178294342 (SectionInformation_t3240044726 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.SectionInformation::get_ConfigSource()
extern "C"  String_t* SectionInformation_get_ConfigSource_m1613439595 (SectionInformation_t3240044726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_ConfigSource(System.String)
extern "C"  void SectionInformation_set_ConfigSource_m2152533200 (SectionInformation_t3240044726 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_RequirePermission(System.Boolean)
extern "C"  void SectionInformation_set_RequirePermission_m1040565520 (SectionInformation_t3240044726 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_RestartOnExternalChanges(System.Boolean)
extern "C"  void SectionInformation_set_RestartOnExternalChanges_m2815572962 (SectionInformation_t3240044726 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::GetParentSection()
extern "C"  ConfigurationSection_t2852185190 * SectionInformation_GetParentSection_m3638988220 (SectionInformation_t3240044726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetParentSection(System.Configuration.ConfigurationSection)
extern "C"  void SectionInformation_SetParentSection_m321631079 (SectionInformation_t3240044726 * __this, ConfigurationSection_t2852185190 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::ProtectSection(System.String)
extern "C"  void SectionInformation_ProtectSection_m230982508 (SectionInformation_t3240044726 * __this, String_t* ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetRawXml(System.String)
extern "C"  void SectionInformation_SetRawXml_m1162572473 (SectionInformation_t3240044726 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetName(System.String)
extern "C"  void SectionInformation_SetName_m2381998591 (SectionInformation_t3240044726 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
