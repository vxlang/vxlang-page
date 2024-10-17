#include <windows.h>
#include <stdio.h>

#include <map>

#pragma comment(linker, "/ALIGN:0x10000")

enum _tag_PACKER_STATUS {
    VXLANG_LOAD_ADDON_EVENT = 0xA0000000,
    VXLANG_START_EVENT,

    VXLANG_VL_BEGIN = 0xA0000006,
    VXLANG_VL_END,
};

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

// ***** Precaution
// This is an extension of the packer shell code, not an actual DLL, so be careful with the static variable declarations. 
// They can be registered with TLS, which can be problematic for your program.
// Please make it a global variable so that you can reference it in your code.

std::map<register_t, uint32_t> _tickList;

//

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    // ***** If the return value of the extension module DllMain is FALSE, the Terminate event is fired.

    BOOL result = TRUE; 

    switch (fdwReason) {
    case VXLANG_LOAD_ADDON_EVENT:
        break;
    case VXLANG_START_EVENT:
        break;
    case VXLANG_VL_BEGIN:
    {
        context_t* ctx = (context_t*)lpvReserved;
        uint32_t tick = GetTickCount();
        _tickList.insert(std::make_pair(ctx->src, tick));

        printf("VXLANG_VL_BEGIN:: %p \n", (void*)ctx->src);

        break;
    }
    case VXLANG_VL_END:
    {
        context_t* ctx = (context_t*)lpvReserved;
        uint32_t tick = 0;
        auto srcTick = _tickList.find(ctx->src);

        if (_tickList.end() != srcTick) {
            tick = GetTickCount() - srcTick->second;
        }

        printf("  VXLANG_VL_END:: %p, Running-Time=%d \n", (void*)ctx->src, tick);

        break;
    }
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
    }
}

void NTAPI TlsCallback2(PVOID DllHandle, DWORD dwReason, PVOID) {
    if (dwReason == DLL_PROCESS_ATTACH) {
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
