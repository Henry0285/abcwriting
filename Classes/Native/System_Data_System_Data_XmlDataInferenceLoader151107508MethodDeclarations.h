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

// System.Data.XmlDataInferenceLoader
struct XmlDataInferenceLoader_t151107508;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Xml.XmlElement
struct XmlElement_t2049349347;
// System.Data.TableMapping
struct TableMapping_t1043808253;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t1080745049;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Xml_System_Xml_XmlDocument3951480190.h"
#include "System_Data_System_Data_XmlReadMode1968640897.h"
#include "System_Xml_System_Xml_XmlElement2049349347.h"
#include "System_Data_System_Data_TableMapping1043808253.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_MappingType1402712781.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Collections_Hashtable1312997718.h"
#include "System_Data_System_Data_ElementMappingType1366136149.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void System.Data.XmlDataInferenceLoader::.ctor(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C"  void XmlDataInferenceLoader__ctor_m684950188 (XmlDataInferenceLoader_t151107508 * __this, DataSet_t646994783 * ___ds, XmlDocument_t3951480190 * ___doc, int32_t ___mode, StringU5BU5D_t3764931161* ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::Infer(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C"  void XmlDataInferenceLoader_Infer_m1499156976 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___dataset, XmlDocument_t3951480190 * ___document, int32_t ___mode, StringU5BU5D_t3764931161* ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::ReadXml()
extern "C"  void XmlDataInferenceLoader_ReadXml_m1308735681 (XmlDataInferenceLoader_t151107508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTopLevelTable(System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferTopLevelTable_m3870977358 (XmlDataInferenceLoader_t151107508 * __this, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferColumnElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferColumnElement_m2314997536 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___table, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::CheckExtraneousElementColumn(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_CheckExtraneousElementColumn_m1530511180 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___parentTable, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulatePrimaryKey(System.Data.TableMapping)
extern "C"  void XmlDataInferenceLoader_PopulatePrimaryKey_m1777186904 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulateRelationStructure(System.String,System.String,System.String)
extern "C"  void XmlDataInferenceLoader_PopulateRelationStructure_m3876480897 (XmlDataInferenceLoader_t151107508 * __this, String_t* ___parent, String_t* ___child, String_t* ___pkeyColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferRepeatedElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferRepeatedElement_m3736513928 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___parentTable, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTableElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferTableElement_m3994945564 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___parentTable, XmlElement_t2049349347 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.XmlDataInferenceLoader::GetMappedTable(System.Data.TableMapping,System.String,System.String)
extern "C"  TableMapping_t1043808253 * XmlDataInferenceLoader_GetMappedTable_m352070190 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___parent, String_t* ___tableName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlDataInferenceLoader::GetMappedColumn(System.Data.TableMapping,System.String,System.String,System.String,System.Data.MappingType,System.Type)
extern "C"  DataColumn_t1080745049 * XmlDataInferenceLoader_GetMappedColumn_m2548924072 (XmlDataInferenceLoader_t151107508 * __this, TableMapping_t1043808253 * ___table, String_t* ___name, String_t* ___prefix, String_t* ___ns, int32_t ___type, Type_t * ___optColType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::SetAsExistingTable(System.Xml.XmlElement,System.Collections.Hashtable)
extern "C"  void XmlDataInferenceLoader_SetAsExistingTable_m4015556322 (Il2CppObject * __this /* static, unused */, XmlElement_t2049349347 * ___el, Hashtable_t1312997718 * ___existingTables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ElementMappingType System.Data.XmlDataInferenceLoader::GetElementMappingType(System.Xml.XmlElement,System.Collections.ArrayList,System.Collections.Hashtable)
extern "C"  int32_t XmlDataInferenceLoader_GetElementMappingType_m1953279404 (Il2CppObject * __this /* static, unused */, XmlElement_t2049349347 * ___el, ArrayList_t1468494371 * ___ignoredNamespaces, Hashtable_t1312997718 * ___existingTables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable()
extern "C"  bool XmlDataInferenceLoader_IsDocumentElementTable_m3705770247 (XmlDataInferenceLoader_t151107508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable(System.Xml.XmlElement,System.Collections.ArrayList)
extern "C"  bool XmlDataInferenceLoader_IsDocumentElementTable_m3336876403 (Il2CppObject * __this /* static, unused */, XmlElement_t2049349347 * ___top, ArrayList_t1468494371 * ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
