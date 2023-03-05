#pragma once

//

#if defined( __amd64__ ) || defined( __x86_64__ ) || defined( _M_X64 ) || defined( _M_AMD64) || defined( _ia64__ ) || defined( _M_IA64 ) || defined( __itanium__ )
#pragma comment(lib, "vxlib64.lib")
#else
#pragma comment(lib, "vxlib32.lib")
#endif

//

void __stdcall VxVirtualizationBegin();
void __stdcall VxVirtualizationEnd();

void __stdcall VxObfuscationBegin();
void __stdcall VxObfuscationEnd();

#ifdef __clang__
#define VM_BEGIN            VxVirtualizationBegin()
#define VM_END              VxVirtualizationEnd()

#define OBFUSCATION_BEGIN   VxObfuscationBegin()
#define OBFUSCATION_END     VxObfuscationEnd()
#elif __GNUC__
#define VM_BEGIN            VxVirtualizationBegin()
#define VM_END              VxVirtualizationEnd()

#define OBFUSCATION_BEGIN   VxObfuscationBegin()
#define OBFUSCATION_END     VxObfuscationEnd()
#elif _MSC_VER
#define VM_BEGIN            VxVirtualizationBegin()
#define VM_END              VxVirtualizationEnd()

#define OBFUSCATION_BEGIN   VxObfuscationBegin()
#define OBFUSCATION_END     VxObfuscationEnd()
#endif
