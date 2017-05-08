#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// JSONObject
struct JSONObject_t1971882247;

#include "mscorlib_System_Array4136897760.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject1971882247.h"

#pragma once
// JSONObject[]
struct JSONObjectU5BU5D_t2270799614  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) JSONObject_t1971882247 * m_Items[1];

public:
	inline JSONObject_t1971882247 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JSONObject_t1971882247 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JSONObject_t1971882247 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
