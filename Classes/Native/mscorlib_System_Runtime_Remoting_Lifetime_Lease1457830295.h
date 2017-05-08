﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Collections.Queue
struct Queue_t3616109649;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t1274697707;

#include "mscorlib_System_MarshalByRefObject3870530982.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSta3042445228.h"
#include "mscorlib_System_TimeSpan1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease
struct  Lease_t1457830295  : public MarshalByRefObject_t3870530982
{
public:
	// System.DateTime System.Runtime.Remoting.Lifetime.Lease::_leaseExpireTime
	DateTime_t2933746480  ____leaseExpireTime_1;
	// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::_currentState
	int32_t ____currentState_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_initialLeaseTime
	TimeSpan_t1834055012  ____initialLeaseTime_3;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_renewOnCallTime
	TimeSpan_t1834055012  ____renewOnCallTime_4;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_sponsorshipTimeout
	TimeSpan_t1834055012  ____sponsorshipTimeout_5;
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.Lease::_sponsors
	ArrayList_t1468494371 * ____sponsors_6;
	// System.Collections.Queue System.Runtime.Remoting.Lifetime.Lease::_renewingSponsors
	Queue_t3616109649 * ____renewingSponsors_7;
	// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate System.Runtime.Remoting.Lifetime.Lease::_renewalDelegate
	RenewalDelegate_t1274697707 * ____renewalDelegate_8;

public:
	inline static int32_t get_offset_of__leaseExpireTime_1() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____leaseExpireTime_1)); }
	inline DateTime_t2933746480  get__leaseExpireTime_1() const { return ____leaseExpireTime_1; }
	inline DateTime_t2933746480 * get_address_of__leaseExpireTime_1() { return &____leaseExpireTime_1; }
	inline void set__leaseExpireTime_1(DateTime_t2933746480  value)
	{
		____leaseExpireTime_1 = value;
	}

	inline static int32_t get_offset_of__currentState_2() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____currentState_2)); }
	inline int32_t get__currentState_2() const { return ____currentState_2; }
	inline int32_t* get_address_of__currentState_2() { return &____currentState_2; }
	inline void set__currentState_2(int32_t value)
	{
		____currentState_2 = value;
	}

	inline static int32_t get_offset_of__initialLeaseTime_3() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____initialLeaseTime_3)); }
	inline TimeSpan_t1834055012  get__initialLeaseTime_3() const { return ____initialLeaseTime_3; }
	inline TimeSpan_t1834055012 * get_address_of__initialLeaseTime_3() { return &____initialLeaseTime_3; }
	inline void set__initialLeaseTime_3(TimeSpan_t1834055012  value)
	{
		____initialLeaseTime_3 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_4() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____renewOnCallTime_4)); }
	inline TimeSpan_t1834055012  get__renewOnCallTime_4() const { return ____renewOnCallTime_4; }
	inline TimeSpan_t1834055012 * get_address_of__renewOnCallTime_4() { return &____renewOnCallTime_4; }
	inline void set__renewOnCallTime_4(TimeSpan_t1834055012  value)
	{
		____renewOnCallTime_4 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_5() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____sponsorshipTimeout_5)); }
	inline TimeSpan_t1834055012  get__sponsorshipTimeout_5() const { return ____sponsorshipTimeout_5; }
	inline TimeSpan_t1834055012 * get_address_of__sponsorshipTimeout_5() { return &____sponsorshipTimeout_5; }
	inline void set__sponsorshipTimeout_5(TimeSpan_t1834055012  value)
	{
		____sponsorshipTimeout_5 = value;
	}

	inline static int32_t get_offset_of__sponsors_6() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____sponsors_6)); }
	inline ArrayList_t1468494371 * get__sponsors_6() const { return ____sponsors_6; }
	inline ArrayList_t1468494371 ** get_address_of__sponsors_6() { return &____sponsors_6; }
	inline void set__sponsors_6(ArrayList_t1468494371 * value)
	{
		____sponsors_6 = value;
		Il2CppCodeGenWriteBarrier(&____sponsors_6, value);
	}

	inline static int32_t get_offset_of__renewingSponsors_7() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____renewingSponsors_7)); }
	inline Queue_t3616109649 * get__renewingSponsors_7() const { return ____renewingSponsors_7; }
	inline Queue_t3616109649 ** get_address_of__renewingSponsors_7() { return &____renewingSponsors_7; }
	inline void set__renewingSponsors_7(Queue_t3616109649 * value)
	{
		____renewingSponsors_7 = value;
		Il2CppCodeGenWriteBarrier(&____renewingSponsors_7, value);
	}

	inline static int32_t get_offset_of__renewalDelegate_8() { return static_cast<int32_t>(offsetof(Lease_t1457830295, ____renewalDelegate_8)); }
	inline RenewalDelegate_t1274697707 * get__renewalDelegate_8() const { return ____renewalDelegate_8; }
	inline RenewalDelegate_t1274697707 ** get_address_of__renewalDelegate_8() { return &____renewalDelegate_8; }
	inline void set__renewalDelegate_8(RenewalDelegate_t1274697707 * value)
	{
		____renewalDelegate_8 = value;
		Il2CppCodeGenWriteBarrier(&____renewalDelegate_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
