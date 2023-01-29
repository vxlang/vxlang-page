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

#pragma optimize("", on)
int main() {
    VirtualizationTest();

    return 1;
}

