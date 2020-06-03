///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Lewis Baker
// Licenced under MIT license. See LICENSE.txt for details.
///////////////////////////////////////////////////////////////////////////////
#ifndef CPPCORO_COROUTINE_HPP_INCLUDED
#define CPPCORO_COROUTINE_HPP_INCLUDED

#ifdef CPPCORO_COMPILER_SUPPORTS_COROUTINE
#include <coroutine>
namespace cppcoro {
    namespace coroutine_ns = std;
}
#else
#include <experimental/coroutine>
namespace cppcoro {
    namespace coroutine_ns = std::experimental;
}
#endif

#endif
