//          Copyright Kohei Takahashi 2014.
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

// https://gcc.gnu.org/projects/cxx0x.html

#ifndef CXXSG10_compiler_detail_cxx11_gcc_hpp_
#define CXXSG10_compiler_detail_cxx11_gcc_hpp_

#if CXXSG10_VERSION(4,8,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_attributes // n2761
#      define __cpp_attributes 200809L
#   endif
#endif

#if CXXSG10_VERSION(4,7,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_user_defined_literals // n2765
#      define __cpp_user_defined_literals 200809L
#   endif
#   ifndef __cpp_alias_templates // n2258
#      ifndef CXXSG10_INCOMPATIBLE_WITH_N4030
#         define __cpp_alias_templates 200704L
#      endif
#   endif
#endif

#if CXXSG10_VERSION(4,6,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_constexpr // n2235
#      define __cpp_constexpr 200704L
#   endif
#endif

#if CXXSG10_VERSION(4,5,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_lambdas // n2927
#      define __cpp_lambdas 200907L
#   endif
#   ifndef __cpp_raw_strings // n2442
#      define __cpp_raw_strings 200710L
#   endif
#   ifndef __cpp_unicode_literals // n2442
#      define __cpp_unicode_literals 200710L
#   endif
#endif

#if CXXSG10_VERSION(4,4,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_unicode_characters // n2249
#      define __cpp_unicode_characters 200704L
#   endif
#   ifndef __cpp_variadic_templatesa // n2242
#      define __cpp_variadic_templatesa 200704L
#   endif
#endif

#if CXXSG10_VERSION(4,3,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_decltype // n2343
#      define __cpp_decltype 200707L
#   endif
#   ifndef __cpp_rvalue_references // n2118
#      define __cpp_rvalue_references 200610L
#   endif
#   ifndef __cpp_static_assert // n1720
#      define __cpp_static_assert 200410L
#   endif
#endif

#endif // CXXSG10_compiler_detail_cxx11_gcc_hpp_
