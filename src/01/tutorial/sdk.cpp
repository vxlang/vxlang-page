#include <windows.h>
#include <stdio.h>
#include <stdint.h>

//

#define USE_VL_MACRO
#include "../../../vxlang/sdk/include/vxlib.h"

#ifndef _WIN64
#pragma comment(lib, "../../../vxlang/sdk/lib/vxlib32.lib")
#else
#pragma comment(lib, "../../../vxlang/sdk/lib/vxlib64.lib")
#endif

//

/*
Depending on your compilation environment, you may need to disable optimizations, 
because SDK enforcement can be abnormal if the optimization process involves merging functions or repeated syntax merges.
 */

#pragma optimize("", off) 
void VirtualizationTest() {
    VL_VIRTUALIZATION_BEGIN;

    printf("     > VirtualizationTest \n");

    VL_VIRTUALIZATION_END;

    return;
}

#pragma optimize("", off) 
void DualModeTest() {
    VL_DUAL_MODE_BEGIN;

    printf("     > DualModeTest \n");

    VL_DUAL_MODE_END;

    return;
}

#pragma optimize("", off) 
void ObfuscationTest() {
    VL_OBFUSCATION_BEGIN;

    printf("     > ObfuscationTest \n");

    VL_OBFUSCATION_END;

    return;
}

#pragma optimize("", off) 
void CodeFlatteningTest() {
    VL_CODE_FLATTENING_BEGIN;

    printf("     > CodeFlatteningTest \n");

    VL_CODE_FLATTENING_END;

    return;
}

#pragma optimize("", off) 
void SDKTest() {
    VL_VIRTUALIZATION_BEGIN;

    VirtualizationTest();
    DualModeTest();

    ObfuscationTest();
    CodeFlatteningTest();

    VL_VIRTUALIZATION_END;

    return;
}
