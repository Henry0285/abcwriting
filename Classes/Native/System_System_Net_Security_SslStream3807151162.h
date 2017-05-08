﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3106160801;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1330171101;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t512298711;

#include "System_System_Net_Security_AuthenticatedStream1921325947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t3807151162  : public AuthenticatedStream_t1921325947
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t3106160801 * ___ssl_stream_4;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t1330171101 * ___validation_callback_5;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t512298711 * ___selection_callback_6;

public:
	inline static int32_t get_offset_of_ssl_stream_4() { return static_cast<int32_t>(offsetof(SslStream_t3807151162, ___ssl_stream_4)); }
	inline SslStreamBase_t3106160801 * get_ssl_stream_4() const { return ___ssl_stream_4; }
	inline SslStreamBase_t3106160801 ** get_address_of_ssl_stream_4() { return &___ssl_stream_4; }
	inline void set_ssl_stream_4(SslStreamBase_t3106160801 * value)
	{
		___ssl_stream_4 = value;
		Il2CppCodeGenWriteBarrier(&___ssl_stream_4, value);
	}

	inline static int32_t get_offset_of_validation_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t3807151162, ___validation_callback_5)); }
	inline RemoteCertificateValidationCallback_t1330171101 * get_validation_callback_5() const { return ___validation_callback_5; }
	inline RemoteCertificateValidationCallback_t1330171101 ** get_address_of_validation_callback_5() { return &___validation_callback_5; }
	inline void set_validation_callback_5(RemoteCertificateValidationCallback_t1330171101 * value)
	{
		___validation_callback_5 = value;
		Il2CppCodeGenWriteBarrier(&___validation_callback_5, value);
	}

	inline static int32_t get_offset_of_selection_callback_6() { return static_cast<int32_t>(offsetof(SslStream_t3807151162, ___selection_callback_6)); }
	inline LocalCertificateSelectionCallback_t512298711 * get_selection_callback_6() const { return ___selection_callback_6; }
	inline LocalCertificateSelectionCallback_t512298711 ** get_address_of_selection_callback_6() { return &___selection_callback_6; }
	inline void set_selection_callback_6(LocalCertificateSelectionCallback_t512298711 * value)
	{
		___selection_callback_6 = value;
		Il2CppCodeGenWriteBarrier(&___selection_callback_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
