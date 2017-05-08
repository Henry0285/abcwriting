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

// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t1043116682;
// System.Collections.Generic.List`1<System.Data.DataRelation>
struct List_1_t2145364394;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "System_Data_System_Data_XmlWriteMode1688022184.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"

// System.Void XmlTableWriter::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Collections.Generic.List`1<System.Data.DataRelation>,System.String,System.String)
extern "C"  void XmlTableWriter_WriteTables_m3701515798 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, List_1_t1043116682 * ___tables, List_1_t2145364394 * ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void XmlTableWriter::WriteTableList(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataRowVersion)
extern "C"  void XmlTableWriter_WriteTableList_m2522002349 (Il2CppObject * __this /* static, unused */, XmlWriter_t1713407564 * ___writer, int32_t ___mode, List_1_t1043116682 * ___tables, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
