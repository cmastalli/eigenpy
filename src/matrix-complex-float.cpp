/*
 * Copyright 2020 INRIA
 */

#include "eigenpy/eigenpy.hpp"

namespace eigenpy
{
  void exposeMatrixComplexFloat()
  {
    exposeType<std::complex<float> >();
  }
}
