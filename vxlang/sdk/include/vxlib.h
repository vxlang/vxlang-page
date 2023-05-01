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
    VXLANG_INITIALIZE = 0,
    VXLANG_LOAD_ADDON_EVENT = 0xA0000000,

    VXLANG_START_EVENT,
    VXLANG_TERMINATE_EVENT,

    VXLANG_ERROR_IMPORT_TABLE = 0xE0000000,
    VXLANG_ERROR_ALLOCATE_VIRTUAL_IMAGE,
    VXLANG_ERROR_RELOCATE_IMAGE,
    VXLANG_ERROR_INSTALL_FAIL,

    VXLANG_DETECTED_DEBUG = 0xD0000000,
    VXLANG_DETECTED_PATCH,
};
#endif

