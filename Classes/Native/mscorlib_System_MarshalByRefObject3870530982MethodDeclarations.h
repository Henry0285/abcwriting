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

// System.MarshalByRefObject
struct MarshalByRefObject_t3870530982;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1163883179;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t786342156;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity1163883179.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.MarshalByRefObject::.ctor()
extern "C"  void MarshalByRefObject__ctor_m529577364 (MarshalByRefObject_t3870530982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C"  ServerIdentity_t1163883179 * MarshalByRefObject_get_ObjectIdentity_m2107521536 (MarshalByRefObject_t3870530982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void MarshalByRefObject_set_ObjectIdentity_m1001094031 (MarshalByRefObject_t3870530982 * __this, ServerIdentity_t1163883179 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C"  ObjRef_t786342156 * MarshalByRefObject_CreateObjRef_m2925277222 (MarshalByRefObject_t3870530982 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C"  Il2CppObject * MarshalByRefObject_InitializeLifetimeService_m1712948803 (MarshalByRefObject_t3870530982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
