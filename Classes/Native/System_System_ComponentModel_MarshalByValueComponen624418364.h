﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3941110939;
// System.ComponentModel.ISite
struct ISite_t3358050495;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t624418364  : public Il2CppObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t3941110939 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	Il2CppObject * ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	Il2CppObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t624418364, ___eventList_0)); }
	inline EventHandlerList_t3941110939 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t3941110939 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t3941110939 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventList_0, value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t624418364, ___mySite_1)); }
	inline Il2CppObject * get_mySite_1() const { return ___mySite_1; }
	inline Il2CppObject ** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(Il2CppObject * value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier(&___mySite_1, value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t624418364, ___disposedEvent_2)); }
	inline Il2CppObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline Il2CppObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(Il2CppObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___disposedEvent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif