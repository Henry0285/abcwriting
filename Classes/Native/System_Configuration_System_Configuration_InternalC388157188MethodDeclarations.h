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

// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t388157188;
// System.Configuration.Configuration
struct Configuration_t1043816813;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C"  void InternalConfigurationFactory__ctor_m2455511552 (InternalConfigurationFactory_t388157188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern "C"  Configuration_t1043816813 * InternalConfigurationFactory_Create_m3329707975 (InternalConfigurationFactory_t388157188 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t3632007997* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
