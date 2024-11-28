#include <windows.h>
#include <stdio.h>
#include <stdint.h>

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

int main() {
    test();

    return 1;
}

