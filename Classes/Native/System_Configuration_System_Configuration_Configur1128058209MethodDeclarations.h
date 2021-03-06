﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1128058209;
// System.Array
struct Il2CppArray;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1898546440;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Xml.XmlReader
struct XmlReader_t1154388064;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "System_Configuration_System_Configuration_Property1898546440.h"
#include "System_Configuration_System_Configuration_Configura900658337.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Configuration_System_Configuration_Configura410038643.h"

// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern "C"  void ConfigurationElementCollection__ctor_m1722138055 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m3947886345 (ConfigurationElementCollection_t1128058209 * __this, Il2CppArray * ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern "C"  void ConfigurationElementCollection_InitFromProperty_m3084253332 (ConfigurationElementCollection_t1128058209 * __this, PropertyInformation_t1898546440 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C"  int32_t ConfigurationElementCollection_get_CollectionType_m2878912072 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C"  bool ConfigurationElementCollection_get_IsBasic_m1624364384 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C"  bool ConfigurationElementCollection_get_IsAlternate_m1087333324 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C"  int32_t ConfigurationElementCollection_get_Count_m1016392721 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern "C"  String_t* ConfigurationElementCollection_get_ElementName_m1163032572 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C"  void ConfigurationElementCollection_set_EmitClear_m649573135 (ConfigurationElementCollection_t1128058209 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsSynchronized()
extern "C"  bool ConfigurationElementCollection_get_IsSynchronized_m3152177730 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C"  Il2CppObject * ConfigurationElementCollection_get_SyncRoot_m1263605066 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C"  bool ConfigurationElementCollection_get_ThrowOnDuplicate_m2516679882 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C"  String_t* ConfigurationElementCollection_get_AddElementName_m2131549453 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C"  String_t* ConfigurationElementCollection_get_ClearElementName_m344564617 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C"  String_t* ConfigurationElementCollection_get_RemoveElementName_m670755192 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElementCollection_BaseAdd_m692033632 (ConfigurationElementCollection_t1128058209 * __this, ConfigurationElement_t1301937485 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern "C"  void ConfigurationElementCollection_BaseAdd_m1594255685 (ConfigurationElementCollection_t1128058209 * __this, ConfigurationElement_t1301937485 * ___element, bool ___throwIfExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern "C"  void ConfigurationElementCollection_BaseClear_m1999336003 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern "C"  ConfigurationElement_t1301937485 * ConfigurationElementCollection_BaseGet_m498332263 (ConfigurationElementCollection_t1128058209 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern "C"  ConfigurationElement_t1301937485 * ConfigurationElementCollection_BaseGet_m673060682 (ConfigurationElementCollection_t1128058209 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C"  int32_t ConfigurationElementCollection_BaseIndexOf_m1544895010 (ConfigurationElementCollection_t1128058209 * __this, ConfigurationElement_t1301937485 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern "C"  int32_t ConfigurationElementCollection_IndexOfKey_m1888078841 (ConfigurationElementCollection_t1128058209 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern "C"  void ConfigurationElementCollection_BaseRemove_m1128013164 (ConfigurationElementCollection_t1128058209 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern "C"  void ConfigurationElementCollection_BaseRemoveAt_m1239272108 (ConfigurationElementCollection_t1128058209 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern "C"  bool ConfigurationElementCollection_CompareKeys_m682234560 (ConfigurationElementCollection_t1128058209 * __this, Il2CppObject * ___key1, Il2CppObject * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C"  ConfigurationElement_t1301937485 * ConfigurationElementCollection_CreateNewElement_m3219927641 (ConfigurationElementCollection_t1128058209 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C"  ConfigurationElement_t1301937485 * ConfigurationElementCollection_CreateNewElementInternal_m226698700 (ConfigurationElementCollection_t1128058209 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern "C"  bool ConfigurationElementCollection_Equals_m2221773756 (ConfigurationElementCollection_t1128058209 * __this, Il2CppObject * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C"  int32_t ConfigurationElementCollection_GetHashCode_m770974360 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationElementCollection_GetEnumerator_m3962900713 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C"  bool ConfigurationElementCollection_IsElementName_m2704993900 (ConfigurationElementCollection_t1128058209 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C"  bool ConfigurationElementCollection_IsElementRemovable_m1916442331 (ConfigurationElementCollection_t1128058209 * __this, ConfigurationElement_t1301937485 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C"  bool ConfigurationElementCollection_IsModified_m4233298518 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C"  bool ConfigurationElementCollection_IsReadOnly_m2147280149 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C"  bool ConfigurationElementCollection_HasValues_m4112686071 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ConfigurationElementCollection_Reset_m3142114271 (ConfigurationElementCollection_t1128058209 * __this, ConfigurationElement_t1301937485 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C"  void ConfigurationElementCollection_ResetModified_m3318214445 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C"  void ConfigurationElementCollection_SetReadOnly_m2819095069 (ConfigurationElementCollection_t1128058209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C"  bool ConfigurationElementCollection_SerializeElement_m3696766444 (ConfigurationElementCollection_t1128058209 * __this, XmlWriter_t1713407564 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C"  bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m1168261278 (ConfigurationElementCollection_t1128058209 * __this, String_t* ___elementName, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ConfigurationElementCollection_Unmerge_m2009439485 (ConfigurationElementCollection_t1128058209 * __this, ConfigurationElement_t1301937485 * ___sourceElement, ConfigurationElement_t1301937485 * ___parentElement, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
