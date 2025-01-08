#pragma once

#ifdef USE_VL_MACRO
extern "C"
void VxVirtualizationBegin();
extern "C"
void VxVirtualizationEnd();

extern "C"
void VxDualModeBegin();
extern "C"
void VxDualModeEnd();

extern "C"
void VxObfuscationBegin();
extern "C"
void VxObfuscationEnd();

extern "C"
void VxCodeFlatteningBegin();
extern "C"
void VxCodeFlatteningEnd();

//

#define VL_OBFUSCATION_BEGIN               VxObfuscationBegin()
#define VL_OBFUSCATION_END                 VxObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN           VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END             VxCodeFlatteningEnd()

#define VL_VIRTUALIZATION_BEGIN            VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END              VxVirtualizationEnd()

#define VL_DUAL_MODE_BEGIN                 VxDualModeBegin()
#define VL_DUAL_MODE_END                   VxDualModeEnd()
#else
#define VL_OBFUSCATION_BEGIN            
#define VL_OBFUSCATION_END              

#define VL_CODE_FLATTENING_BEGIN        
#define VL_CODE_FLATTENING_END          

#define VL_VIRTUALIZATION_BEGIN         
#define VL_VIRTUALIZATION_END           

#define VL_DUAL_MODE_BEGIN
#define VL_DUAL_MODE_END
#endif

//

/*
 **
 */

enum _tag_PACKER_STATUS {
    VXLANG_INITIALIZE = 0,
    VXLANG_RUN_TASK,

    VXLANG_LOAD_ADDON_EVENT = 0xA0000000,

    VXLANG_SETUP_IMPORT_TABLE,

    VXLANG_START_EVENT,
    VXLANG_TERMINATE_EVENT,
    VXLANG_DOTNET_EVENT,

    VXLANG_INTERRUPT_VL_ENTRY,

    VXLANG_VL_BEGIN = 0xA0000006,
    VXLANG_VL_END,

    VXLANG_DLL_UNLOAD,

    VXLANG_ERROR_IMPORT_TABLE = 0xE0000000,
    VXLANG_ERROR_ALLOCATE_VIRTUAL_IMAGE,
    VXLANG_ERROR_RELOCATE_IMAGE,
    VXLANG_ERROR_INSTALL_FAIL,

    VXLANG_DETECTED_DEBUG = 0xD0000000,
    VXLANG_DETECTED_PATCH,
    VXLANG_DETECTED_CHKIMG,
};

//

typedef struct _tag_SectionType {
    uint32_t virtualAddress;
    uint32_t virtualSize;

    uint32_t characteristics;
} SectionType, * SectionPtr;

typedef struct _tag_DataDirectoryType {
    uint32_t virtualAddress;
    uint32_t size;
} DataDirectoryType;

typedef struct _tag_ImageInfomation {
    void* imageBase;

    uint32_t sizeOfImage;
    uint32_t sectionCount;
    SectionType sections[10];
    DataDirectoryType dataDirectory[16];

    void* tlsCallback;
}ImageInfomation;

typedef void* (__stdcall* GetRawDataT)(const char* keyName, uint32_t* size);
typedef void(__stdcall* FreeRawDataT)(void* ptr);
typedef bool(__stdcall* HasCommandT)(const char* keyName);
typedef bool(__stdcall* TerminateT)(const char* message);
typedef bool(__stdcall* CheckImageT)();
typedef void(__stdcall* GetImageInfomationT)(const char* keyName, ImageInfomation*);
typedef void(__stdcall* GetImageInfomationExT)(void* extsBase, ImageInfomation*);
typedef void* (__stdcall* GetImageBaseT)();
typedef void(__stdcall* GetPackerOptionT)(uint64_t*);

//

typedef struct _tag_INTERFACE_TABLE {
    GetRawDataT _raw;
    FreeRawDataT _free;
    TerminateT _terminate;

    GetImageBaseT _base;
    GetImageInfomationT _info;
    GetImageInfomationExT _exinfo;
    GetPackerOptionT _option;
} INTERFACE_TABLE;

#ifdef VXLANG_ADDON_MODULE
#pragma comment(linker, "/ALIGN:0x10000")
#endif


