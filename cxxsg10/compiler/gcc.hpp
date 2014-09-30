//          Copyright Kohei Takahashi 2014.
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef CXXSG10_compiler_gcc_hpp_
#define CXXSG10_compiler_gcc_hpp_

#include <cxxsg10/detail/config.hpp>

#if CXXSG10_COMPILER_GCC < CXXSG10_VERSION(4,2,0)
#   error "GCC 4.2 or later support only"
#endif

#if defined(__GXX_EXPERIMENTAL_CXX0X__)
#   if   201103L < __cplusplus
#       define CXXSG10_cplusplus 201402L
#       define CXXSG10_compiler_header <cxxsg10/compiler/detail/cxx14/gcc.hpp>
#   elif 199711L < __cplusplus
#       define CXXSG10_cplusplus 201103L
#       define CXXSG10_compiler_header <cxxsg10/compiler/detail/cxx11/gcc.hpp>
#   endif
#else
#       define CXXSG10_cplusplus 199711L
//#       define CXXSG10_compiler_header <cxxsg10/compiler/detail/cxx03/gcc.hpp>
#endif

#endif // CXXSG10_compiler_gcc_hpp_

