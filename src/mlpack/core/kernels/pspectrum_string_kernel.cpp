/**
 * @file core/kernels/pspectrum_string_kernel.cpp
 * @author Ryan Curtin
 *
 * Implementation of the p-spectrum string kernel, created for use with FastMKS.
 * Instead of passing a data matrix to FastMKS which stores the kernels, pass a
 * one-dimensional data matrix (data vector) to FastMKS which stores indices of
 * strings; then, the actual strings are given to the PSpectrumStringKernel at
 * construction time, and the kernel knows to map the indices to actual strings.
 *
 * mlpack is free software; you may redistribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#include "pspectrum_string_kernel.hpp"

using namespace std;
using namespace mlpack;
using namespace mlpack::kernel;

/**
 * Initialize the PSpectrumStringKernel with the given string datasets.  For
 * more information on this, see the general class documentation.
 *
 * @param datasets Sets of string data.  @param p The length of substrings to
 * search.
 */
mlpack::kernel::PSpectrumStringKernel::PSpectrumStringKernel(
    const std::vector<std::vector<std::string> >& datasets,
    const size_t p)

