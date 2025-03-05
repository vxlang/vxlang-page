/*++

Copyright (c) Alex Ionescu.  All rights reserved.

Module Name:

    shvos.c

Abstract:

    This module implements the OS-facing UEFI stubs for SimpleVisor.

Author:

    Alex Ionescu (@aionescu) 29-Aug-2016 - Initial version

Environment:

    Kernel mode only.

--*/

//
// Basic UEFI Libraries
//
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>

//
// Boot and Runtime Services
//
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>

//
// Shell Library
//
#include <Library/ShellLib.h>

//
// VxLang-SDK
//
#define USE_VL_MACRO
#include "../../vxlang-sdk/include/vxlib.h"

//
// We run on any UEFI Specification
//
extern CONST UINT32 _gUefiDriverRevision = 0;

//
// Our name
//
CHAR8 *gEfiCallerBaseName = "VxLangSample";

EFI_STATUS
EFIAPI
UefiUnload (EFI_HANDLE ImageHandle){
    // 
    // This code should be compiled out and never called 
    // 
    ASSERT(FALSE);
}

//
//
//

void
EFIAPI
Obfuscation() {
    VL_OBFUSCATION_BEGIN;

    Print(L"Obfuscation \n");

    VL_OBFUSCATION_END;

    return;
}

void
EFIAPI
Dual() {
    VL_DUAL_MODE_BEGIN;

    Print(L"Dual-Mode \n");

    VL_DUAL_MODE_END;

    return;
}

EFI_STATUS
EFIAPI
UefiMain (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE* SystemTable) {
    Obfuscation();
    Dual();

    return 0;
}

