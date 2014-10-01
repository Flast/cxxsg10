//          Copyright Kohei Takahashi 2014.
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef CXXSG10_detail_config_hpp_
#define CXXSG10_detail_config_hpp_

#define CXXSG10_VERSION(major, minor, patch) ((((major * 10000) + minor) * 10000) + patch)

#if defined(__GNUC__)
#   define CXXSG10_COMPILER_GCC CXXSG10_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#endif

#endif // CXXSG10_detail_config_hpp_

