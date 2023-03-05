#include <stdio.h>
#include <stdint.h>

#include "../lib/vxlib.h"

#pragma optimize("", off) 
void VirtualizationTest() {
    VM_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    VM_END;
}

#pragma optimize("", off) 
void ObfuscationTest() {
    OBFUSCATION_BEGIN;

    for (int i = 0; i < 10; ++i) {
        printf("Hello, World! \n");
    }

    OBFUSCATION_END;
}

int main() {
    VM_BEGIN;

    VirtualizationTest();
    ObfuscationTest();

    VM_END;

    return 1;
}

