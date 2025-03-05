#include <windows.h>
#include <stdio.h>
#include <stdint.h>

#include <iostream>

//

#define USE_VL_MACRO
#include "../../sdk/include/vxlib.h"

#ifndef _WIN64
#pragma comment(lib, "../../sdk/lib/vxlib32.lib")
#else
#pragma comment(lib, "../../sdk/lib/vxlib64.lib")
#endif

/*
For switch-case statements, it is very dangerous to obfuscate the entire syntax. 
When compiled, it is moved to an unknown location (jmp reg), as shown below, and the obfuscation tool interprets it as it is, 
so the code is moved to the original location where it was erased.

*** Therefore, for switch-case statements, it is safe to obfuscate the case internals as shown in the sample.
*/


/*
sub rsp,28
dec ecx
cmp ecx,E
ja tutorial64.vxm.7FF6E9C4133F
;
movsxd rax,ecx
lea rdx,qword ptr ds:[7FF6E9C40000]
mov ecx,dword ptr ds:[rdx+rax*4+3710]
add rcx,rdx
jmp rcx                                 ; ***** Danger code .. 
;
lea rdx,qword ptr ds:[<"Case 1"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 2"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 3"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 4"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 5"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 6"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 7"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 8"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 9"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 10"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 11"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 12"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 13"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 14"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Case 15"...>]
jmp tutorial64.vxm.7FF6E9C41346
lea rdx,qword ptr ds:[<"Default case"...>]
mov rcx,qword ptr ds:[<class std::basic_ostream<char, struct std::char_traits<char>> std::cout>]
call <tutorial64.vxm.class std::basic_ostream<char, struct std::char_traits<char>> & __cdecl std::operator<<<struct std::char_traits<char>>(class std::basic_ostream<char, struct std::char_traits<char>> &, char const *)>
lea rdx,qword ptr ds:[<class std::basic_ostream<char, struct std::char_traits<char>> & __cdecl std::endl<char, struct std::char_traits<char>>(class std::basic_ostream<char, struct std::char_traits<char>> &)>]
mov rcx,rax
add rsp,28
jmp qword ptr ds:[<public: class std::basic_ostream<char, struct std::char_traits<char>> & __cdecl std::basic_ostream<char, struct std::char_traits<char>>::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> & (__cdecl *)(class std::basic_ostream<char, >]
*/

#pragma optimize("", off) 
void Warning_SwitchCaseTest(int value) {
    switch (value) {
    case 1:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 1" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 2:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 2" << std::endl; 

        VL_VIRTUALIZATION_END;
        break; 
    case 3:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 3" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 4:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 4" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 5:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 5" << std::endl; 

        VL_VIRTUALIZATION_END;
        break; 
    case 6:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 6" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 7:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 7" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 8:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 8" << std::endl;

        VL_VIRTUALIZATION_END;
        break; 
    case 9:  
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 9" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 10: 
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 10" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    case 11:
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 11" << std::endl;

        VL_VIRTUALIZATION_END;
        break;
    case 12:
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 12" << std::endl;

        VL_VIRTUALIZATION_END;
        break;
    case 13:
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 13" << std::endl;

        VL_VIRTUALIZATION_END;
        break;
    case 14:
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 14" << std::endl;

        VL_VIRTUALIZATION_END;
        break;
    case 15:
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Case 15" << std::endl;

        VL_VIRTUALIZATION_END;
        break;
    default: 
        VL_VIRTUALIZATION_BEGIN;

        std::cout << "     Default" << std::endl; 

        VL_VIRTUALIZATION_END;
        break;
    }

    return;
}

#pragma optimize("", off) 
void SwitchCaseTest() {
    VL_VIRTUALIZATION_BEGIN;

    for (int i = 0; i < 16; ++i) {
        Warning_SwitchCaseTest(i);
    }

    VL_VIRTUALIZATION_END;

    return;
}
