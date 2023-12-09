# VxLang

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang.gif" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- [BLOG](https://vxlang.github.io/)

---

## What is vxlang?

**VXLANG** is a project designed to prevent reverse-engineering behaviors such as static or dynamic analysis, file tampering, and unauthorized access to memory by attackers. 

The vxlang project currently targets x86-64 system and .Net binaries, native binary files for the Microsoft Windows operating system, including executables with the ".exe" extension, dynamic link library files with the ".dll" extension, and kernel driver files with the ".sys" extension. (The types of target binaries supported by vxlang will be expanded in future updates).

## Virtualization Preview

<div align="center">
   <p>Before</p>
   <img src="https://vxlang.github.io/image/VMBegin.png" style="max-width: 100%; height: auto;" />
   <p>After</p>
   <img src="https://vxlang.github.io/image/VMEnd.png" style="max-width: 100%; height: auto;" />
</div>

## Obfuscation Preview

<div align="center">
   <p>Before</p>
   <img src="https://vxlang.github.io/image/bef.PNG" style="max-width: 100%; height: auto;" />
   <p>After x64dbg</p>
   <img src="https://vxlang.github.io/image/7x.PNG" style="max-width: 50%; height: auto;" /> 
   <p>After IDA - TYPE 1</p>
   <img src="https://vxlang.github.io/image/8x.png" style="max-width: 50%; height: auto;" /> 
</div>

## Precautions

- `Optimization` : Verify that VxVirtualizationBegin and VxVirtualizationEnd are in the same block.  
  If procedures are merged due to code optimization, problems may arise.
- `switch-case` : In the switch-case, when the branch movement is not an IMM value, it may be moved to the original position.
- `Exception handling` : Currently, the virtual CPU does not support exception handling.
  
## Deploying the full version

The full version of VxLang is developed and operated under donation through Patreon. The exact usage of VxLang and sharing of extension module code, new features of VxLang, etc. will be shared. If you have any questions, please send your request to the email below.

- E-Mail: 0x999h@gmail.com
- Full Version
  - You can control all features of the VxLang protector.
  - Support for virtual CPUs with specialized CPU contexts.
- [Patreon](https://www.patreon.com/vxlang)
  - [VxLang Guidelines](https://www.patreon.com/posts/vxlang-93493825) 

## Latest Version

- [Download](https://vxlang.github.io/download.html)
  - Demo: ver.1.0.1.1
  - Full: Latest version
 
1.0.0
---
- `1.0.5.0`
  - [Obfuscator&Virtualizer] Fixed to put random dummy bytes into memory where the SDK or signature pattern is entered.
  - [Packer] Fixed a bug that caused AXION to malfunction while applied.
- `1.0.4.0`
  - [Obfuscator&Virtualizer] Added code-flattening and code-virtualization features based on binary patterns.
    - [SIG_HEADER](https://github.com/vxlang/sdklib/blob/main/test/vxlib_signature.h#L3) 
  - [Obfuscator] Fixed to support up to 3 levels of code flattening.
    - [SDK HEADER](https://github.com/vxlang/sdklib/blob/main/test/vxlib.h#L21)
  - [Packer] Fixed obfuscation level of shellcode.
- `1.0.3.1`
  - [Obfuscator&Virtualizer] Fixed bug with code entry point calculation failure
  - [Virtualizer] Fixed a bug that prevented NOP handling when the selected block was virtualized.
  - [Packer] Decrease the shellcode obfuscation level by one level because the file size is too large.
- `1.0.3.0`
  - [Obfuscator] Changed the code flattening difficulty via the SDK.
    - [SAMPLE](https://github.com/vxlang/sdklib)
    - [SDK Library](https://www.patreon.com/posts/sdk-library-93852687)
  - [Packer] Fixed small bugs.
- `1.0.2.0`
  - [Obfuscator] Fixed to make code flattening compile and behave faster.
  - [Obfuscator] Fixed code that interferes with code analyzer.
  - [Obfuscator] Fixed deadstore blocks.
  - [Packer] Update packer shell code. 
- `1.0.1.1`
  - [Obfuscator] Fixed a critical bug in code flattening
    - Fixed a bug where blocks would break if there were more than a certain amount of nodes
  - [Virtualizer] Fixed a critical bug in code virtualizer
    - Fixed a bug where virtual machine regions were calculated incorrectly, causing packers to fail
  - [Packer] Add packer shell code
    - Added shell code to slow down the code analyzer
  - Virtualization and obfuscation rotation  
- `1.0.1.0`
  - [Obfuscator] Code flattening is now even faster.
  - [Obfuscator] Code flattening blocks have increased significantly.
  - [Obfuscator] Added dummy code to delay code analysis.
  - [Virtualizer] Fixed a bug with --opt-ref-call.
  - [Virtualizer] The virtual machine has been rotated.
  - [Packer] Removed the compiler pattern for PE format.
- `1.0.0.5`
  - Support code flattening for kernel drivers.
    - [How to Add VxLang to MSVC Build Events(KD)](https://www.patreon.com/posts/how-to-add-to-kd-93433517)
  - Speeding up the code flattening process.
  - Increased the difficulty of code flattening and code obfuscation.
  - Added techniques like dead-stores.
  - The virtual machine has been updated.
- `1.0.0.4`
  - Code flattening is applied to the Virtual-Machine.
  - Adjusts the difficulty of Code-Flattening.
  - Virtual Machines and Code Obfuscation rotated.
  - Fixed some shell code.
  - Fixed a small bug.  
- `1.0.0.3`
  - Adjust the speed of code flattening (compiles faster)
  - Randomly modify code flattening context (more updates coming soon)
  - Fixed bug:https://www.patreon.com/posts/92864752?utm_campaign=postshare_creator
  - Virtual Machine Rotation.
- `1.0.0.2`
  - Adjust the packing speed.
  - Increases the virtualization scope of shell code.
    - The above changes continuously.
- `1.0.0.1`
  - Code-flattening can now be applied to packer shell code as well.
  - Fixed a small bug.
  - Obfuscation has been rotated.

## TODO
- `1.0.`
  1. develop the ELF editor.
  2. test and bug fix for Windows version.  
- `Task`
  - Add ELF32/64 format for x86-64
  - Add code obfuscation methods for x86-64
    - Once the above steps are complete, add the ARM system for the ELF file format.
    
---

## Special Thanks

Thank you to everyone who helped with the development.

- [2GG](https://twitter.com/2gg) 
- [kao](https://lifeinhex.com/) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213340) 
- [Extreme Coders](https://github.com/extremecoders-re/tuts4you_users_desktop_crackme_writeup) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213328)  
- [clavis0x](https://github.com/clavis0x)
- [tybins99](https://github.com/tybins99) 
- [EBalloon](https://github.com/EBalloon)
- [Aiden](https://github.com/aidenosys)
  - Lots of bug fixes
  
  
  
