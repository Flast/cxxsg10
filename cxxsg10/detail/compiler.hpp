//          Copyright Kohei Takahashi 2014.
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef CXXSG10_INCOMPATIBLE_WITH_N4030
#   ifndef __has_cpp_attribute
#      define CXXSG10_has_cpp_attribute
#      define __has_cpp_attribute(attribute) CXXSG10_has_cpp_attribute_impl_ ## attribute
#   endif
#endif

#ifdef CXXSG10_COMPILER_GCC
#   include <cxxsg10/compiler/gcc.hpp>
#endif

