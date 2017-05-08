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

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t894053835;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3185359341;
// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2118454908;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t2261576450;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t141003736;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F1039431685.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo249274931.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2261576450.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Array4136897760.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_Assembly141003736.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3714971315.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void ObjectWriter__ctor_m2425543832 (ObjectWriter_t894053835 * __this, Il2CppObject * ___surrogateSelector, StreamingContext_t3848318932  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C"  void ObjectWriter__cctor_m2917296548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C"  void ObjectWriter_WriteObjectGraph_m1869353433 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___obj, HeaderU5BU5D_t2118454908* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C"  void ObjectWriter_QueueObject_m2932691973 (ObjectWriter_t894053835 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteQueuedObjects_m2323709238 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C"  void ObjectWriter_WriteObjectInstance_m2984338708 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___obj, bool ___isValueObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteSerializationEnd_m3798820786 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3096160207 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C"  void ObjectWriter_WriteObject_m829027640 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C"  void ObjectWriter_GetObjectData_m1289198744 (ObjectWriter_t894053835 * __this, Il2CppObject * ___obj, TypeMetadata_t2261576450 ** ___metadata, Il2CppObject ** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C"  TypeMetadata_t2261576450 * ObjectWriter_CreateMemberTypeMetadata_m1372839942 (ObjectWriter_t894053835 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteArray_m3577535090 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteGenericArray_m1259362665 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteObjectArray_m964520409 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteStringArray_m3948181301 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WritePrimitiveTypeArray_m4061317393 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C"  void ObjectWriter_BlockWrite_m2071012239 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Il2CppArray * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C"  void ObjectWriter_WriteSingleDimensionArrayElements_m2372680506 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Il2CppArray * ___array, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C"  void ObjectWriter_WriteNullFiller_m1888582595 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int32_t ___numNulls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C"  void ObjectWriter_WriteObjectReference_m1471017929 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C"  void ObjectWriter_WriteValue_m3608247663 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Type_t * ___valueType, Il2CppObject * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C"  void ObjectWriter_WriteString_m3771020088 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, int64_t ___id, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_WriteAssembly_m3501957525 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Assembly_t141003736 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C"  int32_t ObjectWriter_WriteAssemblyName_m3199872248 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_GetAssemblyId_m492305086 (ObjectWriter_t894053835 * __this, Assembly_t141003736 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C"  int32_t ObjectWriter_GetAssemblyNameId_m2631825813 (ObjectWriter_t894053835 * __this, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C"  int32_t ObjectWriter_RegisterAssembly_m1130617565 (ObjectWriter_t894053835 * __this, String_t* ___assembly, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C"  void ObjectWriter_WritePrimitiveValue_m3356504901 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeCode_m2690735655 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3096160207 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C"  uint8_t ObjectWriter_GetTypeTag_m481155806 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeSpec_m1312689219 (ObjectWriter_t894053835 * __this, BinaryWriter_t3096160207 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
