#include <windows.h>
#include <stdio.h>
#include <stdint.h>

//

void SDKTest();
void SEHTest();
void SwitchCaseTest();

//

int main() {
    SDKTest();
    printf("\n");

    SEHTest();
    printf("\n");

    SwitchCaseTest();
    printf("\n");

    //

    printf("press any key to continue .. \n");
    getchar();

    return 1;
}

