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

// System.Configuration.ConfigurationErrorsException
struct ConfigurationErrorsException_t3055627641;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Exception
struct Exception_t1145979430;
// System.Xml.XmlNode
struct XmlNode_t2483504525;
// System.Xml.XmlReader
struct XmlReader_t1154388064;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Exception1145979430.h"
#include "System_Xml_System_Xml_XmlNode2483504525.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"

// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C"  void ConfigurationErrorsException__ctor_m3609325505 (ConfigurationErrorsException_t3055627641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C"  void ConfigurationErrorsException__ctor_m2348714781 (ConfigurationErrorsException_t3055627641 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException__ctor_m1926925674 (ConfigurationErrorsException_t3055627641 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C"  void ConfigurationErrorsException__ctor_m3963297863 (ConfigurationErrorsException_t3055627641 * __this, String_t* ___message, Exception_t1145979430 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C"  void ConfigurationErrorsException__ctor_m3089652486 (ConfigurationErrorsException_t3055627641 * __this, String_t* ___message, XmlNode_t2483504525 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C"  void ConfigurationErrorsException__ctor_m4265896371 (ConfigurationErrorsException_t3055627641 * __this, String_t* ___message, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C"  void ConfigurationErrorsException__ctor_m3506512730 (ConfigurationErrorsException_t3055627641 * __this, String_t* ___message, Exception_t1145979430 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C"  String_t* ConfigurationErrorsException_get_BareMessage_m403421148 (ConfigurationErrorsException_t3055627641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern "C"  String_t* ConfigurationErrorsException_get_Message_m3733233144 (ConfigurationErrorsException_t3055627641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m2673389627 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m1372608032 (Il2CppObject * __this /* static, unused */, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern "C"  String_t* ConfigurationErrorsException_GetFilename_m2049567258 (Il2CppObject * __this /* static, unused */, XmlNode_t2483504525 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern "C"  int32_t ConfigurationErrorsException_GetLineNumber_m3976484637 (Il2CppObject * __this /* static, unused */, XmlNode_t2483504525 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationErrorsException_GetObjectData_m770656613 (ConfigurationErrorsException_t3055627641 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
