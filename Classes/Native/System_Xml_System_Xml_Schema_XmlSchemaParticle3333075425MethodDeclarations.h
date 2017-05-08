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

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2095492222;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Decimal173022926.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandler477176618.h"
#include "System_Xml_System_Xml_Schema_XmlSchema2944277931.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3333075425.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObjectTable2095492222.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C"  void XmlSchemaParticle__ctor_m3924505810 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C"  XmlSchemaParticle_t3333075425 * XmlSchemaParticle_get_Empty_m3425435386 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MinOccursString_m4057342960 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MinOccursString_m3041568289 (XmlSchemaParticle_t3333075425 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MaxOccursString_m365438406 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MaxOccursString_m1832574879 (XmlSchemaParticle_t3333075425 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C"  Decimal_t173022926  XmlSchemaParticle_get_MinOccurs_m3507692149 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MinOccurs_m3239146064 (XmlSchemaParticle_t3333075425 * __this, Decimal_t173022926  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C"  Decimal_t173022926  XmlSchemaParticle_get_MaxOccurs_m679464475 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MaxOccurs_m2379698806 (XmlSchemaParticle_t3333075425 * __this, Decimal_t173022926  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C"  Decimal_t173022926  XmlSchemaParticle_get_ValidatedMinOccurs_m690640807 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C"  Decimal_t173022926  XmlSchemaParticle_get_ValidatedMaxOccurs_m1870857405 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t3333075425 * XmlSchemaParticle_GetOptimizedParticle_m1871672636 (XmlSchemaParticle_t3333075425 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C"  XmlSchemaParticle_t3333075425 * XmlSchemaParticle_GetShallowClone_m364707317 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CompileOccurence_m2531407885 (XmlSchemaParticle_t3333075425 * __this, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaParticle_CopyInfo_m1114742570 (XmlSchemaParticle_t3333075425 * __this, XmlSchemaParticle_t3333075425 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateOccurenceRangeOK_m35597825 (XmlSchemaParticle_t3333075425 * __this, XmlSchemaParticle_t3333075425 * ___other, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C"  Decimal_t173022926  XmlSchemaParticle_GetMinEffectiveTotalRange_m687330041 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C"  Decimal_t173022926  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m1304221946 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C"  bool XmlSchemaParticle_ValidateIsEmptiable_m516083941 (XmlSchemaParticle_t3333075425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateDerivationByRestriction_m231087025 (XmlSchemaParticle_t3333075425 * __this, XmlSchemaParticle_t3333075425 * ___baseParticle, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueParticleAttribution_m385884854 (XmlSchemaParticle_t3333075425 * __this, XmlSchemaObjectTable_t2095492222 * ___qnames, ArrayList_t1468494371 * ___nsNames, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueTypeAttribution_m3834210893 (XmlSchemaParticle_t3333075425 * __this, XmlSchemaObjectTable_t2095492222 * ___labels, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CheckRecursion_m1307480516 (XmlSchemaParticle_t3333075425 * __this, int32_t ___depth, ValidationEventHandler_t477176618 * ___h, XmlSchema_t2944277931 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaParticle_ParticleEquals_m3292208546 (XmlSchemaParticle_t3333075425 * __this, XmlSchemaParticle_t3333075425 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
