/*!
  \file unit-inl.hpp
  \author takemura
  */

#ifndef _ZISC_UNIT_INL_HPP_
#define _ZISC_UNIT_INL_HPP_

#include "unit.hpp"
// 標準C++ライブラリ
#include <type_traits>
// Ziscライブラリ
#include "math.hpp"
#include "utility.hpp"

namespace zisc {

/*!
  \details
  No detailed.

  \param[in] angle angle
  \return radian
  */
template <typename Float> inline
constexpr Float toRadian(const Float angle)
{
  static_assert(std::is_floating_point<Float>::value, "## Float must be float type.");
  return cast<Float>(kPi / 180.0) * angle;
}

/*!
  \details
  No detailed.

  \param[in] radian radian
  \return degree
  */
template <typename Float> inline
constexpr Float toAngle(const Float radian)
{
  static_assert(std::is_floating_point<Float>::value, "## Float must be float type.");
  return cast<Float>(180.0 / kPi) * radian;
}

} // namespace zisc

#endif // _ZISC_UNIT_INL_HPP_
