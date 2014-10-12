//          Copyright Kohei Takahashi 2014.
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef CXXSG10_detail_compatibility_hpp_
#define CXXSG10_detail_compatibility_hpp_

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3745
#if    defined(CXXSG10_INCOMPATIBLE_WITH_N3745) && !defined(CXXSG10_INCOMPATIBLE_WITH_SD6)
#   define CXXSG10_INCOMPATIBLE_WITH_SD6 1
#elif !defined(CXXSG10_INCOMPATIBLE_WITH_N3745) &&  defined(CXXSG10_INCOMPATIBLE_WITH_SD6)
#   define CXXSG10_INCOMPATIBLE_WITH_N3745 1
#endif

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4030
// #define CXXSG10_INCOMPATIBLE_WITH_N4030

#endif // CXXSG10_detail_compatibility_hpp_

