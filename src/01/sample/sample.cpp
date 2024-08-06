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

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }
    printf("VirtualizationTest End \n");

    VL_VIRTUALIZATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void VirtualizationEndIsNotCalled() {
    VL_VIRTUALIZATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }
    printf("VirtualizationTest End \n");

    if (true) {
        return;
    }

    VL_VIRTUALIZATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void ObfuscationTest() {
    VL_OBFUSCATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }
    printf("ObfuscationTest End \n");

    VL_OBFUSCATION_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
void CodeFlatteningTest() {
    VL_CODE_FLATTENING_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }
    printf("CodeFlatteningTest End \n");

    VL_CODE_FLATTENING_END;

    printf("\n");

    return;
}

#pragma optimize("", off) 
int main() {
    ObfuscationTest();
    CodeFlatteningTest();
    VirtualizationTest();
    VirtualizationEndIsNotCalled();

    getchar();

    return 1;
}

