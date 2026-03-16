#include <windows.h>
#include <stdio.h>
#include <stdint.h>

#include <iostream>
#include <vector>
#include <thread>
#include <cmath>
#include <atomic>
#include <chrono>
#include <string>

//

#define USE_VL_MACRO
#include "../../sdk/include/vxextsmm.h"

using namespace std;

#pragma optimize("", off) 
void run_compression_test() {
    VLX_OBFUSCATION_BEGIN;

    // 100만 개의 문자열로 가상의 데이터 생성
    string data = "";
    for (int i = 0; i < 1000000; ++i) data += "AAAAABBBBB";

    size_t total_size = data.length();
    size_t processed = 0;
    string compressed = "";

    printf("Test Start: Size %zu bytes\n", total_size);

    // 데이터를 1000개 단위로 끊어서 처리하고 로그 출력
    for (size_t i = 0; i < total_size; i += 1000) {
        string chunk = data.substr(i, 1000);

        // 여기에 실제 압축 로직 (예: RLE)
        char last = chunk[0];
        int count = 0;
        for (char c : chunk) {
            if (c == last) count++;
            else {
                compressed += last + to_string(count);
                last = c; count = 1;
            }
        }

        processed += 1000;
        double current_ratio = (1.0 - (double)compressed.length() / processed) * 100.0;

        // 5% 진행될 때마다 출력 (너무 잦은 출력 방지)
        if ((processed % 50000) == 0) {
            printf("[%3.0f%%] Compress: %5.2f%% | Size: %zu bytes\n",
                (double)processed / total_size * 100, current_ratio, compressed.length());
        }
    }

    VLX_OBFUSCATION_END;

    return;
}

#pragma optimize("", off) 
void TestExtsMM() {
    VLX_OBFUSCATION_BEGIN;

    std::thread([]() {
        VLX_MM_BEGIN;

        run_compression_test();

        VLX_MM_END;
    }).detach();

    std::thread([]() {
        VLX_MM_BEGIN;

        run_compression_test();

        VLX_MM_END;
    }).detach();

    VLX_OBFUSCATION_END;

    return;
}

