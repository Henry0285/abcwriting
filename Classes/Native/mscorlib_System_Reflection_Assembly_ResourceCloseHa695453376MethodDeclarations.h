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

// System.Reflection.Assembly/ResourceCloseHandler
struct ResourceCloseHandler_t695453376;
// System.Reflection.Module
struct Module_t2520131484;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t591428026;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module2520131484.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_EventArgs591428026.h"

// System.Void System.Reflection.Assembly/ResourceCloseHandler::.ctor(System.Reflection.Module)
extern "C"  void ResourceCloseHandler__ctor_m638358783 (ResourceCloseHandler_t695453376 * __this, Module_t2520131484 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly/ResourceCloseHandler::OnClose(System.Object,System.EventArgs)
extern "C"  void ResourceCloseHandler_OnClose_m168405420 (ResourceCloseHandler_t695453376 * __this, Il2CppObject * ___sender, EventArgs_t591428026 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
