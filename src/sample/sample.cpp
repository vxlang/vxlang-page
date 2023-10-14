#include <stdio.h>
#include <stdint.h>

#define USE_VM_MACRO
#include "../../vxlang/sdk/include/vxlib.h"

#pragma optimize("", off) 
void VirtualizationTest() {
    VL_VIRTUALIZATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    VL_VIRTUALIZATION_END;

    return;
}

#pragma optimize("", off) 
void ObfuscationTest() {
    VL_OBFUSCATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    VL_OBFUSCATION_END;

    return;
}

#pragma optimize("", off) 
void CodeFlatteningTest() {
    VL_CODE_FLATTENING_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    VL_CODE_FLATTENING_END;

    return;
}

int main() {
    VL_VIRTUALIZATION_BEGIN;

    VirtualizationTest();
    ObfuscationTest();

    VL_VIRTUALIZATION_END;

    return 1;
}

