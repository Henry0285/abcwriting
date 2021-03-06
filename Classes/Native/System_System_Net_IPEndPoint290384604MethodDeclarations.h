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

// System.Net.IPEndPoint
struct IPEndPoint_t290384604;
// System.Net.IPAddress
struct IPAddress_t3205471441;
// System.Net.EndPoint
struct EndPoint_t1731883909;
// System.Net.SocketAddress
struct SocketAddress_t3650678549;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPAddress3205471441.h"
#include "System_System_Net_Sockets_AddressFamily1717401776.h"
#include "System_System_Net_SocketAddress3650678549.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void IPEndPoint__ctor_m3477723888 (IPEndPoint_t290384604 * __this, IPAddress_t3205471441 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C"  void IPEndPoint__ctor_m403419585 (IPEndPoint_t290384604 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C"  IPAddress_t3205471441 * IPEndPoint_get_Address_m1772553499 (IPEndPoint_t290384604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C"  void IPEndPoint_set_Address_m42566818 (IPEndPoint_t290384604 * __this, IPAddress_t3205471441 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C"  int32_t IPEndPoint_get_AddressFamily_m1458651834 (IPEndPoint_t290384604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C"  int32_t IPEndPoint_get_Port_m1973738026 (IPEndPoint_t290384604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C"  void IPEndPoint_set_Port_m3404016555 (IPEndPoint_t290384604 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t1731883909 * IPEndPoint_Create_m4193240009 (IPEndPoint_t290384604 * __this, SocketAddress_t3650678549 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C"  SocketAddress_t3650678549 * IPEndPoint_Serialize_m65873566 (IPEndPoint_t290384604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C"  String_t* IPEndPoint_ToString_m3480883157 (IPEndPoint_t290384604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C"  bool IPEndPoint_Equals_m549535415 (IPEndPoint_t290384604 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C"  int32_t IPEndPoint_GetHashCode_m4274464705 (IPEndPoint_t290384604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
