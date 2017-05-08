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

// System.Net.FileWebRequest/FileWebStream
struct FileWebStream_t556820748;
// System.Net.FileWebRequest
struct FileWebRequest_t3006702705;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FileWebRequest3006702705.h"
#include "mscorlib_System_IO_FileMode638157444.h"
#include "mscorlib_System_IO_FileAccess3159480569.h"
#include "mscorlib_System_IO_FileShare2318822726.h"

// System.Void System.Net.FileWebRequest/FileWebStream::.ctor(System.Net.FileWebRequest,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileWebStream__ctor_m4147650078 (FileWebStream_t556820748 * __this, FileWebRequest_t3006702705 * ___webRequest, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest/FileWebStream::Close()
extern "C"  void FileWebStream_Close_m1243197776 (FileWebStream_t556820748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
