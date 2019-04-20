#ifndef _SWIFT_CCUDA_MAGMA_H_
#define _SWIFT_CCUDA_MAGMA_H_

#if define(__APPLE__) || defined(__linux__)
#include "/usr/local/cuda/include/magma.h"
#include "/usr/local/cuda/include/magma_types.h"
#else
#include <magma.h>
#include <magma_types.h>
#endif

#endif // _SWIFT_CCUDA_MAGMA_H_