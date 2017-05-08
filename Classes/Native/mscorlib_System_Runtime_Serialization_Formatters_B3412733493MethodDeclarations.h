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

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t3412733493;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t2261576450;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t894053835;
// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2261576450.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi894053835.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C"  void SerializableTypeMetadata__ctor_m819664803 (SerializableTypeMetadata_t3412733493 * __this, Type_t * ___itype, SerializationInfo_t1029367511 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C"  bool SerializableTypeMetadata_IsCompatible_m1868220581 (SerializableTypeMetadata_t3412733493 * __this, TypeMetadata_t2261576450 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void SerializableTypeMetadata_WriteAssemblies_m2191680612 (SerializableTypeMetadata_t3412733493 * __this, ObjectWriter_t894053835 * ___ow, BinaryWriter_t3096160207 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void SerializableTypeMetadata_WriteTypeData_m852433355 (SerializableTypeMetadata_t3412733493 * __this, ObjectWriter_t894053835 * ___ow, BinaryWriter_t3096160207 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void SerializableTypeMetadata_WriteObjectData_m1422347319 (SerializableTypeMetadata_t3412733493 * __this, ObjectWriter_t894053835 * ___ow, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C"  bool SerializableTypeMetadata_get_RequiresTypes_m3613630433 (SerializableTypeMetadata_t3412733493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
