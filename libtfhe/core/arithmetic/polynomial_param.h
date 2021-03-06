#ifndef POLYNOMIAL_PARAM_H
#define POLYNOMIAL_PARAM_H

#include "big_int.h"
#include "big_torus.h"
#include "zmodule_param.h"

#include <cstdint>
#include <type_traits>

/**
 * @brief Polynomial parameters class
 *
 * @tparam TORUS torus type
 */
template<typename TORUS>
class PolynomialParams {
public:
    int32_t N;
    ZModuleParams<TORUS> *zmodule_params;
};

#endif //POLYNOMIAL_PARAM_H
