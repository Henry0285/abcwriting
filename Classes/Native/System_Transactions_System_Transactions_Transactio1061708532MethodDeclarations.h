﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t1061708532;
// System.String
struct String_t;
// System.Exception
struct Exception_t1145979430;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Exception1145979430.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"

// System.Void System.Transactions.TransactionAbortedException::.ctor()
extern "C"  void TransactionAbortedException__ctor_m661778353 (TransactionAbortedException_t1061708532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.String,System.Exception)
extern "C"  void TransactionAbortedException__ctor_m2129603671 (TransactionAbortedException_t1061708532 * __this, String_t* ___message, Exception_t1145979430 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TransactionAbortedException__ctor_m627569262 (TransactionAbortedException_t1061708532 * __this, SerializationInfo_t1029367511 * ___info, StreamingContext_t3848318932  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;