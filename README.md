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
   <p>After</p>
   <img src="https://vxlang.github.io/image/aft.PNG" style="max-width: 100%; height: auto;" /> 
   <img src="https://vxlang.github.io/image/aft2.PNG" style="max-width: 100%; height: auto;" /> 
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
  - Developing custom anti-tamperers with VxLang full version and plugins.
  - [Writing samples for the VxLang Full-Version guide](https://www.patreon.com/posts/writing-samples-90706638)
  - [Customizing the full-version of VxLang:Part 1&2](https://www.patreon.com/posts/customizing-full-90896871)

## Latest Version

0.9.9
---
- `0.9.9.7`
  - Add 50 or more virtual machines.
  - Rotate obfuscation. 
- `0.9.9.6`
  - Added key checking for VxLang: invalid keys will prevent execution.
  - Fixed a conflict with some features in Axion mode.
  - Fixed plugin arguments.
- `0.9.9.5`
  - Remove debug information (PDB) by default.
    - Adding `--use-debug-data` will generate debug information.
  - Some of the packer shell code has become a code virtualization task.
- `0.9.9.4`
- Add 30+ virtual machines.
  - Contexts/handlers/handle tables/link tables/etc. are all different.
- Modify the VxLang context for "Customizing the full-version of VxLang Part 3".
- Update download links.
- `0.9.9.3`
  - Added commands for virtual machines.
  - Fixed a small bug.
- `0.9.9.2`
  - Fixed bugs with protector.
  - Fixed the Protector API. 
- `0.9.9.1`
  - Updated the core(Virtual-CPU) of code virtualization.
    - All handler and link code, and handle tables are randomized. 
- `20231004`
  - Remove unnecessary logs.
  - Added import table protection method(default-shell). 
- `20231001`
  - Changed the way packers parse import tables.
  - Fixed to allow plugin to modify import table settings.
  - Added the option to code-virtualize for code that calls import-referenced functions.
    - `--opt-ref-call`
    - It is automatically enabled in the free version.
  - For testing purposes, axion-mode and modifications are automatically enabled.
  - Fixed a bug with plugin loading.
- [Download](https://vxlang.github.io/download.html)
      
## TODO
- `0.9.9`
  1. develop the ELF editor.
  2. test and bug fix for Windows version.  
  3. ~~Add a virtual machine command.~~
  4. ~~Randomize the virtual machine handler.~~
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
  
  
  
