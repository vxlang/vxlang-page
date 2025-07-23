#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <intrin.h>

#include <iostream>

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
void VirtualizationCxxEHTest() {

    try {
        VL_VIRTUALIZATION_BEGIN;

        printf("     > VirtualizationCxxEHTest \n");

        VL_VIRTUALIZATION_END;

        // Raise Exception 

        throw std::runtime_error("Something went wrong - 1");
    }
    catch (...) {
        VL_VIRTUALIZATION_BEGIN;

        printf("     > VirtualizationCxxEHTest Catch .. \n");

        VL_VIRTUALIZATION_END;
    }

    return;
}

#pragma optimize("", off) 
void DualModeCxxEHTest() {

    try {
        VL_DUAL_MODE_BEGIN;

        printf("     > DualModeCxxEHTest \n");

        VL_DUAL_MODE_END;

        // Raise Exception 

        throw std::runtime_error("Something went wrong - 1");
    }
    catch (...) {
        VL_DUAL_MODE_BEGIN;

        printf("     > DualModeCxxEHTest Catch .. \n");

        VL_DUAL_MODE_END;
    }

    return;
}

#pragma optimize("", off) 
void ObfuscationCxxEHTest() {

    try {
        VL_OBFUSCATION_BEGIN;

        printf("     > ObfuscationCxxEHTest \n");

        VL_OBFUSCATION_END;

        // Raise Exception 

        throw std::runtime_error("Something went wrong - 1");
    }
    catch (...) {
        VL_OBFUSCATION_BEGIN;

        printf("     > ObfuscationCxxEHTest Catch .. \n");

        VL_OBFUSCATION_END;
    }

    return;
}

#pragma optimize("", off) 
void CodeFlatteningCxxEHTest() {

    try {
        VL_CODE_FLATTENING_BEGIN;

        printf("     > ObfuscationCxxEHTest \n");

        VL_CODE_FLATTENING_END;

        // *** Raise Exception 

        throw std::runtime_error("Something went wrong - 1");
    }
    catch (...) {
        VL_CODE_FLATTENING_BEGIN;

        printf("     > ObfuscationCxxEHTest Catch .. \n");

        VL_CODE_FLATTENING_END;
    }

    return;
}

#pragma optimize("", off) 
void CxxEHTest() {
    VL_VIRTUALIZATION_BEGIN;

    VirtualizationCxxEHTest();
    DualModeCxxEHTest();

    ObfuscationCxxEHTest();
    CodeFlatteningCxxEHTest();

    VL_VIRTUALIZATION_END;

    return;
}
