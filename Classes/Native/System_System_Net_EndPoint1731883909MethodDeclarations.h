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

// System.Net.EndPoint
struct EndPoint_t1731883909;
// System.Net.SocketAddress
struct SocketAddress_t3650678549;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1717401776.h"
#include "System_System_Net_SocketAddress3650678549.h"

// System.Void System.Net.EndPoint::.ctor()
extern "C"  void EndPoint__ctor_m155573939 (EndPoint_t1731883909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern "C"  int32_t EndPoint_get_AddressFamily_m2342172503 (EndPoint_t1731883909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t1731883909 * EndPoint_Create_m435047378 (EndPoint_t1731883909 * __this, SocketAddress_t3650678549 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern "C"  SocketAddress_t3650678549 * EndPoint_Serialize_m137793051 (EndPoint_t1731883909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
extern "C"  Exception_t1145979430 * EndPoint_NotImplemented_m972638115 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
