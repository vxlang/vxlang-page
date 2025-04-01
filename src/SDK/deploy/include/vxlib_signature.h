#pragma once

#if defined(_MSC_VER) && !defined(__clang__)
#include <intrin.h>
//
#define VL_VIRTUALIZATION_SIG_BEGIN            __nop(); __nop(); _enable(); __nop(); __halt();
#define VL_VIRTUALIZATION_SIG_END              __nop(); __nop(); _disable(); __nop(); __halt();

//
#elif defined(__clang__)

#define VL_VIRTUALIZATION_SIG_BEGIN    \
__asm__(                               \
   "nop \n"                            \
   "nop \n"                            \
   "sti \n"                            \
   "nop \n"                            \
   "hlt \n"                            \
)                                      

#define VL_VIRTUALIZATION_SIG_END      \
__asm__(                               \
   "nop \n"                            \
   "nop \n"                            \
   "cli \n"                            \
   "nop \n"                            \
   "hlt \n"                            \
)

#endif
