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

// System.Net.WebResponse
struct WebResponse_t1740857185;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.Exception
struct Exception_t1145979430;
// System.IO.Stream
struct Stream_t2768948945;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C"  void WebResponse__ctor_m3371730835 (WebResponse_t1740857185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse__ctor_m4250546700 (WebResponse_t1740857185 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C"  void WebResponse_System_IDisposable_Dispose_m3951247338 (WebResponse_t1740857185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3342517762 (WebResponse_t1740857185 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C"  WebHeaderCollection_t541997719 * WebResponse_get_Headers_m3170001788 (WebResponse_t1740857185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C"  Exception_t1145979430 * WebResponse_GetMustImplement_m2853142170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C"  void WebResponse_Close_m3788698729 (WebResponse_t1740857185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C"  Stream_t2768948945 * WebResponse_GetResponseStream_m629848918 (WebResponse_t1740857185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_GetObjectData_m3352137755 (WebResponse_t1740857185 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
