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

// System.Resources.ResourceManager
struct ResourceManager_t1823773437;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t141003736;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.IO.Stream
struct Stream_t2768948945;
// System.Resources.ResourceSet
struct ResourceSet_t2509516750;
// System.Version
struct Version_t2956351477;
// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t2817759652;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_Assembly141003736.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"

// System.Void System.Resources.ResourceManager::.ctor()
extern "C"  void ResourceManager__ctor_m498829021 (ResourceManager_t1823773437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.ctor(System.String,System.Reflection.Assembly)
extern "C"  void ResourceManager__ctor_m628389795 (ResourceManager_t1823773437 * __this, String_t* ___baseName, Assembly_t141003736 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.cctor()
extern "C"  void ResourceManager__cctor_m2190112652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Resources.ResourceManager::GetResourceSets(System.Reflection.Assembly,System.String)
extern "C"  Hashtable_t1312997718 * ResourceManager_GetResourceSets_m1753197769 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___assembly, String_t* ___basename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetString_m1497379839 (ResourceManager_t1823773437 * __this, String_t* ___name, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFileName(System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetResourceFileName_m420095099 (ResourceManager_t1823773437 * __this, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFilePath(System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetResourceFilePath_m2798100813 (ResourceManager_t1823773437 * __this, CultureInfo_t634113868 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Resources.ResourceManager::GetManifestResourceStreamNoCase(System.Reflection.Assembly,System.String)
extern "C"  Stream_t2768948945 * ResourceManager_GetManifestResourceStreamNoCase_m3281230457 (ResourceManager_t1823773437 * __this, Assembly_t141003736 * ___ass, String_t* ___fn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceSet System.Resources.ResourceManager::InternalGetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
extern "C"  ResourceSet_t2509516750 * ResourceManager_InternalGetResourceSet_m2637775153 (ResourceManager_t1823773437 * __this, CultureInfo_t634113868 * ___culture, bool ___createIfNotExists, bool ___tryParents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Resources.ResourceManager::GetNeutralResourcesLanguage(System.Reflection.Assembly)
extern "C"  CultureInfo_t634113868 * ResourceManager_GetNeutralResourcesLanguage_m4112845604 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Resources.ResourceManager::GetSatelliteContractVersion(System.Reflection.Assembly)
extern "C"  Version_t2956351477 * ResourceManager_GetSatelliteContractVersion_m1326371606 (Il2CppObject * __this /* static, unused */, Assembly_t141003736 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.MissingManifestResourceException System.Resources.ResourceManager::AssemblyResourceMissing(System.String)
extern "C"  MissingManifestResourceException_t2817759652 * ResourceManager_AssemblyResourceMissing_m3101463802 (ResourceManager_t1823773437 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetManifestResourceName(System.String)
extern "C"  String_t* ResourceManager_GetManifestResourceName_m151436770 (ResourceManager_t1823773437 * __this, String_t* ___fn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
