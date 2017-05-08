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

// System.Net.WebAsyncResult
struct WebAsyncResult_t2405292317;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3205926943;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Exception
struct Exception_t1145979430;
// System.IO.Stream
struct Stream_t2768948945;
// System.Net.HttpWebResponse
struct HttpWebResponse_t1942401777;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;
// System.IAsyncResult
struct IAsyncResult_t1538479585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "System_System_Net_HttpWebRequest3205926943.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "System_System_Net_HttpWebResponse1942401777.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m3649882325 (WebAsyncResult_t2405292317 * __this, AsyncCallback_t889871978 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m303387228 (WebAsyncResult_t2405292317 * __this, HttpWebRequest_t3205926943 * ___request, AsyncCallback_t889871978 * ___cb, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C"  void WebAsyncResult__ctor_m223741914 (WebAsyncResult_t2405292317 * __this, AsyncCallback_t889871978 * ___cb, Il2CppObject * ___state, ByteU5BU5D_t3835026402* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void WebAsyncResult_SetCompleted_m838588539 (WebAsyncResult_t2405292317 * __this, bool ___synch, Exception_t1145979430 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C"  void WebAsyncResult_Reset_m2447089108 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C"  void WebAsyncResult_SetCompleted_m2908552542 (WebAsyncResult_t2405292317 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C"  void WebAsyncResult_SetCompleted_m479162096 (WebAsyncResult_t2405292317 * __this, bool ___synch, Stream_t2768948945 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C"  void WebAsyncResult_SetCompleted_m1412952062 (WebAsyncResult_t2405292317 * __this, bool ___synch, HttpWebResponse_t1942401777 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C"  void WebAsyncResult_DoCallback_m3620301601 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C"  void WebAsyncResult_WaitUntilComplete_m1323278311 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool WebAsyncResult_WaitUntilComplete_m2767680653 (WebAsyncResult_t2405292317 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * WebAsyncResult_get_AsyncState_m3444251194 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t313797096 * WebAsyncResult_get_AsyncWaitHandle_m2959259286 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C"  bool WebAsyncResult_get_IsCompleted_m1225098437 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C"  bool WebAsyncResult_get_GotException_m2936180225 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C"  Exception_t1145979430 * WebAsyncResult_get_Exception_m1262884414 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C"  int32_t WebAsyncResult_get_NBytes_m1619460119 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C"  void WebAsyncResult_set_NBytes_m3760831766 (WebAsyncResult_t2405292317 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C"  Il2CppObject * WebAsyncResult_get_InnerAsyncResult_m987999637 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C"  void WebAsyncResult_set_InnerAsyncResult_m1600603984 (WebAsyncResult_t2405292317 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C"  HttpWebResponse_t1942401777 * WebAsyncResult_get_Response_m467499639 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t3835026402* WebAsyncResult_get_Buffer_m1206123640 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C"  int32_t WebAsyncResult_get_Offset_m2410050733 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C"  int32_t WebAsyncResult_get_Size_m1090716073 (WebAsyncResult_t2405292317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
