#pragma once

#ifdef USE_VL_MACRO
void VxVirtualizationBegin();
void VxVirtualizationEnd();

void VxDualModeBegin();
void VxDualModeEnd();

void VxObfuscationBegin();
void VxObfuscationEnd();

void VxCodeFlatteningBegin();
void VxCodeFlatteningEnd();

//

#define VL_OBFUSCATION_BEGIN               VxObfuscationBegin()
#define VL_OBFUSCATION_END                 VxObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN           VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END             VxCodeFlatteningEnd()

#define VL_VIRTUALIZATION_BEGIN            VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END              VxVirtualizationEnd()

#define VL_DUAL_MODE_BEGIN                 VxDualModeBegin()
#define VL_DUAL_MODE_END                   VxDualModeEnd()
#else
#define VL_OBFUSCATION_BEGIN            
#define VL_OBFUSCATION_END              

#define VL_CODE_FLATTENING_BEGIN        
#define VL_CODE_FLATTENING_END          

#define VL_VIRTUALIZATION_BEGIN         
#define VL_VIRTUALIZATION_END           

#define VL_DUAL_MODE_BEGIN
#define VL_DUAL_MODE_END
#endif



