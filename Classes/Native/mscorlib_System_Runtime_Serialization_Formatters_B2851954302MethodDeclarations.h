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

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t2851954302;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t894053835;
// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi894053835.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberTypeMetadata__ctor_m1760390833 (MemberTypeMetadata_t2851954302 * __this, Type_t * ___type, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void MemberTypeMetadata_WriteAssemblies_m2215695293 (MemberTypeMetadata_t2851954302 * __this, ObjectWriter_t894053835 * ___ow, BinaryWriter_t3096160207 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void MemberTypeMetadata_WriteTypeData_m1663840546 (MemberTypeMetadata_t2851954302 * __this, ObjectWriter_t894053835 * ___ow, BinaryWriter_t3096160207 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void MemberTypeMetadata_WriteObjectData_m549206014 (MemberTypeMetadata_t2851954302 * __this, ObjectWriter_t894053835 * ___ow, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
