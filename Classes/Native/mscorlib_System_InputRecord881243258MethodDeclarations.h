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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct InputRecord_t881243258;
struct InputRecord_t881243258_marshaled_pinvoke;

extern "C" void InputRecord_t881243258_marshal_pinvoke(const InputRecord_t881243258& unmarshaled, InputRecord_t881243258_marshaled_pinvoke& marshaled);
extern "C" void InputRecord_t881243258_marshal_pinvoke_back(const InputRecord_t881243258_marshaled_pinvoke& marshaled, InputRecord_t881243258& unmarshaled);
extern "C" void InputRecord_t881243258_marshal_pinvoke_cleanup(InputRecord_t881243258_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct InputRecord_t881243258;
struct InputRecord_t881243258_marshaled_com;

extern "C" void InputRecord_t881243258_marshal_com(const InputRecord_t881243258& unmarshaled, InputRecord_t881243258_marshaled_com& marshaled);
extern "C" void InputRecord_t881243258_marshal_com_back(const InputRecord_t881243258_marshaled_com& marshaled, InputRecord_t881243258& unmarshaled);
extern "C" void InputRecord_t881243258_marshal_com_cleanup(InputRecord_t881243258_marshaled_com& marshaled);
