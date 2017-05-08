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

// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t2501079733;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationObjectManager__ctor_m615862095 (SerializationObjectManager_t2501079733 * __this, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern "C"  void SerializationObjectManager_RegisterObject_m2711387307 (SerializationObjectManager_t2501079733 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern "C"  void SerializationObjectManager_RaiseOnSerializedEvent_m3153555782 (SerializationObjectManager_t2501079733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
