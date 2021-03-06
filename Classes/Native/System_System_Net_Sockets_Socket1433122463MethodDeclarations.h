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

// System.Net.Sockets.Socket
struct Socket_t1433122463;
// System.Net.SocketAddress
struct SocketAddress_t3650678549;
// System.Net.EndPoint
struct EndPoint_t1731883909;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1145979430;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1717401776.h"
#include "System_System_Net_Sockets_SocketType1929343271.h"
#include "System_System_Net_Sockets_ProtocolType4133062516.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Net_Sockets_SocketFlags2257682880.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "System_System_Net_SocketAddress3650678549.h"
#include "System_System_Net_EndPoint1731883909.h"
#include "System_System_Net_Sockets_SocketError3447067203.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Net_Sockets_SelectMode3261703229.h"
#include "System_System_Net_Sockets_SocketOptionLevel56649698.h"
#include "System_System_Net_Sockets_SocketOptionName2976699083.h"
#include "System_System_Net_Sockets_SocketShutdown1001626003.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
extern "C"  void Socket__ctor_m1201922228 (Socket_t1433122463 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C"  void Socket__ctor_m2624772808 (Socket_t1433122463 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C"  void Socket__cctor_m3749119652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::System.IDisposable.Dispose()
extern "C"  void Socket_System_IDisposable_Dispose_m2593652304 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SocketDefaults()
extern "C"  void Socket_SocketDefaults_m456267734 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern "C"  void Socket_set_DontFragment_m3458934082 (Socket_t1433122463 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
extern "C"  SocketAddress_t3650678549 * Socket_LocalEndPoint_internal_m638078112 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C"  EndPoint_t1731883909 * Socket_get_LocalEndPoint_m289394380 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern "C"  int32_t Socket_get_SocketType_m2762979437 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
extern "C"  int32_t Socket_get_SendTimeout_m1437282989 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
extern "C"  int32_t Socket_get_ReceiveTimeout_m177975220 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern "C"  IntPtr_t Socket_Accept_internal_m2363184518 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, int32_t* ___error, bool ___blocking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern "C"  Socket_t1433122463 * Socket_Accept_m678452185 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Socket_BeginReceive_m4000890230 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Socket_BeginSend_m2442178957 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Bind_internal_m4281173658 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3650678549 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern "C"  void Socket_Bind_m2654205209 (Socket_t1433122463 * __this, EndPoint_t1731883909 * ___local_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern "C"  int32_t Socket_EndReceive_m568791588 (Socket_t1433122463 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_EndReceive_m2202159511 (Socket_t1433122463 * __this, Il2CppObject * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern "C"  int32_t Socket_EndSend_m2139370489 (Socket_t1433122463 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_EndSend_m1764982234 (Socket_t1433122463 * __this, Il2CppObject * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C"  Exception_t1145979430 * Socket_InvalidAsyncOp_m3344962652 (Socket_t1433122463 * __this, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern "C"  void Socket_Listen_internal_m2839465108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, int32_t ___backlog, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern "C"  void Socket_Listen_m3198317621 (Socket_t1433122463 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C"  bool Socket_Poll_m2898913906 (Socket_t1433122463 * __this, int32_t ___time_us, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Receive_m1543253999 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C"  int32_t Socket_RecvFrom_internal_m79644648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3650678549 ** ___sockaddr, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_m1771577797 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1731883909 ** ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_exc_m1933643724 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1731883909 ** ___remote_end, bool ___throwOnError, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Send_m1323350040 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_real_m168010152 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3650678549 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_m4275735503 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3650678549 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C"  int32_t Socket_SendTo_nochecks_m3603649797 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1731883909 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C"  void Socket_CheckProtocolSupport_m2569734646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C"  bool Socket_get_SupportsIPv4_m3333122259 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C"  bool Socket_get_SupportsIPv6_m3333122325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C"  IntPtr_t Socket_Socket_internal_m307948723 (Socket_t1433122463 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C"  void Socket_Finalize_m3336654539 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C"  int32_t Socket_get_AddressFamily_m3169114089 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C"  void Socket_Blocking_internal_m1492654700 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, bool ___block, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern "C"  bool Socket_get_Blocking_m2887521425 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern "C"  void Socket_set_Blocking_m353034810 (Socket_t1433122463 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C"  bool Socket_get_Connected_m2189494307 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern "C"  int32_t Socket_get_ProtocolType_m2906909581 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C"  void Socket_set_NoDelay_m11347911 (Socket_t1433122463 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C"  void Socket_Linger_m4029718536 (Socket_t1433122463 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C"  void Socket_Dispose_m3685131229 (Socket_t1433122463 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C"  void Socket_Close_internal_m71368480 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C"  void Socket_Close_m1619676183 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Connect_internal_real_m2445886600 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3650678549 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C"  void Socket_Connect_internal_m414445392 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3650678549 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C"  bool Socket_CheckEndPoint_m1488520937 (Il2CppObject * __this /* static, unused */, SocketAddress_t3650678549 * ___sa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C"  MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m2876364325 (Il2CppObject * __this /* static, unused */, String_t* ___methodname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C"  void Socket_Connect_m3125912878 (Socket_t1433122463 * __this, EndPoint_t1731883909 * ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C"  void Socket_Connect_m2581851197 (Socket_t1433122463 * __this, EndPoint_t1731883909 * ___remoteEP, bool ___requireSocketPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C"  bool Socket_Poll_internal_m2720943059 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Receive_internal_m2737169692 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Receive_nochecks_m4078780693 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C"  void Socket_GetSocketOption_obj_internal_m3516347269 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Il2CppObject ** ___obj_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Send_internal_m143443105 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Send_nochecks_m4122267414 (Socket_t1433122463 * __this, ByteU5BU5D_t3835026402* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C"  Il2CppObject * Socket_GetSocketOption_m2604801477 (Socket_t1433122463 * __this, int32_t ___optionLevel, int32_t ___optionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C"  void Socket_Shutdown_internal_m3459802987 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___how, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C"  void Socket_SetSocketOption_internal_m1264569669 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Il2CppObject * ___obj_val, ByteU5BU5D_t3835026402* ___byte_val, int32_t ___int_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C"  void Socket_SetSocketOption_m2520328933 (Socket_t1433122463 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
extern "C"  void Socket_ThrowIfUpd_m1590919657 (Socket_t1433122463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
