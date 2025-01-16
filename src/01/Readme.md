# Tutorial

### This sample is a tutorial on applying the VxLang SDK. It explains how to apply the SDK and what to look out for (optimizations and SEH/switch-case syntax).

---

1. Build the `tutorial` project.
2. Install VxLang as shown in the figure below.
<img src="https://github.com/vxlang/vxlang-page/blob/main/image/antidmp-1.PNG" style="max-width: 30%; height: auto;" />
3. Run `tutorial.bat` to protect the binary.

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
    
