#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

#include "../xorstr/xorstr.hpp"
#include "../lazy_importer/lazy_importer.hpp"

//

void test() {
    void* user32 = LI_FN(LoadLibraryA)(xorstr_("user32.dll"));
    LI_FN(MessageBoxA).in(user32)(NULL, xorstr_("Start Test"), xorstr_("test"), 0);

    for(int i = 0; i < 10; ++i){
        LI_FN(printf)(xorstr_("count %d \n"), i);
        LI_FN(Sleep)(500);
    }

    return;
}

void print_time(const char* str) {
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    //

    printf("%d.%02d.%02d %02d:%02d:%02d   %s", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec, str);

    return;
}

int main() {
    print_time("start.. \n");
    test();
    print_time("end.. \n");

    getchar();

    return 1;
}

