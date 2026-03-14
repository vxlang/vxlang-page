#pragma once

#define AXION_REGISTER_CALLBACK               0xD0000001
#define AXION_DEBUG_DETECTED                  0xD0000002
#define AXION_TAMPERED_DETECTED               0xD0000003
#define AXION_PAUSE_DETECTED                  0xD0000004
#define AXION_VM_DETECTED                     0xD0000005 

#define AXION_CODE_INJECTED                   0xD0000100
#define AXION_LOADED_MODULE                   0xD0000101

//

enum {
    DETECTION_DATA_NONE,
    DETECTION_DATA_INT32,
    DETECTION_DATA_INT64,
    DETECTION_DATA_PTR,
    DETECTION_DATA_STR,
    DETECTION_DATA_WSTR,
};

//

typedef struct _tag_AXION_DETECTION_TYPE {
    uint32_t type;
    union {
        uint32_t i32;
        uint64_t i64;
        void* ptr;
        const char* str;
        const wchar_t* wstr;
    };
} AXION_DETECTION_T;

//


