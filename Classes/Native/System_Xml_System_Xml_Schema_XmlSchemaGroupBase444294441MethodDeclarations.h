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

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t444294441;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t2364217941;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase444294441.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3333075425.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny2364217941.h"

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C"  void XmlSchemaGroupBase__ctor_m2369132284 (XmlSchemaGroupBase_t444294441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C"  XmlSchemaObjectCollection_t3000072622 * XmlSchemaGroupBase_get_CompiledItems_m1894191985 (XmlSchemaGroupBase_t444294441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroupBase_CopyOptimizedItems_m583365047 (XmlSchemaGroupBase_t444294441 * __this, XmlSchemaGroupBase_t444294441 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupBase_ParticleEquals_m4104163352 (XmlSchemaGroupBase_t444294441 * __this, XmlSchemaParticle_t3333075425 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupBase_CheckRecursion_m2590962666 (XmlSchemaGroupBase_t444294441 * __this, int32_t ___depth, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m1764454527 (XmlSchemaGroupBase_t444294441 * __this, XmlSchemaAny_t2364217941 * ___any, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateRecurse_m1636481350 (XmlSchemaGroupBase_t444294441 * __this, XmlSchemaGroupBase_t444294441 * ___baseGroup, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m2049345283 (XmlSchemaGroupBase_t444294441 * __this, XmlSchemaGroupBase_t444294441 * ___baseGroup, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___isLax, bool ___isMapAndSum, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
