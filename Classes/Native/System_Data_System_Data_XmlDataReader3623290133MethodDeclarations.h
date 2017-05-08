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

// System.Data.XmlDataReader
struct XmlDataReader_t3623290133;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Data.DataRow
struct DataRow_t3422932271;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet646994783.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Data_System_Data_XmlReadMode1968640897.h"
#include "System_Data_System_Data_DataRow3422932271.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Data.XmlDataReader::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  void XmlDataReader__ctor_m2420783971 (XmlDataReader_t3623290133 * __this, DataSet_t646994783 * ___ds, XmlReader_t1154388064 * ___xr, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadXml(System.Data.DataSet,System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  void XmlDataReader_ReadXml_m3349656688 (Il2CppObject * __this /* static, unused */, DataSet_t646994783 * ___dataset, XmlReader_t1154388064 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::Process()
extern "C"  void XmlDataReader_Process_m643489426 (XmlDataReader_t3623290133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataReader::IsTopLevelDataSet()
extern "C"  bool XmlDataReader_IsTopLevelDataSet_m2907275022 (XmlDataReader_t3623290133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadTopLevelElement()
extern "C"  void XmlDataReader_ReadTopLevelElement_m2406853570 (XmlDataReader_t3623290133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadDataSetContent()
extern "C"  void XmlDataReader_ReadDataSetContent_m3742625126 (XmlDataReader_t3623290133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElement(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElement_m2749598594 (XmlDataReader_t3623290133 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementAttribute(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementAttribute_m3404880590 (XmlDataReader_t3623290133 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementContent(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementContent_m4179593367 (XmlDataReader_t3623290133 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataReader::ReadElementElement(System.Data.DataRow)
extern "C"  void XmlDataReader_ReadElementElement_m1609777002 (XmlDataReader_t3623290133 * __this, DataRow_t3422932271 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlDataReader::StringToObject(System.Type,System.String)
extern "C"  Il2CppObject * XmlDataReader_StringToObject_m3733001322 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
