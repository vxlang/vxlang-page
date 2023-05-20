#include <windows.h>
#include <stdio.h>

#define VXLANG_ADDON_MODULE
#include "../../vxlang/sdk/vxlib.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    // If the return value of the extension module DllMain is FALSE, the Terminate event is fired.
    BOOL result = TRUE; 

    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case VXLANG_LOAD_ADDON_EVENT:
        break;
    case VXLANG_DETECTED_DEBUG:
    case VXLANG_DETECTED_PATCH:
        break;
    case VXLANG_START_EVENT:
        break;
    case VXLANG_TERMINATE_EVENT:
        break;
    default:
        break;
    }
    return result;
}



/**
 *
 */

void NTAPI TlsCallback1(PVOID DllHandle, DWORD dwReason, PVOID) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        printf("TLS 1:: DLL_PROCESS_ATTACH \n");
    }
    else if (dwReason == DLL_THREAD_ATTACH) {
        printf("TLS 1:: DLL_THREAD_ATTACH \n");
    }
}

void NTAPI TlsCallback2(PVOID DllHandle, DWORD dwReason, PVOID) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        printf("TLS 2:: DLL_PROCESS_ATTACH \n");
    }
    else if (dwReason == DLL_THREAD_ATTACH) {
        printf("TLS 2:: DLL_THREAD_ATTACH \n");
    }
}

#ifdef _WIN64
#pragma comment (linker, "/INCLUDE:_tls_used") 
#pragma comment (linker, "/INCLUDE:_tls_callback_list")
#else
#pragma comment (linker, "/INCLUDE:__tls_used") 
#pragma comment (linker, "/INCLUDE:__tls_callback_list")
#endif

#ifdef _WIN64
#pragma const_seg(".CRT$XLC")
EXTERN_C const
#else
#pragma data_seg(".CRT$XLC")
EXTERN_C
#endif
PIMAGE_TLS_CALLBACK _tls_callback_list[] = { TlsCallback1, TlsCallback2 };
#ifdef _WIN64
#pragma const_seg()
#else
#pragma data_seg()
#endif 
