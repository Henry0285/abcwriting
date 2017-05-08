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

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1303621427;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3172852789;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1976897556;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3597369375;
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

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroupCollection__ctor_m2237904677 (ConfigurationSectionGroupCollection_t1303621427 * __this, Configuration_t1043816813 * ___config, SectionGroupInfo_t3172852789 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C"  KeysCollection_t1976897556 * ConfigurationSectionGroupCollection_get_Keys_m3664428060 (ConfigurationSectionGroupCollection_t1303621427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C"  int32_t ConfigurationSectionGroupCollection_get_Count_m447488593 (ConfigurationSectionGroupCollection_t1303621427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C"  ConfigurationSectionGroup_t3597369375 * ConfigurationSectionGroupCollection_get_Item_m4125903849 (ConfigurationSectionGroupCollection_t1303621427 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionGroupCollection_GetEnumerator_m2684317377 (ConfigurationSectionGroupCollection_t1303621427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionGroupCollection_GetObjectData_m378227929 (ConfigurationSectionGroupCollection_t1303621427 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
