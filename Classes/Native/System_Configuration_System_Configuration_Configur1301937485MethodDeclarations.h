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

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1898546440;
// System.Configuration.ElementInformation
struct ElementInformation_t2520418441;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t335992910;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t4281742376;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2870962942;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1128058209;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1043816813.h"
#include "System_Configuration_System_Configuration_Property1898546440.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Configur4281742376.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"
#include "System_Configuration_System_Configuration_Configura410038643.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C"  void ConfigurationElement__ctor_m1276017081 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C"  Configuration_t1043816813 * ConfigurationElement_get_Configuration_m2347242418 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C"  void ConfigurationElement_set_Configuration_m1639150663 (ConfigurationElement_t1301937485 * __this, Configuration_t1043816813 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElement_InitFromProperty_m3625723156 (ConfigurationElement_t1301937485 * __this, PropertyInformation_t1898546440 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C"  ElementInformation_t2520418441 * ConfigurationElement_get_ElementInformation_m3882602470 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C"  String_t* ConfigurationElement_get_RawXml_m2664527628 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C"  void ConfigurationElement_set_RawXml_m3850583953 (ConfigurationElement_t1301937485 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C"  void ConfigurationElement_Init_m1329365593 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C"  ConfigurationLockCollection_t335992910 * ConfigurationElement_get_LockAllAttributesExcept_m3610263831 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C"  ConfigurationLockCollection_t335992910 * ConfigurationElement_get_LockAllElementsExcept_m1554073633 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C"  ConfigurationLockCollection_t335992910 * ConfigurationElement_get_LockAttributes_m3450186057 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C"  ConfigurationLockCollection_t335992910 * ConfigurationElement_get_LockElements_m2225570247 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C"  void ConfigurationElement_set_LockItem_m3758070483 (ConfigurationElement_t1301937485 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C"  void ConfigurationElement_SetPropertyValue_m1782021972 (ConfigurationElement_t1301937485 * __this, ConfigurationProperty_t4281742376 * ___prop, Il2CppObject * ___value, bool ___ignoreLocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C"  ConfigurationPropertyCollection_t2870962942 * ConfigurationElement_GetKeyProperties_m4219970304 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C"  ConfigurationElementCollection_t1128058209 * ConfigurationElement_GetDefaultCollection_m1796439560 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m1850092018 (ConfigurationElement_t1301937485 * __this, ConfigurationProperty_t4281742376 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C"  void ConfigurationElement_set_Item_m2558768429 (ConfigurationElement_t1301937485 * __this, ConfigurationProperty_t4281742376 * ___property, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C"  Il2CppObject * ConfigurationElement_get_Item_m3478882412 (ConfigurationElement_t1301937485 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C"  void ConfigurationElement_set_Item_m3141894725 (ConfigurationElement_t1301937485 * __this, String_t* ___property_name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t2870962942 * ConfigurationElement_get_Properties_m2163360678 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C"  bool ConfigurationElement_Equals_m3484522968 (ConfigurationElement_t1301937485 * __this, Il2CppObject * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C"  int32_t ConfigurationElement_GetHashCode_m2198573252 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C"  bool ConfigurationElement_HasValues_m1341383433 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C"  bool ConfigurationElement_HasLocalModifications_m169968917 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void ConfigurationElement_DeserializeElement_m2430565615 (ConfigurationElement_t1301937485 * __this, XmlReader_t1154388064 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m157901910 (ConfigurationElement_t1301937485 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElement_OnDeserializeUnrecognizedElement_m1053820706 (ConfigurationElement_t1301937485 * __this, String_t* ___element, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C"  Il2CppObject * ConfigurationElement_OnRequiredPropertyNotFound_m3323765040 (ConfigurationElement_t1301937485 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C"  void ConfigurationElement_PreSerialize_m1824129726 (ConfigurationElement_t1301937485 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C"  void ConfigurationElement_PostDeserialize_m3225465312 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C"  void ConfigurationElement_InitializeDefault_m2939047706 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C"  bool ConfigurationElement_IsModified_m748618350 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C"  void ConfigurationElement_SetReadOnly_m1594739059 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C"  bool ConfigurationElement_IsReadOnly_m2244525315 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElement_Reset_m484744193 (ConfigurationElement_t1301937485 * __this, ConfigurationElement_t1301937485 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C"  void ConfigurationElement_ResetModified_m933170487 (ConfigurationElement_t1301937485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElement_SerializeElement_m4131562944 (ConfigurationElement_t1301937485 * __this, XmlWriter_t1713407564 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C"  bool ConfigurationElement_SerializeToXmlElement_m3789742405 (ConfigurationElement_t1301937485 * __this, XmlWriter_t1713407564 * ___writer, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElement_Unmerge_m2515561191 (ConfigurationElement_t1301937485 * __this, ConfigurationElement_t1301937485 * ___source, ConfigurationElement_t1301937485 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C"  bool ConfigurationElement_HasValue_m1390685398 (ConfigurationElement_t1301937485 * __this, String_t* ___propName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C"  void ConfigurationElement_ValidateValue_m1396480566 (ConfigurationElement_t1301937485 * __this, ConfigurationProperty_t4281742376 * ___p, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
