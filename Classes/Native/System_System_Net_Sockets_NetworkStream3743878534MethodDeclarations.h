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

// System.Net.Sockets.NetworkStream
struct NetworkStream_t3743878534;
// System.Net.Sockets.Socket
struct Socket_t1433122463;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket1433122463.h"
#include "mscorlib_System_IO_FileAccess3159480569.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IO_SeekOrigin951763547.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern "C"  void NetworkStream__ctor_m3121533645 (NetworkStream_t3743878534 * __this, Socket_t1433122463 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern "C"  void NetworkStream__ctor_m3873603372 (NetworkStream_t3743878534 * __this, Socket_t1433122463 * ___socket, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
extern "C"  void NetworkStream__ctor_m3478569531 (NetworkStream_t3743878534 * __this, Socket_t1433122463 * ___socket, int32_t ___access, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
extern "C"  void NetworkStream_System_IDisposable_Dispose_m2590966749 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern "C"  bool NetworkStream_get_CanRead_m1212930377 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern "C"  bool NetworkStream_get_CanSeek_m2140976159 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern "C"  bool NetworkStream_get_CanWrite_m3623786108 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern "C"  int64_t NetworkStream_get_Length_m1040402252 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern "C"  int64_t NetworkStream_get_Position_m2575302747 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern "C"  void NetworkStream_set_Position_m98117306 (NetworkStream_t3743878534 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern "C"  int32_t NetworkStream_get_ReadTimeout_m3026395718 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern "C"  int32_t NetworkStream_get_WriteTimeout_m2360848695 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NetworkStream_BeginRead_m575194662 (NetworkStream_t3743878534 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NetworkStream_BeginWrite_m2537163323 (NetworkStream_t3743878534 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
extern "C"  void NetworkStream_Finalize_m3262023078 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern "C"  void NetworkStream_Dispose_m400115078 (NetworkStream_t3743878534 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern "C"  int32_t NetworkStream_EndRead_m914762628 (NetworkStream_t3743878534 * __this, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern "C"  void NetworkStream_EndWrite_m87296117 (NetworkStream_t3743878534 * __this, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
extern "C"  void NetworkStream_Flush_m951188344 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t NetworkStream_Read_m2877652289 (NetworkStream_t3743878534 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t NetworkStream_Seek_m2976030768 (NetworkStream_t3743878534 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern "C"  void NetworkStream_SetLength_m2147799434 (NetworkStream_t3743878534 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkStream_Write_m1826057114 (NetworkStream_t3743878534 * __this, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
extern "C"  void NetworkStream_CheckDisposed_m1897054503 (NetworkStream_t3743878534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
