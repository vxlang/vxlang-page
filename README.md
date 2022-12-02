<div align="center">
	<a href="https://github.com/vxlang/vxlang-page">
		<img src="image/logo.png ">
	</a>
</div>

# VXLANG

What is VXLANG?
---
**VXLANG** is an executable file protection tool and a code virtualization tool.

# VERSION

0.8.7
---
- Fixed reloc-table related bugs. 
- Obfuscating the Jump table. 
- Update obfuscation code. 
- Improved compiler speed. 
  - [Download](https://url.kr/2e9r5g)

~~0.8.6~~
---
~~Add Free Beta version, Add Detection Code, and Add Specific Code Virtualization Methods.~~  
- ~~[DOWNLOAD](https://url.kr/y63wkf)~~  

~~0.8.5~~
---
~~Add Free Beta version, Virtualization Tools, and Packers.~~

# Options & SDK

Options
---
**The beta version forces debug protection and certain virtualization features to be activated.**
```
--entry: Virtualize entry point.
--call: Virtualize function calls.
--ref-call: Virtualize reference calls.
--ref-ptr: Virtualize the reference pointers.
--level: Adjust the obfuscation level.
--pack: Add packing and protection codes.
```
```
> vxlang.exe ${input-file} --entry --call --ref-call --ref-ptr --pack --obfuscate --level 3
```

Detection Method
---
- Debugging behavior 
- Suspend process 
- Modify shell code or image memory
- Injection behavior 

C++ SDK
---
```
#define USE_VM_MACRO
#include "vmacro.h"

int main(int argc, char* argv[]) {
    VM_START;

    printf("Hello, World ! \r\n");
    return 1;

    VM_END;
}
```

# Supported file formats & architectures

Supported File Formats
-------
<table>
  <tr> 
    <td align="center" colspan="2"><b> File format </b></td>
  </tr>
  <tr> 
    <td align="center"> Windows PE </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>	
  </tr>
  <tr> 
    <td align="center"> Linux ELF </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
  </tr> 
  <tr> 
    <td align="center"> Mac Mach-O </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
  </tr> 
</table>

Supported Architectures
-------
<table>
  <tr> 
    <td align="center" colspan="2"><b> Architecture </b></td>
  </tr>
  <tr>
    <td align="center"> x86_64 </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
  </tr>
  <tr>
    <td align="center"> ARM64 </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
  </tr>	
</table>

# TODO

0.8.8
---
- Fix the bugs received. 
- Add virtualization commands. 
- Add detection logs and user callbacks. 

# Special Thanks

- [2GG](https://twitter.com/2gg) 
- [kao](https://lifeinhex.com/) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213340) 
- [Extreme Coders](https://github.com/extremecoders-re/tuts4you_users_desktop_crackme_writeup) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213328)  
- Franck  
- Taehoon Lee  
  
