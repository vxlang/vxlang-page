#include <windows.h>
#include <stdio.h>
#include <stdint.h>

//

#define USE_VL_MACRO
#include "../../sdk/include/vxlib.h"
#include "axion_type.h"

#ifndef _WIN64
#pragma comment(lib, "../../sdk/lib/vxlib32.lib")
#else
#pragma comment(lib, "../../sdk/lib/vxlib64.lib")
#endif

//

#define VXLANG_INITIALIZE                          0x00000000
#define VXLANG_RUN_TASK                            0x00000001

#define VXLANG_LOAD_ADDON_EVENT                    0xA0000000
#define VXLANG_SETUP_IMPORT_TABLE                  0xA0000001
#define VXLANG_START_EVENT                         0xA0000002
#define VXLANG_TERMINATE_EVENT                     0xA0000003
#define VXLANG_DOTNET_EVENT                        0xA0000004

#define VXLANG_LINK_EVENT_STR_A                    0xA0000009
#define VXLANG_LINK_EVENT_STR_W                    0xA000000A
#define VXLANG_LINK_EVENT_FREE                     0xA000000B
#define VXLANG_LINK_CALLBACK                       0xA000000C

#define VXLANG_ERROR_IMPORT_TABLE                  0xE0000000
#define VXLANG_ERROR_ALLOCATE_VIRTUAL_IMAGE        0xE0000001
#define VXLANG_ERROR_RELOCATE_IMAGE                0xE0000002
#define VXLANG_ERROR_INSTALL_FAIL                  0xE0000003

//

int LinkEventCallback(uint32_t id, void* arg, void* param) {
    printf("call:: %08X %p %p \n", id, arg, param);

    AXION_DETECTION_T* detect = (AXION_DETECTION_T*)arg;

    if (detect->type == DETECTION_DATA_WSTR) {
        printf("test:: %ls \n", detect->wstr);
    }

    return 1;
}

int VxLangEventCallback(unsigned int id, void* arg, void* param) {
    AXION_DETECTION_T* detect = (AXION_DETECTION_T*)arg;

    //

    if (id == AXION_REGISTER_CALLBACK) {
        printf("[*] Callback registered ! \n");
    }
    else if (id == AXION_DEBUG_DETECTED) {
        printf("[*] Debugger detected ! \n");
    }
    else if (id == AXION_PAUSE_DETECTED) {
        printf("[*] Pause detected ! \n");
    }
    else if (id == AXION_TAMPERED_DETECTED) {
        printf("[*] Shellcode Tampering Detection ! \n");
    }
    else if (id == AXION_LOADED_MODULE) {
        if (detect && detect->type == DETECTION_DATA_WSTR) {
            printf("test:: %ls \n", detect->wstr);
        }
    }

    return 1;
}

int main() {
    printf("[*] Starting...\n");

    VxLinkEvent(VXLANG_LINK_CALLBACK, (void*)VxLangEventCallback, nullptr);

    //

    while (true) {
        Sleep(1000);
    }

    return 0;
}

