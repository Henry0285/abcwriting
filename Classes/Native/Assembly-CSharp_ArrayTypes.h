#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// InGame/BasePoint[]
struct BasePointU5BU5D_t499793906;
// InGame/BasePoint
struct BasePoint_t4232885283;

#include "mscorlib_System_Array4136897760.h"
#include "AssemblyU2DCSharp_InGame_BaseLine3549052865.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "AssemblyU2DCSharp_InGame_BasePoint4232885283.h"

#pragma once
// InGame/BaseLine[]
struct BaseLineU5BU5D_t3524701212  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BaseLine_t3549052865  m_Items[1];

public:
	inline BaseLine_t3549052865  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BaseLine_t3549052865 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BaseLine_t3549052865  value)
	{
		m_Items[index] = value;
	}
};
// InGame/BasePoint[][]
struct BasePointU5BU5DU5BU5D_t1657788423  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BasePointU5BU5D_t499793906* m_Items[1];

public:
	inline BasePointU5BU5D_t499793906* GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BasePointU5BU5D_t499793906** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BasePointU5BU5D_t499793906* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// InGame/BasePoint[]
struct BasePointU5BU5D_t499793906  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BasePoint_t4232885283 * m_Items[1];

public:
	inline BasePoint_t4232885283 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BasePoint_t4232885283 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BasePoint_t4232885283 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
