#ifndef _SWIFT_CCUDA_CUDA_RUNTIME_H_
#define _SWIFT_CCUDA_CUDA_RUNTIME_H_

#if defined(__APPLE__) || defined(__linux__)
#include "/usr/local/cuda/include/cuda_runtime.h"
#else
#include <cuda_runtime.h>
#endif

#endif // _SWIFT_CCUDA_CUDA_RUNTIME_H_
