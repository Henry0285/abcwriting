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

// System.Configuration.SectionInfo
struct SectionInfo_t1608430600;
// System.Object
struct Il2CppObject;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Configuration.ConfigInfo
struct ConfigInfo_t2597627473;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1043816813.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Configuration_System_Configuration_ConfigIn2597627473.h"

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C"  void SectionInfo__ctor_m3237924430 (SectionInfo_t1608430600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C"  Il2CppObject * SectionInfo_CreateInstance_m3857848628 (SectionInfo_t1608430600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionInfo_ReadConfig_m1508625577 (SectionInfo_t1608430600 * __this, Configuration_t1043816813 * ___cfg, String_t* ___streamName, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionInfo_ReadData_m2814313648 (SectionInfo_t1608430600 * __this, Configuration_t1043816813 * ___config, XmlReader_t1154388064 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionInfo_Merge_m2513541987 (SectionInfo_t1608430600 * __this, ConfigInfo_t2597627473 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
