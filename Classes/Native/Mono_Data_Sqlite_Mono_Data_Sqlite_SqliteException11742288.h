#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t3764931161;

#include "System_Data_System_Data_Common_DbException2340481067.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteErrorCode1147789446.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteException
struct  SqliteException_t11742288  : public DbException_t2340481067
{
public:
	// Mono.Data.Sqlite.SQLiteErrorCode Mono.Data.Sqlite.SqliteException::_errorCode
	int32_t ____errorCode_11;

public:
	inline static int32_t get_offset_of__errorCode_11() { return static_cast<int32_t>(offsetof(SqliteException_t11742288, ____errorCode_11)); }
	inline int32_t get__errorCode_11() const { return ____errorCode_11; }
	inline int32_t* get_address_of__errorCode_11() { return &____errorCode_11; }
	inline void set__errorCode_11(int32_t value)
	{
		____errorCode_11 = value;
	}
};

struct SqliteException_t11742288_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteException::_errorMessages
	StringU5BU5D_t3764931161* ____errorMessages_12;

public:
	inline static int32_t get_offset_of__errorMessages_12() { return static_cast<int32_t>(offsetof(SqliteException_t11742288_StaticFields, ____errorMessages_12)); }
	inline StringU5BU5D_t3764931161* get__errorMessages_12() const { return ____errorMessages_12; }
	inline StringU5BU5D_t3764931161** get_address_of__errorMessages_12() { return &____errorMessages_12; }
	inline void set__errorMessages_12(StringU5BU5D_t3764931161* value)
	{
		____errorMessages_12 = value;
		Il2CppCodeGenWriteBarrier(&____errorMessages_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
