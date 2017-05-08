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

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t573184122;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1898546440;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Property1898546440.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C"  void PropertyInformationCollection__ctor_m3360125324 (PropertyInformationCollection_t573184122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C"  PropertyInformation_t1898546440 * PropertyInformationCollection_get_Item_m1640937095 (PropertyInformationCollection_t573184122 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C"  Il2CppObject * PropertyInformationCollection_GetEnumerator_m2342156100 (PropertyInformationCollection_t573184122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformationCollection_Add_m3086044235 (PropertyInformationCollection_t573184122 * __this, PropertyInformation_t1898546440 * ___pi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void PropertyInformationCollection_GetObjectData_m1752565104 (PropertyInformationCollection_t573184122 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
