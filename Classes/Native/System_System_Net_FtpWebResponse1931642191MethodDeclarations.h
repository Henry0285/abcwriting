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

// System.Net.FtpWebResponse
struct FtpWebResponse_t1931642191;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1070647017;
// System.Uri
struct Uri_t3338506287;
// System.String
struct String_t;
// System.Net.FtpStatus
struct FtpStatus_t3409215888;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.IO.Stream
struct Stream_t2768948945;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest1070647017.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Net_FtpStatusCode3078363137.h"
#include "System_System_Net_FtpStatus3409215888.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_IO_Stream2768948945.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C"  void FtpWebResponse__ctor_m3415597482 (FtpWebResponse_t1931642191 * __this, FtpWebRequest_t1070647017 * ___request, Uri_t3338506287 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C"  void FtpWebResponse__ctor_m4120357874 (FtpWebResponse_t1931642191 * __this, FtpWebRequest_t1070647017 * ___request, Uri_t3338506287 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C"  void FtpWebResponse__ctor_m831861715 (FtpWebResponse_t1931642191 * __this, FtpWebRequest_t1070647017 * ___request, Uri_t3338506287 * ___uri, String_t* ___method, FtpStatus_t3409215888 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t541997719 * FtpWebResponse_get_Headers_m1164624792 (FtpWebResponse_t1931642191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C"  void FtpWebResponse_set_LastModified_m1306853857 (FtpWebResponse_t1931642191 * __this, DateTime_t2933746480  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C"  void FtpWebResponse_set_BannerMessage_m4184029017 (FtpWebResponse_t1931642191 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C"  void FtpWebResponse_set_WelcomeMessage_m754604223 (FtpWebResponse_t1931642191 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C"  void FtpWebResponse_Close_m3435771463 (FtpWebResponse_t1931642191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C"  Stream_t2768948945 * FtpWebResponse_GetResponseStream_m782137646 (FtpWebResponse_t1931642191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C"  void FtpWebResponse_set_Stream_m1759459143 (FtpWebResponse_t1931642191 * __this, Stream_t2768948945 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C"  void FtpWebResponse_UpdateStatus_m1392245858 (FtpWebResponse_t1931642191 * __this, FtpStatus_t3409215888 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C"  void FtpWebResponse_CheckDisposed_m1532914452 (FtpWebResponse_t1931642191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C"  bool FtpWebResponse_IsFinal_m1790980787 (FtpWebResponse_t1931642191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
