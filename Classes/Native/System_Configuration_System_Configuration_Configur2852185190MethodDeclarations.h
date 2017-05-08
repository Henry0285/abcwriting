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

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t2852185190;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t2963657329;
// System.Configuration.SectionInformation
struct SectionInformation_t3240044726;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Type
struct Type_t;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Type77837473.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"
#include "System_Configuration_System_Configuration_Configura410038643.h"

// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C"  void ConfigurationSection__ctor_m714843276 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C"  Il2CppObject * ConfigurationSection_get_SectionHandler_m1982719862 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C"  void ConfigurationSection_set_SectionHandler_m1410633441 (ConfigurationSection_t2852185190 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern "C"  SectionInformation_t3240044726 * ConfigurationSection_get_SectionInformation_m4037021195 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C"  Il2CppObject * ConfigurationSection_get_ConfigContext_m4131621597 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C"  void ConfigurationSection_set_ConfigContext_m1616871218 (ConfigurationSection_t2852185190 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern "C"  Il2CppObject * ConfigurationSection_GetRuntimeObject_m3965484768 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C"  bool ConfigurationSection_IsModified_m1833174423 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C"  void ConfigurationSection_ResetModified_m2300774056 (ConfigurationSection_t2852185190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern "C"  ConfigurationElement_t1301937485 * ConfigurationSection_CreateElement_m1756012205 (ConfigurationSection_t2852185190 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern "C"  void ConfigurationSection_DoDeserializeSection_m2782358321 (ConfigurationSection_t2852185190 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void ConfigurationSection_DeserializeSection_m1139223106 (ConfigurationSection_t2852185190 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern "C"  void ConfigurationSection_DeserializeConfigSource_m495463306 (ConfigurationSection_t2852185190 * __this, String_t* ___basePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* ConfigurationSection_SerializeSection_m2886244226 (ConfigurationSection_t2852185190 * __this, ConfigurationElement_t1301937485 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
