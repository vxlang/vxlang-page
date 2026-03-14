#include <windows.h>
#include <stdio.h>
#include <stdint.h>

#include <iostream>
#include <vector>
#include <thread>
#include <cmath>
#include <atomic>
#include <chrono>

//

#define USE_VL_MACRO
#include "../../sdk/include/vxextsmm.h"

std::atomic<bool> keep_running(true);

void stress_worker(int id) {

    return;
}

void ThreadProc() {
    VLX_OBFUSCATION_BEGIN;

    for (int i = 0; i < 1000; ++i) {
        printf(">> %d \n", i);
    }

    VLX_OBFUSCATION_END;

    return;
}

void TestExtsMM() {
    std::thread([]() {
        while (true) {
            VLX_MM_BEGIN;

            ThreadProc();
            Sleep(1000);

            VLX_MM_END;
        }
    }).detach();

    std::thread([]() {
        while (true) {
            VLX_MM_BEGIN;

            ThreadProc();
            Sleep(1000);

            VLX_MM_END;
        }
    }).detach();

    return;
}
