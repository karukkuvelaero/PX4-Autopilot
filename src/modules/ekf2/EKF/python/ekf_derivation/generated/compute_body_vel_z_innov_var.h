// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <matrix/math.hpp>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: compute_body_vel_z_innov_var
 *
 * Args:
 *     state: Matrix25_1
 *     P: Matrix24_24
 *     R: Scalar
 *
 * Outputs:
 *     innov_var: Scalar
 */
template <typename Scalar>
void ComputeBodyVelZInnovVar(const matrix::Matrix<Scalar, 25, 1>& state,
                             const matrix::Matrix<Scalar, 24, 24>& P, const Scalar R,
                             Scalar* const innov_var = nullptr) {
  // Total ops: 142

  // Input arrays

  // Intermediate terms (15)
  const Scalar _tmp0 = 2 * state(4, 0);
  const Scalar _tmp1 = 2 * state(5, 0);
  const Scalar _tmp2 =
      (Scalar(1) / Scalar(2)) * _tmp0 * state(1, 0) + (Scalar(1) / Scalar(2)) * _tmp1 * state(2, 0);
  const Scalar _tmp3 =
      (Scalar(1) / Scalar(2)) * _tmp0 * state(2, 0) - Scalar(1) / Scalar(2) * _tmp1 * state(1, 0);
  const Scalar _tmp4 = 2 * state(0, 0);
  const Scalar _tmp5 = 4 * state(6, 0);
  const Scalar _tmp6 = (Scalar(1) / Scalar(2)) * _tmp1 * state(3, 0) +
                       (Scalar(1) / Scalar(2)) * _tmp4 * state(4, 0) -
                       Scalar(1) / Scalar(2) * _tmp5 * state(2, 0);
  const Scalar _tmp7 = (Scalar(1) / Scalar(2)) * _tmp0 * state(3, 0) -
                       Scalar(1) / Scalar(2) * _tmp4 * state(5, 0) -
                       Scalar(1) / Scalar(2) * _tmp5 * state(1, 0);
  const Scalar _tmp8 =
      -_tmp2 * state(1, 0) - _tmp3 * state(2, 0) + _tmp6 * state(0, 0) + _tmp7 * state(3, 0);
  const Scalar _tmp9 = 2 * state(3, 0);
  const Scalar _tmp10 = -_tmp4 * state(1, 0) + _tmp9 * state(2, 0);
  const Scalar _tmp11 = _tmp4 * state(2, 0) + _tmp9 * state(1, 0);
  const Scalar _tmp12 =
      -2 * std::pow(state(1, 0), Scalar(2)) - 2 * std::pow(state(2, 0), Scalar(2)) + 1;
  const Scalar _tmp13 =
      _tmp2 * state(0, 0) - _tmp3 * state(3, 0) + _tmp6 * state(1, 0) - _tmp7 * state(2, 0);
  const Scalar _tmp14 =
      _tmp2 * state(2, 0) - _tmp3 * state(1, 0) - _tmp6 * state(3, 0) + _tmp7 * state(0, 0);

  // Output terms (1)
  if (innov_var != nullptr) {
    Scalar& _innov_var = (*innov_var);

    _innov_var = R +
                 _tmp10 * (P(0, 4) * _tmp14 + P(1, 4) * _tmp8 + P(2, 4) * _tmp13 +
                           P(3, 4) * _tmp11 + P(4, 4) * _tmp10 + P(5, 4) * _tmp12) +
                 _tmp11 * (P(0, 3) * _tmp14 + P(1, 3) * _tmp8 + P(2, 3) * _tmp13 +
                           P(3, 3) * _tmp11 + P(4, 3) * _tmp10 + P(5, 3) * _tmp12) +
                 _tmp12 * (P(0, 5) * _tmp14 + P(1, 5) * _tmp8 + P(2, 5) * _tmp13 +
                           P(3, 5) * _tmp11 + P(4, 5) * _tmp10 + P(5, 5) * _tmp12) +
                 _tmp13 * (P(0, 2) * _tmp14 + P(1, 2) * _tmp8 + P(2, 2) * _tmp13 +
                           P(3, 2) * _tmp11 + P(4, 2) * _tmp10 + P(5, 2) * _tmp12) +
                 _tmp14 * (P(0, 0) * _tmp14 + P(1, 0) * _tmp8 + P(2, 0) * _tmp13 +
                           P(3, 0) * _tmp11 + P(4, 0) * _tmp10 + P(5, 0) * _tmp12) +
                 _tmp8 * (P(0, 1) * _tmp14 + P(1, 1) * _tmp8 + P(2, 1) * _tmp13 + P(3, 1) * _tmp11 +
                          P(4, 1) * _tmp10 + P(5, 1) * _tmp12);
  }
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
