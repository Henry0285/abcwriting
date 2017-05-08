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

// System.Xml.DTDReader
struct DTDReader_t2693425281;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.String
struct String_t;
// System.Xml.XmlException
struct XmlException_t1578947676;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t1584041224;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t554071894;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t932797374;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t4118841494;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t1189197916;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3156630045;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1003748425;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3993153307;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t1963412794;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1935022842;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_Mono_Xml_DTDElementDeclaration1584041224.h"
#include "System_Xml_Mono_Xml_DTDContentModelCollection932797374.h"
#include "System_Xml_Mono_Xml_DTDContentModel554071894.h"
#include "System_Xml_Mono_Xml_DTDEntityBase4118841494.h"
#include "System_Xml_Mono_Xml_DTDEntityDeclaration3156630045.h"
#include "System_Xml_Mono_Xml_DTDAttributeDefinition3993153307.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException1935022842.h"

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C"  void DTDReader__ctor_m3242309066 (DTDReader_t2693425281 * __this, DTDObjectModel_t281012916 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C"  String_t* DTDReader_get_BaseURI_m3193018227 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C"  bool DTDReader_get_Normalization_m766058224 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C"  void DTDReader_set_Normalization_m413585299 (DTDReader_t2693425281 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C"  int32_t DTDReader_get_LineNumber_m1287802086 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C"  int32_t DTDReader_get_LinePosition_m202441276 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::HasLineInfo()
extern "C"  bool DTDReader_HasLineInfo_m840988804 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C"  XmlException_t1578947676 * DTDReader_NotWFError_m276119555 (DTDReader_t2693425281 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C"  void DTDReader_Init_m272889716 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C"  DTDObjectModel_t281012916 * DTDReader_GenerateDTDObjectModel_m2486851386 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C"  bool DTDReader_ProcessDTDSubset_m3038792909 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C"  void DTDReader_CompileDeclaration_m2197956661 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C"  void DTDReader_ReadIgnoreSect_m1752413883 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C"  DTDElementDeclaration_t1584041224 * DTDReader_ReadElementDecl_m3548987293 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C"  void DTDReader_ReadContentSpec_m1005798624 (DTDReader_t2693425281 * __this, DTDElementDeclaration_t1584041224 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C"  DTDContentModel_t554071894 * DTDReader_ReadCP_m707871056 (DTDReader_t2693425281 * __this, DTDElementDeclaration_t1584041224 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C"  void DTDReader_AddContentModel_m398336045 (DTDReader_t2693425281 * __this, DTDContentModelCollection_t932797374 * ___cmc, DTDContentModel_t554071894 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C"  void DTDReader_ReadParameterEntityDecl_m789142712 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C"  void DTDReader_ResolveExternalEntityReplacementText_m2909092085 (DTDReader_t2693425281 * __this, DTDEntityBase_t4118841494 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C"  void DTDReader_ResolveInternalEntityReplacementText_m993077459 (DTDReader_t2693425281 * __this, DTDEntityBase_t4118841494 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C"  int32_t DTDReader_GetCharacterReference_m4176469706 (DTDReader_t2693425281 * __this, DTDEntityBase_t4118841494 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C"  String_t* DTDReader_GetPEValue_m1961310107 (DTDReader_t2693425281 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C"  DTDParameterEntityDeclaration_t1189197916 * DTDReader_GetPEDecl_m1990202298 (DTDReader_t2693425281 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C"  bool DTDReader_TryExpandPERef_m2663515709 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C"  bool DTDReader_TryExpandPERefSpaceKeep_m3216790684 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C"  void DTDReader_ExpandPERef_m3781106628 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C"  DTDEntityDeclaration_t3156630045 * DTDReader_ReadEntityDecl_m3296034913 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDReader_ReadEntityValueDecl_m1608079241 (DTDReader_t2693425281 * __this, DTDEntityDeclaration_t3156630045 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C"  DTDAttListDeclaration_t1003748425 * DTDReader_ReadAttListDecl_m2084903113 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C"  DTDAttributeDefinition_t3993153307 * DTDReader_ReadAttributeDefinition_m1204959435 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadAttributeDefaultValue(Mono.Xml.DTDAttributeDefinition)
extern "C"  void DTDReader_ReadAttributeDefaultValue_m928024753 (DTDReader_t2693425281 * __this, DTDAttributeDefinition_t3993153307 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C"  DTDNotationDeclaration_t1963412794 * DTDReader_ReadNotationDecl_m1748452801 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C"  void DTDReader_ReadExternalID_m4065800236 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C"  String_t* DTDReader_ReadSystemLiteral_m101642390 (DTDReader_t2693425281 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C"  String_t* DTDReader_ReadPubidLiteral_m766636854 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C"  String_t* DTDReader_ReadName_m3281724576 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNmToken()
extern "C"  String_t* DTDReader_ReadNmToken_m2423121907 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C"  String_t* DTDReader_ReadNameOrNmToken_m339614506 (DTDReader_t2693425281 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C"  void DTDReader_Expect_m2279575362 (DTDReader_t2693425281 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C"  void DTDReader_Expect_m2337773017 (DTDReader_t2693425281 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C"  void DTDReader_ExpectAfterWhitespace_m1985518503 (DTDReader_t2693425281 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C"  bool DTDReader_SkipWhitespace_m1496239926 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C"  int32_t DTDReader_PeekChar_m809779305 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C"  int32_t DTDReader_ReadChar_m2015786776 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C"  void DTDReader_ReadComment_m3360494005 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C"  void DTDReader_ReadProcessingInstruction_m1092446021 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C"  void DTDReader_ReadTextDeclaration_m95938207 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C"  void DTDReader_AppendNameChar_m282700764 (DTDReader_t2693425281 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C"  void DTDReader_CheckNameCapacity_m3837130677 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C"  String_t* DTDReader_CreateNameString_m1666249811 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C"  void DTDReader_AppendValueChar_m2821976888 (DTDReader_t2693425281 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C"  String_t* DTDReader_CreateValueString_m2006673799 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C"  void DTDReader_ClearValueBuffer_m3573008646 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadDefaultAttribute()
extern "C"  String_t* DTDReader_ReadDefaultAttribute_m996251280 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C"  void DTDReader_PushParserInput_m2165443049 (DTDReader_t2693425281 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C"  void DTDReader_PopParserInput_m3467118866 (DTDReader_t2693425281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.Schema.XmlSchemaException)
extern "C"  void DTDReader_HandleError_m2679712568 (DTDReader_t2693425281 * __this, XmlSchemaException_t1935022842 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
