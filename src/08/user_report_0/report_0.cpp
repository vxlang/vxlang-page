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
extern "C"
void print_hello() {
    VL_OBFUSCATION_BEGIN;

    printf("hello \n");

    VL_OBFUSCATION_END;

    return;
}

#pragma optimize("", off) 
extern "C"
void print_test() {
    VL_DUAL_MODE_BEGIN;

    printf("test \n");

    VL_DUAL_MODE_END;

    return;
}

#pragma optimize("", off) 
void run() {
    VL_OBFUSCATION_BEGIN;

    typedef void(__cdecl* print_t)(void);

    print_t p1 = print_hello;
    print_t p2 = print_test;

    while (true) {
        p1();
        p2();

        Sleep(1000);
    }

    VL_OBFUSCATION_END;

    return;
}

#pragma optimize("", off) 
int main() {
    VL_VIRTUALIZATION_BEGIN;

    run();

    VL_VIRTUALIZATION_END;

    return 1;
}

