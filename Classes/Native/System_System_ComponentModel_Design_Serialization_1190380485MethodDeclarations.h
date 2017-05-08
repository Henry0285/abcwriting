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

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t1190380485;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t2033110931;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"

// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C"  void InstanceDescriptor__ctor_m1126602508 (InstanceDescriptor_t1190380485 * __this, MemberInfo_t * ___member, Il2CppObject * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern "C"  void InstanceDescriptor__ctor_m2253228209 (InstanceDescriptor_t1190380485 * __this, MemberInfo_t * ___member, Il2CppObject * ___arguments, bool ___isComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::ValidateMember(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C"  void InstanceDescriptor_ValidateMember_m4035908944 (InstanceDescriptor_t1190380485 * __this, MemberInfo_t * ___member, Il2CppObject * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern "C"  Il2CppObject * InstanceDescriptor_Invoke_m3441712808 (InstanceDescriptor_t1190380485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
