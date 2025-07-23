# Tutorial

### This sample is a tutorial on applying the VxLang SDK. It explains how to apply the SDK and what to look out for (optimizations and SEH/switch-case syntax).

---

1. Build the `tutorial` project.
2. Start `obscurion.exe`
3. Open `tutorial64.exe`
   - Check `disable-core`
4. Compile

---

- Optimization precautions
  - Depending on your compilation environment, you may need to disable optimizations, 
because SDK enforcement can be abnormal if the optimization process involves merging functions or repeated syntax merges.
  - ```cpp
    #pragma optimize("", off) // ***
    void test(){
       VL_..._BEGIN;
       // ...
       VL_..._END;
       return;
    }
    ```
  - [Link](https://github.com/vxlang/vxlang-page/blob/main/src/01/tutorial/sdk.cpp#L68)
- Support SEH
  - VxLang supports SEH enforcement. It obfuscates the entire try-except for safe support.
  - ```cpp
    #pragma optimize("", off) // ***
    void test(){
       VL_..._BEGIN;
       __try{
       }
       __except(1){
       }
       VL_..._END;
       return;
    }
    ```
  - [Link](https://github.com/vxlang/vxlang-page/blob/main/src/01/tutorial/seh.cpp)  
- Avoiding C++ exception handlers
  - SEH works with Windows system specifications. 
    C++ EH, on the other hand, depends on the compiler specification (e.g. MSVC/Clang/GCC/Etc.), which can be circumvented by using the SDK as described below.  
  - ```cpp
    #pragma optimize("", off) 
    void test() {
       try {
          VL_..._BEGIN;

          printf("     > ObfuscationCxxEHTest \n");

          VL_..._END;

          // *** Raise Exception

          throw std::runtime_error("Something went wrong - 1");
       }
       catch (...) {
          VL_..._BEGIN;

          printf("     > ObfuscationCxxEHTest Catch .. \n");

          VL_..._END;
       }

       return;
    }  
    ```
  - [Link](https://github.com/vxlang/vxlang-page/blob/main/src/01/tutorial/cxxeh.cpp)  	
- `switch-case` syntax precautions
  - For `switch-case` delimiters, depending on the compilation environment, it will compile as follows
    ```cpp
    sub rsp,28
    dec ecx
    cmp ecx,E
    ja tutorial64.vxm.7FF6E9C4133F
    ;
    movsxd rax,ecx
    lea rdx,qword ptr ds:[7FF6E9C40000]
    mov ecx,dword ptr ds:[rdx+rax*4+3710]
    add rcx,rdx
    jmp rcx                                 ; *** Warning ..
    ...
    ```
    For code like the above, the jmp reg cannot be interpreted by the parser in the obfuscator, so it will be moved to the reg location, which is problematic because this is the location of the code in the original that has already been stripped.
  - [Link](https://github.com/vxlang/vxlang-page/blob/main/src/01/tutorial/switchcase.cpp#L79)  
    
