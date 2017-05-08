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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Exception
struct Exception_t1145979430;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType1185973607.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationHandler_RaiseValidationEvent_m3798411831 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t477176618 * ___handle, Exception_t1145979430 * ___innerException, String_t* ___message, XmlSchemaObject_t1566397180 * ___xsobj, Il2CppObject * ___sender, String_t* ___sourceUri, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
