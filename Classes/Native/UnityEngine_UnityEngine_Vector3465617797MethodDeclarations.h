﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "mscorlib_System_Object707969140.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t465617797 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m2720820983 (Vector3_t465617797 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t465617797  Vector3_Lerp_m2935648359 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, Vector3_t465617797  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C"  float Vector3_get_Item_m3616014016 (Vector3_t465617797 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C"  void Vector3_set_Item_m499708011 (Vector3_t465617797 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m1754570744 (Vector3_t465617797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m2692262876 (Vector3_t465617797 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Vector3_Normalize_m2140428981 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t465617797  Vector3_get_normalized_m936072361 (Vector3_t465617797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m3857189970 (Vector3_t465617797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m3161182818 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___lhs, Vector3_t465617797  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m1859670022 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, Vector3_t465617797  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C"  float Vector3_Magnitude_m1349200714 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m3759098164 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1814096310 (Vector3_t465617797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Vector3_Min_m4249067335 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___lhs, Vector3_t465617797  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Vector3_Max_m2105825185 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___lhs, Vector3_t465617797  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t465617797  Vector3_get_zero_m1527993324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t465617797  Vector3_get_one_m627547232 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t465617797  Vector3_get_forward_m1201659139 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t465617797  Vector3_get_back_m4246539215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t465617797  Vector3_get_up_m2725403797 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t465617797  Vector3_get_down_m2372302126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t465617797  Vector3_get_left_m2429378123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t465617797  Vector3_get_right_m1884123822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, Vector3_t465617797  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Vector3_op_Subtraction_m2407545601 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, Vector3_t465617797  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t465617797  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t465617797  Vector3_op_Division_m3315615850 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m305888255 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___lhs, Vector3_t465617797  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m799191452 (Il2CppObject * __this /* static, unused */, Vector3_t465617797  ___lhs, Vector3_t465617797  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector3_t465617797;
struct Vector3_t465617797_marshaled_pinvoke;

extern "C" void Vector3_t465617797_marshal_pinvoke(const Vector3_t465617797& unmarshaled, Vector3_t465617797_marshaled_pinvoke& marshaled);
extern "C" void Vector3_t465617797_marshal_pinvoke_back(const Vector3_t465617797_marshaled_pinvoke& marshaled, Vector3_t465617797& unmarshaled);
extern "C" void Vector3_t465617797_marshal_pinvoke_cleanup(Vector3_t465617797_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector3_t465617797;
struct Vector3_t465617797_marshaled_com;

extern "C" void Vector3_t465617797_marshal_com(const Vector3_t465617797& unmarshaled, Vector3_t465617797_marshaled_com& marshaled);
extern "C" void Vector3_t465617797_marshal_com_back(const Vector3_t465617797_marshaled_com& marshaled, Vector3_t465617797& unmarshaled);
extern "C" void Vector3_t465617797_marshal_com_cleanup(Vector3_t465617797_marshaled_com& marshaled);
