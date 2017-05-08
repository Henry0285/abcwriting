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

// System.IO.BinaryWriter
struct BinaryWriter_t3096160207;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2118454908;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3185359341;
// System.IO.BinaryReader
struct BinaryReader_t2305207519;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1585448041;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t326215956;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1275265409;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t2734775517;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryWriter3096160207.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F1039431685.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo249274931.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3097540186.h"
#include "mscorlib_System_IO_BinaryReader2305207519.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderH1585448041.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi326215956.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodCall_m3564444827 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___obj, HeaderU5BU5D_t2118454908* ___headers, Il2CppObject * ___surrogateSelector, StreamingContext_t3848318932  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodResponse_m2770324324 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3096160207 * ___writer, Il2CppObject * ___obj, HeaderU5BU5D_t2118454908* ___headers, Il2CppObject * ___surrogateSelector, StreamingContext_t3848318932  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m6568789 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2305207519 * ___reader, bool ___hasHeaders, HeaderHandler_t1585448041 * ___headerHandler, BinaryFormatter_t326215956 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m4134629501 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2305207519 * ___reader, bool ___hasHeaders, HeaderHandler_t1585448041 * ___headerHandler, Il2CppObject * ___methodCallMessage, BinaryFormatter_t326215956 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C"  bool MessageFormatter_AllTypesArePrimitive_m3151865695 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3632007997* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C"  bool MessageFormatter_IsMethodPrimitive_m2276926929 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C"  ObjectU5BU5D_t3632007997* MessageFormatter_GetExtraProperties_m3967829401 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___properties, StringU5BU5D_t3764931161* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C"  bool MessageFormatter_IsInternalKey_m1691080546 (Il2CppObject * __this /* static, unused */, String_t* ___key, StringU5BU5D_t3764931161* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
