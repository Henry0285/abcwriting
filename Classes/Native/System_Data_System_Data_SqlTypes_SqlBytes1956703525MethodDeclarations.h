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

// System.Data.SqlTypes.SqlBytes
struct SqlBytes_t1956703525;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"

// System.Void System.Data.SqlTypes.SqlBytes::.ctor()
extern "C"  void SqlBytes__ctor_m9871133 (SqlBytes_t1956703525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlBytes_System_Xml_Serialization_IXmlSerializable_ReadXml_m3657810149 (SqlBytes_t1956703525 * __this, XmlReader_t1154388064 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlBytes_System_Xml_Serialization_IXmlSerializable_WriteXml_m2371501272 (SqlBytes_t1956703525 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SqlBytes_System_Runtime_Serialization_ISerializable_GetObjectData_m587280946 (SqlBytes_t1956703525 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBytes System.Data.SqlTypes.SqlBytes::get_Null()
extern "C"  SqlBytes_t1956703525 * SqlBytes_get_Null_m717564813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBytes::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlBytes_GetXsdType_m1745155338 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
