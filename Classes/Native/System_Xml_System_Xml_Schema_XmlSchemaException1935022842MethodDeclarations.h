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

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1935022842;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Exception
struct Exception_t1145979430;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C"  void XmlSchemaException__ctor_m2115071217 (XmlSchemaException_t1935022842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException__ctor_m1580949926 (XmlSchemaException_t1935022842 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m364775691 (XmlSchemaException_t1935022842 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t1566397180 * ___sourceObject, String_t* ___sourceUri, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m2575676105 (XmlSchemaException_t1935022842 * __this, String_t* ___message, Il2CppObject * ___sender, String_t* ___sourceUri, XmlSchemaObject_t1566397180 * ___sourceObject, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m1831638925 (XmlSchemaException_t1935022842 * __this, String_t* ___message, XmlSchemaObject_t1566397180 * ___sourceObject, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m1932414111 (XmlSchemaException_t1935022842 * __this, String_t* ___message, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m2033431189 (Il2CppObject * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, Il2CppObject * ___sender, XmlSchemaObject_t1566397180 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m415039315 (Il2CppObject * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, XmlSchemaObject_t1566397180 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C"  String_t* XmlSchemaException_get_Message_m1034587606 (XmlSchemaException_t1935022842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException_GetObjectData_m888947997 (XmlSchemaException_t1935022842 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
