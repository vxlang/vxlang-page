#include <ntifs.h>
#include <ntddk.h>

extern "C"
NTSTATUS DriverEntry(IN PDRIVER_OBJECT pDriverobject, IN PUNICODE_STRING pRegister) {
    UNREFERENCED_PARAMETER(pDriverobject);
    UNREFERENCED_PARAMETER(pRegister);

    return 0;
}

NTSTATUS DllInitialize(PUNICODE_STRING RegistryPath) {
    UNREFERENCED_PARAMETER(RegistryPath);

    return 0;
}

NTSTATUS DllUnload(void) {
    return 0;
}

//

extern "C"
void VxVirtualizationBegin() {
    return;
}

extern "C"
void VxVirtualizationEnd() {
    return;
}

//

extern "C"
void VxDualModeBegin() {
    return;
}

extern "C"
void VxDualModeEnd() {
    return;
}

//

extern "C"
void VxObfuscationBegin() {
    return;
}

extern "C"
void VxObfuscationEnd() {
    return;
}

//

extern "C"
void VxCodeFlatteningBegin() {
    return;
}

extern "C"
void VxCodeFlatteningEnd() {
    return;
}

//

extern "C"
int VxLinkEvent(unsigned int id, void* buffer, size_t sizeOfBuffer) {
    UNREFERENCED_PARAMETER(id);
    UNREFERENCED_PARAMETER(buffer);
    UNREFERENCED_PARAMETER(sizeOfBuffer);

    return 0;
}
