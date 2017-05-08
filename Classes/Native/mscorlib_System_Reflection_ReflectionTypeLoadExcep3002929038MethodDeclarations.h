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

// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_t3002929038;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Type[]
struct TypeU5BU5D_t2442356668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Reflection.ReflectionTypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ReflectionTypeLoadException__ctor_m2107856835 (ReflectionTypeLoadException_t3002929038 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.ReflectionTypeLoadException::get_Types()
extern "C"  TypeU5BU5D_t2442356668* ReflectionTypeLoadException_get_Types_m835620582 (ReflectionTypeLoadException_t3002929038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ReflectionTypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ReflectionTypeLoadException_GetObjectData_m2560477454 (ReflectionTypeLoadException_t3002929038 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
