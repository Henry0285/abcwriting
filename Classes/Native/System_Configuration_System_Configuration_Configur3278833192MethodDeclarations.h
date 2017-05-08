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

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3278833192;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3172852789;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1976897556;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t2852185190;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1043816813.h"
#include "System_Configuration_System_Configuration_SectionG3172852789.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionCollection__ctor_m452173858 (ConfigurationSectionCollection_t3278833192 * __this, Configuration_t1043816813 * ___config, SectionGroupInfo_t3172852789 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C"  KeysCollection_t1976897556 * ConfigurationSectionCollection_get_Keys_m1706717625 (ConfigurationSectionCollection_t3278833192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C"  int32_t ConfigurationSectionCollection_get_Count_m3164332684 (ConfigurationSectionCollection_t3278833192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C"  ConfigurationSection_t2852185190 * ConfigurationSectionCollection_get_Item_m3421303889 (ConfigurationSectionCollection_t3278833192 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionCollection_GetEnumerator_m1242675576 (ConfigurationSectionCollection_t3278833192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionCollection_GetObjectData_m253846356 (ConfigurationSectionCollection_t3278833192 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
