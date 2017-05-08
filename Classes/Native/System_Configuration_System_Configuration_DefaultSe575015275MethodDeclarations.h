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

// System.Configuration.DefaultSection
struct DefaultSection_t575015275;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2870962942;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Configura410038643.h"

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C"  void DefaultSection__ctor_m1597606775 (DefaultSection_t575015275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C"  void DefaultSection__cctor_m1370258022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void DefaultSection_DeserializeSection_m2332286625 (DefaultSection_t575015275 * __this, XmlReader_t1154388064 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C"  bool DefaultSection_IsModified_m1050808524 (DefaultSection_t575015275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void DefaultSection_Reset_m516688665 (DefaultSection_t575015275 * __this, ConfigurationElement_t1301937485 * ___parentSection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C"  void DefaultSection_ResetModified_m2081880583 (DefaultSection_t575015275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* DefaultSection_SerializeSection_m580503059 (DefaultSection_t575015275 * __this, ConfigurationElement_t1301937485 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t2870962942 * DefaultSection_get_Properties_m1402553764 (DefaultSection_t575015275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
