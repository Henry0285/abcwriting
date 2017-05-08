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

// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t2822428307;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.String
struct String_t;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t570989426;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C"  void InternalConfigurationSystem__ctor_m1377055107 (InternalConfigurationSystem_t2822428307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern "C"  void InternalConfigurationSystem_Init_m117598888 (InternalConfigurationSystem_t2822428307 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t3632007997* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern "C"  void InternalConfigurationSystem_InitForConfiguration_m909576572 (InternalConfigurationSystem_t2822428307 * __this, String_t** ___locationConfigPath, String_t** ___parentConfigPath, String_t** ___parentLocationConfigPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C"  Il2CppObject * InternalConfigurationSystem_get_Host_m3360228097 (InternalConfigurationSystem_t2822428307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
