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

// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t1362916474;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t1043816813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Configur1043816813.h"

// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern "C"  void ConfigurationLocation__ctor_m3125296074 (ConfigurationLocation_t1362916474 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t1043816813 * ___parent, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern "C"  void ConfigurationLocation__cctor_m1384898491 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C"  String_t* ConfigurationLocation_get_Path_m2365456525 (ConfigurationLocation_t1362916474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern "C"  Configuration_t1043816813 * ConfigurationLocation_OpenConfiguration_m2905080700 (ConfigurationLocation_t1362916474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C"  void ConfigurationLocation_SetParentConfiguration_m4197005207 (ConfigurationLocation_t1362916474 * __this, Configuration_t1043816813 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
