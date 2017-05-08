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

// System.Xml.Schema.XmlSchemaGroupRef
struct XmlSchemaGroupRef_t1692148115;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t2703777998;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2095492222;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1531349100;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3333075425.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable2095492222.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader1531349100.h"

// System.Void System.Xml.Schema.XmlSchemaGroupRef::.ctor()
extern "C"  void XmlSchemaGroupRef__ctor_m2362151032 (XmlSchemaGroupRef_t1692148115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::get_RefName()
extern "C"  XmlQualifiedName_t3059647944 * XmlSchemaGroupRef_get_RefName_m1211212222 (XmlSchemaGroupRef_t1692148115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::get_TargetGroup()
extern "C"  XmlSchemaGroup_t2703777998 * XmlSchemaGroupRef_get_TargetGroup_m419632450 (XmlSchemaGroupRef_t1692148115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroupRef_Compile_m1003331222 (XmlSchemaGroupRef_t1692148115 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroupRef_Validate_m2406809427 (XmlSchemaGroupRef_t1692148115 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaGroupRef::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3333075425 * XmlSchemaGroupRef_GetOptimizedParticle_m2106065762 (XmlSchemaGroupRef_t1692148115 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupRef_ParticleEquals_m394063460 (XmlSchemaGroupRef_t1692148115 * __this, XmlSchemaParticle_t3333075425 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupRef_ValidateDerivationByRestriction_m1189255759 (XmlSchemaGroupRef_t1692148115 * __this, XmlSchemaParticle_t3333075425 * ___baseParticle, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_CheckRecursion_m1583711550 (XmlSchemaGroupRef_t1692148115 * __this, int32_t ___depth, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_ValidateUniqueParticleAttribution_m1025586892 (XmlSchemaGroupRef_t1692148115 * __this, XmlSchemaObjectTable_t2095492222 * ___qnames, ArrayList_t1468494371 * ___nsNames, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_ValidateUniqueTypeAttribution_m4244410083 (XmlSchemaGroupRef_t1692148115 * __this, XmlSchemaObjectTable_t2095492222 * ___labels, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupRef System.Xml.Schema.XmlSchemaGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaGroupRef_t1692148115 * XmlSchemaGroupRef_Read_m3078562034 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t1531349100 * ___reader, ValidationEventHandler_t477176618 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
