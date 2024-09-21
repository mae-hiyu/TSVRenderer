/*!
 \file dsfmt_engin.hpp
 \author takemura
 */

#ifndef _ZISC_DSFMT_ENGIN_HPP_
#define _ZISC_DSFMT_ENGIN_HPP_

// Standard C++ library
#include <cstddef>
#include <cstdint>
#include <limits>
// Zisc
#include "random_generator.hpp"

namespace zisc {

/*!
 \brief dSFMT (Double precision SIMD-oriented Fast Mersenne Twister) random generator
 \details
 dSFMT version 2.2
 Please see the details of this algorithm below
 http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/SFMT/index-jp.html
 */
template <std::size_t kN, std::size_t kPosition, int kSl,
          std::uint64_t kMask1, std::uint64_t kMask2, std::uint64_t kFix1, 
          std::uint64_t kFix2, std::uint64_t kPcv1, std::uint64_t kPcv2>
class DsfmtEngin : public RandomGenerator<
    DsfmtEngin<kN, kPosition, kSl, kMask1, kMask2, kFix1, kFix2, kPcv1, kPcv2>>
{
 public:
  // For STL 
  using result_type = double;


  //! Initialize generator using default random seed
  DsfmtEngin();

  
  //! Generate random number
  double operator()();

  //! Generator random number x satisfying a <= x < b
  template <typename Arithmetic>
  Arithmetic distribute(const Arithmetic a, const Arithmetic b);

  //! Generate random number
  double generate();

  //! Get the largest possible value in the output range
  static constexpr double max()
  {
    return 2.0 - std::numeric_limits<double>::epsilon();
  }

  //! Get the smallest possible value in the output range
  static constexpr double min()
  {
    return 1.0;
  }

  //! Set random seed
  void setSeed(const std::uint32_t seed);

 private:
  void certificatePeriod();

  void generateRandomAll();

  void generateRandom(const std::size_t destination, const std::size_t position);

  //! Initialize random engine
  void initialize();


  union W128
  {
    std::uint32_t u32_[4];
    std::uint64_t u64_[2];
    double d_[2];
  } status_[kN + 1];
  std::size_t index_;
  double* random_list_;
};

//! 周期が 2^521 - 1 のdSFMTです
using Dsfmt521 = DsfmtEngin<
    4, 3, 25, 0x000fbfefff77efff, 0x000ffeebfbdfbfdf,
    0xcfb393d661638469, 0xc166867883ae2adb,
    0xccaa588000000000, 0x0000000000000001>;
//! 周期が 2^1279 - 1 のdSFMTです
using Dsfmt1279 = DsfmtEngin<
    12, 9, 19, 0x000efff7ffddffee, 0x000fbffffff77fff,
    0xb66627623d1a31be, 0x04b6c51147b6109b,
    0x7049f2da382a6aeb, 0xde4ca84a40000001>;
//! 周期が 2^2203 - 1 のdSFMTです
using Dsfmt2203 = DsfmtEngin<
    20, 7, 19, 0x000fdffff5edbfff, 0x000f77fffffffbfe,
    0xb14e907a39338485, 0xf98f0735c637ef90,
    0x8000000000000000, 0x0000000000000001>;
//! 周期が 2^4253 - 1 のdSFMTです
using Dsfmt4253 = DsfmtEngin<
    40, 19, 19, 0x0007b7fffef5feff, 0x000ffdffeffefbfc,
    0x80901b5fd7a11c65, 0x5a63ff0e7cb0ba74,
    0x1ad277be12000000, 0x0000000000000001>;
//! 周期が 2^11213 - 1 のdSFMTです
using Dsfmt11213 = DsfmtEngin<
    107, 37, 19, 0x000ffffffdf7fffd, 0x000dfffffff6bfff,
    0xd0ef7b7c75b06793, 0x9c50ff4caae0a641,
    0x8234c51207c80000, 0x0000000000000001>;
//! 周期が 2^19937 - 1 のdSFMTです
using Dsfmt19937 = DsfmtEngin<
    191, 117, 19, 0x000ffafffffffb3f, 0x000ffdfffc90fffd,
    0x90014964b32f4329, 0x3b8d12ac548a7c7a,
    0x3d84e1ac0dc82880, 0x0000000000000001>;
//! 周期が 2^44497 - 1 のdSFMTです
using Dsfmt44497 = DsfmtEngin<
    427, 304, 19, 0x000ff6dfffffffef, 0x0007ffdddeefff6f,
    0x75d910f235f6e10e, 0x7b32158aedc8e969,
    0x4c3356b2a0000000, 0x0000000000000001>;
//! 周期が 2^86243 - 1 のdSFMTです
using Dsfmt86243 = DsfmtEngin<
    829, 231, 13, 0x000ffedff6ffffdf, 0x000ffff7fdffff7e,
    0x1d553e776b975e68, 0x648faadf1416bf91,
    0x5f2cd03e2758a373, 0xc0b7eb8410000001>;
//! 周期が 2^132049 - 1 のdSFMTです
using Dsfmt132049 = DsfmtEngin<
    1269, 371, 23, 0x000fb9f4eff4bf77, 0x000fffffbfefff37,
    0x4ce24c0e4e234f3b, 0x62612409b5665c2d,
    0x181232889145d000, 0x0000000000000001>;
//! 周期が 2^216091 - 1 のdSFMTです
using Dsfmt216091 = DsfmtEngin<
    2077, 1890, 23, 0x000bf7df7fefcfff, 0x000e7ffffef737ff,
    0xd7f95a04764c27d7, 0x6a483861810bebc2,
    0x3af0a8f3d5600000, 0x0000000000000001>;

} // namespace zisc

#include "dsfmt_engin-inl.hpp"

#endif // _ZISC_DSFMT_ENGIN_HPP_
