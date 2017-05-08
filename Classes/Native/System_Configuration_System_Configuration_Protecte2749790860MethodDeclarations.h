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

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t2749790860;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t429778315;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2870962942;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3876245534;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3298694412;
// System.Configuration.ProviderSettings
struct ProviderSettings_t1779882551;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Provider1779882551.h"

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C"  void ProtectedConfigurationSection__cctor_m710069301 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C"  ProviderSettingsCollection_t429778315 * ProtectedConfigurationSection_get_Providers_m3108810289 (ProtectedConfigurationSection_t2749790860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t2870962942 * ProtectedConfigurationSection_get_Properties_m3218406561 (ProtectedConfigurationSection_t2749790860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C"  ProtectedConfigurationProviderCollection_t3876245534 * ProtectedConfigurationSection_GetAllProviders_m1380267610 (ProtectedConfigurationSection_t2749790860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C"  ProtectedConfigurationProvider_t3298694412 * ProtectedConfigurationSection_InstantiateProvider_m1916220169 (ProtectedConfigurationSection_t2749790860 * __this, ProviderSettings_t1779882551 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
