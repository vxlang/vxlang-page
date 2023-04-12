#pragma once

#ifdef USE_VM_MACRO
#ifdef _WIN64
#pragma comment(lib, "vxlib64.lib")
#else
#pragma comment(lib, "vxlib32.lib")
#endif

void VxVirtualizationBegin();
void VxVirtualizationEnd();

void VxObfuscationBegin();
void VxObfuscationEnd();

#define VL_OBFUSCATION_BEGIN         VxObfuscationBegin()
#define VL_OBFUSCATION_END           VxObfuscationEnd()

#define VL_VIRTUALIZATION_BEGIN      VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END        VxVirtualizationEnd()
#else
#define VL_OBFUSCATION_BEGIN
#define VL_OBFUSCATION_END

#define VL_VIRTUALIZATION_BEGIN            
#define VL_VIRTUALIZATION_END        
#endif



/*
 *
 */

#ifdef VXLANG_ADDON_MODULE

#pragma comment(linker, "/ALIGN:0x10000")

enum _tag_PACKER_STATUS {
    VXLANG_LOAD_ADDON_EVENT = 0xA0000000,

    VXLANG_DETECTED_DEBUG,
    VXLANG_DETECTED_PATCH,
    VXLANG_DETECTED_PATCH_SHELL,
    VXLANG_DETECTED_PATCH_IMAGE,
    VXLANG_DETECTED_PAUSE,
    VXLANG_DETECTED_HANDLE,
    VXLANG_DETECTED_SHELL,
    VXLANG_DETECTED_DLL,

    VXLANG_START_EVENT,
    VXLANG_TERMINATE_EVENT,
};

#endif

