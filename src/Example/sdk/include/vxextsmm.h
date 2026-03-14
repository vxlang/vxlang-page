#pragma once

#ifdef USE_VL_MACRO
#include "vxlib.h"

#define VLX_OBFUSCATION_BEGIN               VxObfuscationBegin();\
                                            VxLinkEvent(VXLANG_LINK_EVENT_CUSTOM_0 + 5, nullptr, nullptr)
#define VLX_OBFUSCATION_END                 VxLinkEvent(VXLANG_LINK_EVENT_CUSTOM_0 + 6, nullptr, nullptr);\
                                            VxObfuscationEnd()
											
#define VLX_MM_BEGIN                        VxLinkEvent(VXLANG_LINK_EVENT_CUSTOM_0 + 5, nullptr, nullptr)
#define VLX_MM_END                          VxLinkEvent(VXLANG_LINK_EVENT_CUSTOM_0 + 6, nullptr, nullptr)											
#else
#define VLX_OBFUSCATION_BEGIN
#define VLX_OBFUSCATION_END

#define VLX_MM_BEGIN
#define VLX_MM_END
#endif



