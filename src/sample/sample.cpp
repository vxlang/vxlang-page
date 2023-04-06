#include <stdio.h>
#include <stdint.h>

#define USE_VM_MACRO
#include "../vxlang/sdk/vxlib.h"

#pragma optimize("", off) 
void VirtualizationTest() {
    VL_VIRTUALIZATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    VL_VIRTUALIZATION_END;
}

#pragma optimize("", off) 
void ObfuscationTest() {
    VL_OBFUSCATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    VL_OBFUSCATION_END;
}

int main() {
    VL_VIRTUALIZATION_BEGIN;

    VirtualizationTest();
    ObfuscationTest();

    VL_VIRTUALIZATION_END;

    return 1;
}

