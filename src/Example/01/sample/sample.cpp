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

#pragma optimize("", off) 
void VirtualizationTest() {
    VL_VIRTUALIZATION_BEGIN;

    printf("     > VirtualizationTest \n");

    VL_VIRTUALIZATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void VirtualizationLoopTest() {
    VL_VIRTUALIZATION_BEGIN;

    printf("     > VirtualizationLoopTest \n");
    for (int i = 0; i < 3; ++i) {
        Sleep(1000);
    }

    VL_VIRTUALIZATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void VirtualizationEndIsNotCalled() {
    VL_VIRTUALIZATION_BEGIN;

    printf("     > VirtualizationEndIsNotCalled \n");

    if (true) {
        printf("\n");
        return;
    }

    VL_VIRTUALIZATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void ObfuscationTest() {
    VL_OBFUSCATION_BEGIN;

    printf("     > ObfuscationTest \n");

    VL_OBFUSCATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void CodeFlatteningTest() {
    VL_CODE_FLATTENING_BEGIN;

    printf("     > CodeFlatteningTest \n");

    VL_CODE_FLATTENING_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
int main() {
    VirtualizationTest();
    VirtualizationLoopTest();
    VirtualizationEndIsNotCalled();

    ObfuscationTest();
    CodeFlatteningTest();

    printf("press any key to continue .. \n");
    getchar();

    return 1;
}

