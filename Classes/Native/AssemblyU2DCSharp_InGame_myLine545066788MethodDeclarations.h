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
struct myLine_t545066788;
struct myLine_t545066788_marshaled_pinvoke;

extern "C" void myLine_t545066788_marshal_pinvoke(const myLine_t545066788& unmarshaled, myLine_t545066788_marshaled_pinvoke& marshaled);
extern "C" void myLine_t545066788_marshal_pinvoke_back(const myLine_t545066788_marshaled_pinvoke& marshaled, myLine_t545066788& unmarshaled);
extern "C" void myLine_t545066788_marshal_pinvoke_cleanup(myLine_t545066788_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct myLine_t545066788;
struct myLine_t545066788_marshaled_com;

extern "C" void myLine_t545066788_marshal_com(const myLine_t545066788& unmarshaled, myLine_t545066788_marshaled_com& marshaled);
extern "C" void myLine_t545066788_marshal_com_back(const myLine_t545066788_marshaled_com& marshaled, myLine_t545066788& unmarshaled);
extern "C" void myLine_t545066788_marshal_com_cleanup(myLine_t545066788_marshaled_com& marshaled);
