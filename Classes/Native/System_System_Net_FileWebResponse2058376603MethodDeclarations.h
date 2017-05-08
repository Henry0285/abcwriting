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

// System.Net.FileWebResponse
struct FileWebResponse_t2058376603;
// System.Uri
struct Uri_t3338506287;
// System.IO.FileStream
struct FileStream_t4109615879;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.IO.Stream
struct Stream_t2768948945;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_IO_FileStream4109615879.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C"  void FileWebResponse__ctor_m4027310473 (FileWebResponse_t2058376603 * __this, Uri_t3338506287 * ___responseUri, FileStream_t4109615879 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse__ctor_m2805366530 (FileWebResponse_t2058376603 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2098319096 (FileWebResponse_t2058376603 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C"  void FileWebResponse_System_IDisposable_Dispose_m3709383336 (FileWebResponse_t2058376603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t541997719 * FileWebResponse_get_Headers_m1529728342 (FileWebResponse_t2058376603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_GetObjectData_m436518413 (FileWebResponse_t2058376603 * __this, SerializationInfo_t1029367511 * ___serializationInfo, StreamingContext_t3848318932  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C"  Stream_t2768948945 * FileWebResponse_GetResponseStream_m3207033384 (FileWebResponse_t2058376603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C"  void FileWebResponse_Finalize_m2293616471 (FileWebResponse_t2058376603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C"  void FileWebResponse_Close_m3851120995 (FileWebResponse_t2058376603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C"  void FileWebResponse_Dispose_m2881165725 (FileWebResponse_t2058376603 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C"  void FileWebResponse_CheckDisposed_m2872507370 (FileWebResponse_t2058376603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
