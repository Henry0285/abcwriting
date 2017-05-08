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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_StringValueType2390157331.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Xml.Schema.StringValueType::.ctor(System.String)
extern "C"  void StringValueType__ctor_m4096428974 (StringValueType_t2390157331 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.StringValueType::get_Value()
extern "C"  String_t* StringValueType_get_Value_m2785062139 (StringValueType_t2390157331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::Equals(System.Object)
extern "C"  bool StringValueType_Equals_m3508391181 (StringValueType_t2390157331 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringValueType::GetHashCode()
extern "C"  int32_t StringValueType_GetHashCode_m690459435 (StringValueType_t2390157331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringValueType::op_Equality(System.Xml.Schema.StringValueType,System.Xml.Schema.StringValueType)
extern "C"  bool StringValueType_op_Equality_m2575362752 (Il2CppObject * __this /* static, unused */, StringValueType_t2390157331  ___v1, StringValueType_t2390157331  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringValueType_t2390157331;
struct StringValueType_t2390157331_marshaled_pinvoke;

extern "C" void StringValueType_t2390157331_marshal_pinvoke(const StringValueType_t2390157331& unmarshaled, StringValueType_t2390157331_marshaled_pinvoke& marshaled);
extern "C" void StringValueType_t2390157331_marshal_pinvoke_back(const StringValueType_t2390157331_marshaled_pinvoke& marshaled, StringValueType_t2390157331& unmarshaled);
extern "C" void StringValueType_t2390157331_marshal_pinvoke_cleanup(StringValueType_t2390157331_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringValueType_t2390157331;
struct StringValueType_t2390157331_marshaled_com;

extern "C" void StringValueType_t2390157331_marshal_com(const StringValueType_t2390157331& unmarshaled, StringValueType_t2390157331_marshaled_com& marshaled);
extern "C" void StringValueType_t2390157331_marshal_com_back(const StringValueType_t2390157331_marshaled_com& marshaled, StringValueType_t2390157331& unmarshaled);
extern "C" void StringValueType_t2390157331_marshal_com_cleanup(StringValueType_t2390157331_marshaled_com& marshaled);
