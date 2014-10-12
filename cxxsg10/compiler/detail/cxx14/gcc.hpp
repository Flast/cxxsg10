//          Copyright Kohei Takahashi 2014.
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

// https://gcc.gnu.org/projects/cxx1y.html

#ifndef CXXSG10_compiler_detail_cxx14_gcc_hpp_
#define CXXSG10_compiler_detail_cxx14_gcc_hpp_

/* technical specifications
#   ifndef __cpp_runtime_arrays // n3639
#      define __cpp_runtime_arrays 201304L
#   endif
*/

/* not implemented yet
#   ifndef __cpp_constexpr // n3652
#      define __cpp_constexpr 201304L
#   endif
#   ifndef __cpp_aggregate_nsdmi // n3653
#      define __cpp_aggregate_nsdmi 201304L
#   endif
#   ifndef __cpp_sized_deallocation // n3778
#      ifndef CXXSG10_INCOMPATIBLE_WITH_N4030
#         define __cpp_sized_deallocation 201309L
#      endif
#   endif
*/

#if CXXSG10_VERSION(5,0,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_variable_templates // n3651
#      define __cpp_variable_templates 201304L
#   endif
#endif

#if CXXSG10_VERSION(4,9,0) <= CXXSG10_COMPILER_GCC
#   ifndef __cpp_binary_literals // n3472
#      define __cpp_binary_literals 201304L
#   endif
#   ifndef __cpp_init_captures // n3648
#      define __cpp_init_captures 201304L
#   endif
#   ifndef __cpp_generic_lambdas // n3649
#      define __cpp_generic_lambdas 201304L
#   endif
#   ifndef __cpp_decltype_auto // n3638
#      define __cpp_decltype_auto 201304L
#   endif
#   ifndef __cpp_return_type_deduction // n3638
#      define __cpp_return_type_deduction 201304L
#   endif
#   ifndef __cpp_digit_separators // n3781
#      ifndef CXXSG10_INCOMPATIBLE_WITH_N4030
#         define __cpp_digit_separators 201309L
#      endif
#   endif
#   ifndef CXXSG10_has_cpp_attribute // n3760
#      ifndef CXXSG10_INCOMPATIBLE_WITH_N4030
#         define CXXSG10_has_cpp_attribute_impl_deprecated 1
#      endif
#   endif
#endif

#include <cxxsg10/compiler/detail/cxx11/gcc.hpp>

#endif // CXXSG10_compiler_detail_cxx14_gcc_hpp_

