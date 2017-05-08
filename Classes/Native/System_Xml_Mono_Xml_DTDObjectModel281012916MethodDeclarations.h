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

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t1817984508;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t63721984;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1826977519;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1459123399;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t4114903512;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t1897009230;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t3627496369;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t4030437732;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t1790235737;
// System.Xml.Schema.XmlSchemaException[]
struct XmlSchemaExceptionU5BU5D_t3621734367;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1935022842;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1420178065;
// System.Xml.XmlParserContext
struct XmlParserContext_t2532808825;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_System_Xml_XmlResolver2792156615.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException1935022842.h"
#include "System_Xml_System_Xml_XmlParserContext2532808825.h"

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C"  void DTDObjectModel__ctor_m3188704577 (DTDObjectModel_t281012916 * __this, XmlNameTable_t1855692664 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C"  String_t* DTDObjectModel_get_BaseURI_m3240621308 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C"  void DTDObjectModel_set_BaseURI_m1921096741 (DTDObjectModel_t281012916 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C"  bool DTDObjectModel_get_IsStandalone_m126317583 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C"  void DTDObjectModel_set_IsStandalone_m2449287916 (DTDObjectModel_t281012916 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C"  String_t* DTDObjectModel_get_Name_m2021234090 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C"  void DTDObjectModel_set_Name_m1613468709 (DTDObjectModel_t281012916 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C"  XmlNameTable_t1855692664 * DTDObjectModel_get_NameTable_m1220238702 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C"  String_t* DTDObjectModel_get_PublicId_m1500149869 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C"  void DTDObjectModel_set_PublicId_m1395674136 (DTDObjectModel_t281012916 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C"  String_t* DTDObjectModel_get_SystemId_m106311485 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C"  void DTDObjectModel_set_SystemId_m3945659740 (DTDObjectModel_t281012916 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C"  String_t* DTDObjectModel_get_InternalSubset_m2342065814 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C"  void DTDObjectModel_set_InternalSubset_m3179625687 (DTDObjectModel_t281012916 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C"  bool DTDObjectModel_get_InternalSubsetHasPEReference_m970176805 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C"  void DTDObjectModel_set_InternalSubsetHasPEReference_m525536928 (DTDObjectModel_t281012916 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C"  int32_t DTDObjectModel_get_LineNumber_m117361963 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C"  void DTDObjectModel_set_LineNumber_m3202936032 (DTDObjectModel_t281012916 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C"  int32_t DTDObjectModel_get_LinePosition_m3142029513 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C"  void DTDObjectModel_set_LinePosition_m1097996678 (DTDObjectModel_t281012916 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C"  String_t* DTDObjectModel_ResolveEntity_m1494500845 (DTDObjectModel_t281012916 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C"  XmlResolver_t2792156615 * DTDObjectModel_get_Resolver_m3839048542 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDObjectModel_set_XmlResolver_m1066414750 (DTDObjectModel_t281012916 * __this, XmlResolver_t2792156615 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C"  Hashtable_t1312997718 * DTDObjectModel_get_ExternalResources_m2164608555 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::get_Factory()
extern "C"  DTDAutomataFactory_t1817984508 * DTDObjectModel_get_Factory_m20367355 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C"  DTDElementDeclarationCollection_t63721984 * DTDObjectModel_get_ElementDecls_m2565187196 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C"  DTDAttListDeclarationCollection_t1826977519 * DTDObjectModel_get_AttListDecls_m1461816028 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C"  DTDEntityDeclarationCollection_t1459123399 * DTDObjectModel_get_EntityDecls_m3681757084 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C"  DTDParameterEntityDeclarationCollection_t4114903512 * DTDObjectModel_get_PEDecls_m3887496881 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C"  DTDNotationDeclarationCollection_t1897009230 * DTDObjectModel_get_NotationDecls_m660985134 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDObjectModel::get_RootAutomata()
extern "C"  DTDAutomata_t2713586350 * DTDObjectModel_get_RootAutomata_m1044191387 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::get_Empty()
extern "C"  DTDEmptyAutomata_t3627496369 * DTDObjectModel_get_Empty_m429932175 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::get_Any()
extern "C"  DTDAnyAutomata_t4030437732 * DTDObjectModel_get_Any_m2474853587 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::get_Invalid()
extern "C"  DTDInvalidAutomata_t1790235737 * DTDObjectModel_get_Invalid_m3133341143 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException[] Mono.Xml.DTDObjectModel::get_Errors()
extern "C"  XmlSchemaExceptionU5BU5D_t3621734367* DTDObjectModel_get_Errors_m693316784 (DTDObjectModel_t281012916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.Schema.XmlSchemaException)
extern "C"  void DTDObjectModel_AddError_m1733454408 (DTDObjectModel_t281012916 * __this, XmlSchemaException_t1935022842 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C"  String_t* DTDObjectModel_GenerateEntityAttributeText_m3127264623 (DTDObjectModel_t281012916 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C"  XmlTextReader_t1420178065 * DTDObjectModel_GenerateEntityContentReader_m650571468 (DTDObjectModel_t281012916 * __this, String_t* ___entityName, XmlParserContext_t2532808825 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
