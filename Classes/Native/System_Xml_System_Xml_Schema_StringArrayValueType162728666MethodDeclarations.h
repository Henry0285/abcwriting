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

// System.String[]
struct StringU5BU5D_t3764931161;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_StringArrayValueType162728666.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Xml.Schema.StringArrayValueType::.ctor(System.String[])
extern "C"  void StringArrayValueType__ctor_m3839297877 (StringArrayValueType_t162728666 * __this, StringU5BU5D_t3764931161* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.StringArrayValueType::get_Value()
extern "C"  StringU5BU5D_t3764931161* StringArrayValueType_get_Value_m1419787520 (StringArrayValueType_t162728666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::Equals(System.Object)
extern "C"  bool StringArrayValueType_Equals_m1456450166 (StringArrayValueType_t162728666 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringArrayValueType::GetHashCode()
extern "C"  int32_t StringArrayValueType_GetHashCode_m1500812434 (StringArrayValueType_t162728666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::op_Equality(System.Xml.Schema.StringArrayValueType,System.Xml.Schema.StringArrayValueType)
extern "C"  bool StringArrayValueType_op_Equality_m2624054117 (Il2CppObject * __this /* static, unused */, StringArrayValueType_t162728666  ___v1, StringArrayValueType_t162728666  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringArrayValueType_t162728666;
struct StringArrayValueType_t162728666_marshaled_pinvoke;

extern "C" void StringArrayValueType_t162728666_marshal_pinvoke(const StringArrayValueType_t162728666& unmarshaled, StringArrayValueType_t162728666_marshaled_pinvoke& marshaled);
extern "C" void StringArrayValueType_t162728666_marshal_pinvoke_back(const StringArrayValueType_t162728666_marshaled_pinvoke& marshaled, StringArrayValueType_t162728666& unmarshaled);
extern "C" void StringArrayValueType_t162728666_marshal_pinvoke_cleanup(StringArrayValueType_t162728666_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringArrayValueType_t162728666;
struct StringArrayValueType_t162728666_marshaled_com;

extern "C" void StringArrayValueType_t162728666_marshal_com(const StringArrayValueType_t162728666& unmarshaled, StringArrayValueType_t162728666_marshaled_com& marshaled);
extern "C" void StringArrayValueType_t162728666_marshal_com_back(const StringArrayValueType_t162728666_marshaled_com& marshaled, StringArrayValueType_t162728666& unmarshaled);
extern "C" void StringArrayValueType_t162728666_marshal_com_cleanup(StringArrayValueType_t162728666_marshaled_com& marshaled);
