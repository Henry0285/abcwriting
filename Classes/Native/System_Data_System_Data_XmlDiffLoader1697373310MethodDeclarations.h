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

// System.Data.XmlDiffLoader
struct XmlDiffLoader_t1697373310;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Data_System_Data_DataTable1931745339.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.XmlDiffLoader::.ctor(System.Data.DataSet)
extern "C"  void XmlDiffLoader__ctor_m1713931939 (XmlDiffLoader_t1697373310 * __this, DataSet_t646994783 * ___DSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::Load(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_Load_m3151647502 (XmlDiffLoader_t1697373310 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrent(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadCurrent_m3326391003 (XmlDiffLoader_t1697373310 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBefore(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadBefore_m1420065711 (XmlDiffLoader_t1697373310 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadErrors(System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadErrors_m3895295245 (XmlDiffLoader_t1697373310 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumns(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumns_m3999573468 (XmlDiffLoader_t1697373310 * __this, DataTable_t1931745339 * ___Table, DataRow_t3422932271 * ___Row, XmlReader_t1154388064 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnAttributes(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumnAttributes_m490227218 (XmlDiffLoader_t1697373310 * __this, DataTable_t1931745339 * ___Table, DataRow_t3422932271 * ___Row, XmlReader_t1154388064 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadColumnChildren(System.Data.DataTable,System.Data.DataRow,System.Xml.XmlReader,System.Data.DataRowVersion)
extern "C"  void XmlDiffLoader_LoadColumnChildren_m1480798540 (XmlDiffLoader_t1697373310 * __this, DataTable_t1931745339 * ___Table, DataRow_t3422932271 * ___Row, XmlReader_t1154388064 * ___reader, int32_t ___loadType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadBeforeTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadBeforeTable_m1982504958 (XmlDiffLoader_t1697373310 * __this, DataTable_t1931745339 * ___Table, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDiffLoader::LoadCurrentTable(System.Data.DataTable,System.Xml.XmlReader)
extern "C"  void XmlDiffLoader_LoadCurrentTable_m4106954534 (XmlDiffLoader_t1697373310 * __this, DataTable_t1931745339 * ___Table, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.XmlDiffLoader::GetTable(System.String)
extern "C"  DataTable_t1931745339 * XmlDiffLoader_GetTable_m1294408002 (XmlDiffLoader_t1697373310 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
