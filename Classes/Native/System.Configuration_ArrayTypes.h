#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t4281742376;

#include "mscorlib_System_Array4136897760.h"
#include "System_Configuration_System_Configuration_Configur4281742376.h"

#pragma once
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t4017090105  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ConfigurationProperty_t4281742376 * m_Items[1];

public:
	inline ConfigurationProperty_t4281742376 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ConfigurationProperty_t4281742376 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ConfigurationProperty_t4281742376 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
