#include <windows.h>
#include <winternl.h>
#include <stdio.h>

#include <map>

//

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

//

#include "../detoure/include/detours.h"

#ifdef _M_X64
#pragma comment(lib, "../detoure/x64/detours.lib")
#else
#pragma comment(lib, "../detoure/x86/detours.lib")
#endif

#pragma comment(linker, "/ALIGN:0x10000")


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
        break;
    case VXLANG_VL_END:
        break;
    default:
        break;
    }

    return result;
}

/*
 * 
 */

typedef NTSTATUS(NTAPI* LdrLoadDll_T)(PWCHAR PathToFile, PULONG Flags, PUNICODE_STRING ModuleFileName, PHANDLE* ModuleHandle);

LdrLoadDll_T _LdrLoadDll = nullptr;
NTSTATUS NTAPI HkLdrLoadDll(PWCHAR PathToFile, PULONG Flags, PUNICODE_STRING ModuleFileName, PHANDLE* ModuleHandle) {
    printf("LDR:: %ls \n", ModuleFileName->Buffer);
    return _LdrLoadDll(PathToFile, Flags, ModuleFileName, ModuleHandle);
}

/**
 *
 */

void Hook() {
    do {
        HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");
        if (nullptr == ntdll) { break; }

        _LdrLoadDll = (LdrLoadDll_T)GetProcAddress(ntdll, "LdrLoadDll");
        if (nullptr == _LdrLoadDll) { break; }

        //

        DetourRestoreAfterWith();

        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());

        DetourAttach(&_LdrLoadDll, HkLdrLoadDll); // ***

        DetourTransactionCommit();

    } while (false);

    return;
}

void Unhook() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    DetourDetach(&_LdrLoadDll, HkLdrLoadDll); // ***

    DetourTransactionCommit();

    return;
}

void NTAPI TlsCallback(PVOID DllHandle, DWORD dwReason, PVOID) {
    if (DLL_PROCESS_ATTACH == dwReason) {
        Hook();
    }
    else if (DLL_PROCESS_DETACH == dwReason) {
        Unhook();
    }

    return;
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
PIMAGE_TLS_CALLBACK _tls_callback_list[] = { TlsCallback, };
#ifdef _WIN64
#pragma const_seg()
#else
#pragma data_seg()
#endif 
