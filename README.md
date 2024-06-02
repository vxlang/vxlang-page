# VxLang

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang.gif" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- [BLOG](https://vxlang.github.io/)
- [How to Use VxLang: Exploring Through Test Programs](https://www.patreon.com/posts/92188141)

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
   <p>After</p>
   <img src="https://vxlang.github.io/image/cff-1-1.png" style="max-width: 50%; height: auto;" /> 
   <img src="https://vxlang.github.io/image/cff-1-2.png" style="max-width: 50%; height: auto;" /> 
</div>

## Precautions

- `Optimization` : Verify that VxVirtualizationBegin and VxVirtualizationEnd are in the same block.  
  If procedures are merged due to code optimization, problems may arise.
- `switch-case` : In the switch-case, when the branch movement is not an IMM value, it may be moved to the original position.
- `Exception handling` : Currently, the virtual CPU does not support exception handling.
  
## How to get the full version

The full version of VxLang is developed and operated under donation through Patreon.  
The exact usage of VxLang and sharing of extension module code, new features of VxLang, etc. will be shared.  
If you have any questions, please send your request to the email below.

- E-Mail: 0x999h@gmail.com
- Full Version
  - You can control all features of the VxLang protector.
  - Support for virtual CPUs with specialized CPU contexts.
- [Patreon](https://www.patreon.com/vxlang)
  - [How to Purchase Personal-License](https://www.patreon.com/posts/how-to-purchase-104911282)

## Usage

- [Guideline](https://www.patreon.com/posts/vxlang-93493825)

## Latest Version

- [Download](https://vxlang.github.io/download.html)
  - Demo: ver.1.4.5.0
  - Full: Latest version
 
1.x.x
---
- `1.4.5.0`
  - Modified code flattening obfuscation method
  - Adjusted total size of code flattening
  - Fixed bugs in MAP-based obfuscation/virtualization
- `1.4.4.0`
  - An On/Off option for Import Table Mutation has been added.
    - This feature is enabled by default, but in CMD mode, you can disable it using the --disable-import-mutation option.
    - e.g. If Min-Hook is not working, try disabling this option.
- `1.4.3.1`
  - Minor bug fixes.
    - Fixed a bug where a command prompt window would appear when anti-tamper was activated.
- `1.4.3.0`
  - The command-line mode has been re-enabled.
    - Unlike before, a temp.json file is created and referenced.
    - The command-line mode does not support adding add-ons.
  - Fixed a small bug.
    -Log output
- `1.4.2.0`
  - Added obfuscation and virtualization features based on MAP files.
  - Modified JSON projects to allow compression of multiple files.
    - support older versions of JSON.   
  - Discontinuation of Command-Line based feature support.
- `1.4.1.0`
  - The JSON parsing format has been changed. MAP-based virtualization and obfuscation will be added in the next hotfix update.
  - The bug related to DLL manual mapping has been fixed. 
- `1.4.0.0`
  - The registers used for operations in the virtual machine are randomly assigned each time.
    - Plan to add this to all instructions in the version 1.4 update.
  - Fixed a bug that caused the obfuscated code to run slower.
- `1.3.16.0`
  - Fixed bug where a crash occurred if the obfuscation section was missing when debug information was added.
- `1.3.15.0`
  - Fixed bugs related to adding resources
- `1.3.14.0`
  - Fixed bug for code-flattening&obfuscation
  - Fixed packing log.  
- `1.3.13.0`
  - Improved memory protection.
    - Added additional protection to the R/W area.
  - Improved process pause detection.  
- `1.3.12.0`
  - Fixed a feature that conflicts with Windows 11.
- `1.3.11.0`
  - Improved import table settings.
    - Set-up the same as a common commercial packer.
- `1.3.10.0`
  - Improved memory protection
  - Fixed Anti-Tamper bug

## TODO
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
- [YoavLevi](https://github.com/YoavLevi)
- [mikSn](https://github.com/mikSn)
- [Jae Hoon Ahn](https://github.com/dkswognsdi)
- [LOLSHAN](https://github.com/LOLSHAN)
- [itskian](https://github.com/itskian)

  
  
  
