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

#pragma optimize("", off) 
void VxLangStringTest() {
    //VL_VIRTUALIZATION_BEGIN;

    do {
        const char* str_1 = VL_ALLOC_STR("str..1");
        const char* str_2 = VL_ALLOC_STR("str..2");
        const char* str_3 = VL_ALLOC_STR("str..3");

        if (str_1) {
            printf("%s \n", str_1);
            VL_FREE(str_1);
        }

        if (str_2) {
            printf("%s \n", str_2);
            VL_FREE(str_2);
        }

        if (str_3) {
            printf("%s \n", str_3);
            VL_FREE(str_3);
        }

    } while (false);

    //VL_VIRTUALIZATION_END;

    return;
}

#pragma optimize("", off) 
void VxLangWStringTest() {
    //VL_VIRTUALIZATION_BEGIN;

    do {
        const wchar_t* str_1 = VL_ALLOC_WSTR(L"wstr..1");
        const wchar_t* str_2 = VL_ALLOC_WSTR(L"wstr..2");
        const wchar_t* str_3 = VL_ALLOC_WSTR(L"wstr..3");

        if (str_1) {
            printf("%ls \n", str_1);
            VL_FREE(str_1);
        }

        if (str_2) {
            printf("%ls \n", str_2);
            VL_FREE(str_2);
        }

        if (str_3) {
            printf("%ls \n", str_3);
            VL_FREE(str_3);
        }

    } while (false);

    //VL_VIRTUALIZATION_END;

    return;
}
