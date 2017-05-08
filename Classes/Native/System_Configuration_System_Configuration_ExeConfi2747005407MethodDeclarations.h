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

// System.Configuration.ExeConfigurationHost
struct ExeConfigurationHost_t2747005407;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t1855006696;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C"  void ExeConfigurationHost__ctor_m2672717525 (ExeConfigurationHost_t2747005407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_Init_m1279008829 (ExeConfigurationHost_t2747005407 * __this, Il2CppObject * ___root, ObjectU5BU5D_t3632007997* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern "C"  String_t* ExeConfigurationHost_GetStreamName_m4070417723 (ExeConfigurationHost_t2747005407 * __this, String_t* ___configPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_InitForConfiguration_m442278400 (ExeConfigurationHost_t2747005407 * __this, String_t** ___locationSubPath, String_t** ___configPath, String_t** ___locationConfigPath, Il2CppObject * ___root, ObjectU5BU5D_t3632007997* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
