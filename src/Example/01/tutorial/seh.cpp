#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <intrin.h>

//

#define USE_VL_MACRO
#include "../../sdk/include/vxlib.h"

#ifndef _WIN64
#pragma comment(lib, "../../sdk/lib/vxlib32.lib")
#else
#pragma comment(lib, "../../sdk/lib/vxlib64.lib")
#endif

//

/*
VxLang supports SEH. This can be applied as follows:
 */

#pragma optimize("", off) 
void VirtualizationSEHTest() {
    VL_VIRTUALIZATION_BEGIN;

    __try {
        printf("     > VirtualizationSEHTest \n");
        __debugbreak();
    }
    __except (1) {
        printf("     > Virtualization Except \n");
    }

    VL_VIRTUALIZATION_END;

    return;
}

#pragma optimize("", off) 
void DualModeSEHTest() {
    VL_DUAL_MODE_BEGIN;

    __try {
        printf("     > DualModeSEHTest \n");
        __debugbreak();
    }
    __except (1) {
        printf("     > DualMode Except \n");
    }


    VL_DUAL_MODE_END;

    return;
}

#pragma optimize("", off) 
void ObfuscationSEHTest() {
    VL_OBFUSCATION_BEGIN;

    __try {
        printf("     > ObfuscationSEHTest \n");
        __debugbreak();
    }
    __except (1) {
        printf("     > Obfuscation Except \n");
    }

    VL_OBFUSCATION_END;

    return;
}

#pragma optimize("", off) 
void CodeFlatteningSEHTest() {
    VL_CODE_FLATTENING_BEGIN;

    __try {
        printf("     > CodeFlatteningSEHTest \n");
        __debugbreak();
    }
    __except (1) {
        printf("     > CodeFlattening Except \n");
    }

    VL_CODE_FLATTENING_END;

    return;
}

#pragma optimize("", off) 
void SEHTest() {
    VL_VIRTUALIZATION_BEGIN;

    VirtualizationSEHTest();
    DualModeSEHTest();

    ObfuscationSEHTest();
    CodeFlatteningSEHTest();

    VL_VIRTUALIZATION_END;

    return;
}
