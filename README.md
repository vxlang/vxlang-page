<div align="center">
	<a href="https://vxlang.github.io/">
		<img src="image/logo.png ">
	</a>
</div>

# VXLANG BLOG

[Link](https://vxlang.github.io/)

# VXLANG

What is VXLANG?
---
**VXLANG** is an executable file protection tool and a code virtualization tool. 
If you don't have a customization request, the official version of VXLANG beta is free. 
Please let me know the purpose of using it through email. 

<div align="center">
	<a href="https://github.com/vxlang/vxlang-page">
		<img src="image/run.png ">
	</a>
</div>

# VERSION

0.8.9 
---
- SDK release. 
- Added extension module functionality. 
- Add virtualization commands. 
- Bug fix 
- Features will be added through hotfix updates (ex. Packer control via extension module) 
  - [Download](https://url.kr/xjvo2s) 

~~0.8.8~~
---
- ~~Output a detection or error message box.~~ 
- ~~Add detection method.~~ 
- ~~Add Virtualization for Specific x86 Instruction.~~ 
- ~~Fixed a known bug.~~ 
  - ~~[Download](https://url.kr/i5eap1)~~ 

~~0.8.7~~
---
- ~~Fixed reloc-table related bugs.~~ 
- ~~Obfuscating the Jump table.~~ 
- ~~Update obfuscation code.~~ 
- ~~Improved compiler speed.~~ 
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
--opt-entry: Virtualize entry point.
--opt-call: Virtualize function calls.
--opt-ref-call: Virtualize reference calls.
--opt-ref-ptr: Virtualize the reference pointers.
--level: Adjust the obfuscation level.
--pack: Add packing and protection codes.
```
```
> vxlang.exe ${input-file} ${opt}
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

Next Version
---
- Support code virtualization for kernel drivers.
- Fix the bugs. 
- Add virtualization commands. 
- Fix obfuscation code.
- Add detection method.

# Special Thanks

- [2GG](https://twitter.com/2gg) 
- [kao](https://lifeinhex.com/) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213340) 
- [Extreme Coders](https://github.com/extremecoders-re/tuts4you_users_desktop_crackme_writeup) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213328)  
- [clavis0x](https://github.com/clavis0x)
- [tybins99](https://github.com/tybins99)  
  
