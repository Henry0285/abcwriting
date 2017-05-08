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

// System.Data.SqlTypes.SqlTypeException
struct SqlTypeException_t2389053743;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Data.SqlTypes.SqlTypeException::.ctor()
extern "C"  void SqlTypeException__ctor_m1009074031 (SqlTypeException_t2389053743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String)
extern "C"  void SqlTypeException__ctor_m1563701641 (SqlTypeException_t2389053743 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqlTypeException__ctor_m4023295462 (SqlTypeException_t2389053743 * __this, SerializationInfo_t1029367511 * ___si, StreamingContext_t3848318932  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqlTypeException_System_Runtime_Serialization_ISerializable_GetObjectData_m3756720160 (SqlTypeException_t2389053743 * __this, SerializationInfo_t1029367511 * ___si, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
