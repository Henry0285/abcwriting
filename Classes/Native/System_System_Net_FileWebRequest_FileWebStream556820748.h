#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.FileWebRequest
struct FileWebRequest_t3006702705;

#include "mscorlib_System_IO_FileStream4109615879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest/FileWebStream
struct  FileWebStream_t556820748  : public FileStream_t4109615879
{
public:
	// System.Net.FileWebRequest System.Net.FileWebRequest/FileWebStream::webRequest
	FileWebRequest_t3006702705 * ___webRequest_16;

public:
	inline static int32_t get_offset_of_webRequest_16() { return static_cast<int32_t>(offsetof(FileWebStream_t556820748, ___webRequest_16)); }
	inline FileWebRequest_t3006702705 * get_webRequest_16() const { return ___webRequest_16; }
	inline FileWebRequest_t3006702705 ** get_address_of_webRequest_16() { return &___webRequest_16; }
	inline void set_webRequest_16(FileWebRequest_t3006702705 * value)
	{
		___webRequest_16 = value;
		Il2CppCodeGenWriteBarrier(&___webRequest_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
