#include <windows.h>
#include <stdio.h>
#include <stdint.h>

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

// Event Callback ..

#pragma pack(push, 1)
using register_t = size_t;
typedef struct _tag_sdk_context {
    register_t rax;
    register_t rbx;
    register_t rcx;
    register_t rdx;

    register_t rsi;
    register_t rdi;

    register_t rsp;
    register_t rbp;

    register_t r8;
    register_t r9;
    register_t r10;
    register_t r11;
    register_t r12;
    register_t r13;
    register_t r14;
    register_t r15;

    register_t efl;

    register_t src;
} context_t;
#pragma pack(pop)

extern "C"
void VxLangEventCallback(uint32_t id, context_t* ctx) {
    VL_VIRTUALIZATION_BEGIN;

    void* src = (void*)ctx->src;

    printf("callback .. %p \n", src);

    VL_VIRTUALIZATION_END;

    return;
}

