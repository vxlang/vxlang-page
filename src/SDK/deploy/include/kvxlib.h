#pragma once

/*
 *
 */

#define VXLANG_LINK_EVENT_STR_A                    0xA0000009
#define VXLANG_LINK_EVENT_STR_W                    0xA000000A
#define VXLANG_LINK_EVENT_FREE                     0xA000000B
#define VXLANG_LINK_CALLBACK                       0xA000000C

 //

#ifdef USE_VL_MACRO
extern "C"
void VxVirtualizationBegin();
extern "C"
void VxVirtualizationEnd();

extern "C"
void VxDualModeBegin();
extern "C"
void VxDualModeEnd();

extern "C"
void VxObfuscationBegin();
extern "C"
void VxObfuscationEnd();

extern "C"
void VxLiteObfuscationBegin();

extern "C"
void VxLiteObfuscationEnd();

extern "C"
void VxCodeFlatteningBegin();
extern "C"
void VxCodeFlatteningEnd();

//

extern "C"
void* VxLinkEvent(unsigned int id, void* buffer, size_t* sizeOfBuffer);

//

#define VL_OBFUSCATION_BEGIN               VxObfuscationBegin()
#define VL_OBFUSCATION_END                 VxObfuscationEnd()

#define VL_LITE_OBFUSCATION_BEGIN          VxLiteObfuscationBegin()
#define VL_LITE_OBFUSCATION_END            VxLiteObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN           VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END             VxCodeFlatteningEnd()

#define VL_VIRTUALIZATION_BEGIN            VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END              VxVirtualizationEnd()

#define VL_DUAL_MODE_BEGIN                 VxDualModeBegin()
#define VL_DUAL_MODE_END                   VxDualModeEnd()

#define VL_ALLOC_STR(str)                  (const char*)VxLinkEvent(VXLANG_LINK_EVENT_STR_A, (void*)str, nullptr)
#define VL_ALLOC_WSTR(str)                 (const wchar_t*)VxLinkEvent(VXLANG_LINK_EVENT_STR_W, (void*)str, nullptr)
#define VL_FREE(value)                     VxLinkEvent(VXLANG_LINK_EVENT_FREE, (void*)value, nullptr);
#else
#define VL_OBFUSCATION_BEGIN            
#define VL_OBFUSCATION_END              

#define VL_LITE_OBFUSCATION_BEGIN          
#define VL_LITE_OBFUSCATION_END 

#define VL_CODE_FLATTENING_BEGIN        
#define VL_CODE_FLATTENING_END          

#define VL_VIRTUALIZATION_BEGIN         
#define VL_VIRTUALIZATION_END           

#define VL_DUAL_MODE_BEGIN
#define VL_DUAL_MODE_END

#define VL_ALLOC_STR(str)
#define VL_ALLOC_WSTR(str)
#define VL_FREE(value)
#endif

