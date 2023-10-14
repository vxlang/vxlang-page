#pragma once

#ifdef USE_VM_MACRO
#ifdef _WIN64
#pragma comment(lib, "vxlib64.lib")
#else
#pragma comment(lib, "vxlib32.lib")
#endif

void __stdcall VxVirtualizationBegin();
void __stdcall VxVirtualizationEnd();

void __stdcall VxObfuscationBegin();
void __stdcall VxObfuscationEnd();

void __stdcall VxCodeFlatteningBegin();
void __stdcall VxCodeFlatteningEnd();

#define VL_OBFUSCATION_BEGIN         VxObfuscationBegin()
#define VL_OBFUSCATION_END           VxObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN     VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END       VxCodeFlatteningEnd()

#define VL_VIRTUALIZATION_BEGIN      VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END        VxVirtualizationEnd()

#else
#define VL_OBFUSCATION_BEGIN
#define VL_OBFUSCATION_END

#define VL_CODE_FLATTENING_BEGIN 
#define VL_CODE_FLATTENING_END 

#define VL_VIRTUALIZATION_BEGIN            
#define VL_VIRTUALIZATION_END        
#endif

