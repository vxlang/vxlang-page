# VXLANG

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang.gif" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- [BLOG](https://vxlang.github.io/)

---

## What is VXLANG?

**VXLANG** is a project designed to prevent reverse-engineering behaviors such as static or dynamic analysis, file tampering, and unauthorized access to memory by attackers. 

The VXLANG project currently targets x86-64 systems and .Net binaries, including native binary files for the Microsoft Windows operating system, such as executables with the ".exe" extension, dynamic link library files with the ".dll" extension, and kernel driver files with the ".sys" extension. (The types of target binaries supported by VXLANG will be expanded in future updates).

## Virtualization Preview

<div align="center">
   <p>Before Virtualization</p>
   <img src="https://vxlang.github.io/image/VMBegin.png" style="max-width: 100%; height: auto;" />
   <p>After Virtualization</p>
   <img src="https://vxlang.github.io/image/VMEnd.png" style="max-width: 100%; height: auto;" />
</div>

## Obfuscation Preview

<div align="center">
   <p>Before Obfuscation</p>
   <img src="https://vxlang.github.io/image/bef.PNG" style="max-width: 100%; height: auto;" />
   <p>After Obfuscation</p>
   <img src="https://vxlang.github.io/image/aft.PNG" style="max-width: 100%; height: auto;" /> 
   <img src="https://vxlang.github.io/image/aft2.PNG" style="max-width: 100%; height: auto;" /> 
</div>

## Precautions:

- `Optimization`: Verify that VxVirtualizationBegin and VxVirtualizationEnd are in the same block.  
  If procedures are merged due to code optimization, problems may arise.
- `switch-case`: In the switch-case, when the branch movement is not an IMM value, it may be moved to the original position.
- `Exception handling`: Currently, the virtual CPU does not support exception handling.
  
## Deploying the full version:

To deploy the full version of VXLANG beta, follow these guidelines:
- The full version of VXLANG beta is free software. The download link will only be shared if you tell us exactly what you're going to use it for (like developing a software application or game).
- For research purposes, we ask that you use the free version.
- E-Mail: 0x999h@gmail.com
- The demo message box is removed.
- Support for specialized add-on modules.
- Support for virtual CPUs with specialized CPU contexts.
- Supports on/off for packer and engine code.
- Add-on development allows you to develop additional features.
- Anti-debugging and anti-tamper features are adjustable.
- Users can disable or control error messages.

## Latest Version

0.9.8
---
  - `Before September 12, 2023`
    - Added default protection for .NET dumps; additional protection will be added in AXION mode.
  - `September 11, 2023`
    - Stopped testing AXION mode until new features are added. Can be enabled via `--mode-axion` in the free version.
  - `September 10, 2023`
    - Improved code virtualization speed.
  - `September 6, 2023`
    - Axion: Added code to prevent the creation of abnormal threads.
  - `September 3, 2023`
    - Fixed a bug in .NET mode.
    - Fixed a bug with Axion mode.
  - `September 2, 2023`
    - Unified the free and demo versions. 
    - The default plugin module has been integrated into VXLANG (axion/extsdn).
      - Enable axion: `--mode-axion`
      - **In the free version, AXION is automatically activated.**
    - Fixed a bug with the obfuscation hash table.
    - Fixed a bug where relocations were incorrectly registered during code virtualization.
    - Fixed AXION 32-bit bug.
  - [Download](https://vxlang.github.io/download.html)
      
## TODO:

- `0.9.8`
  - Develop the ELF editor.
  - Test and bug fix for Windows version.
  - Enhance .NET protection.
  - Enhance Windows antitamper features.
- `Hotfix`
  - ...
- `Task`
  - Add ELF32/64 format for x86-64.
  - Add code obfuscation methods for x86-64.
  - Once the above steps are complete, add the ARM system for the ELF file format.
    
---

## Special Thanks

Thank you to everyone who helped with the development:

- [2GG](https://twitter.com/2gg) 
- [kao](https://lifeinhex.com/) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213340) 
- [Extreme Coders](https://github.com/extremecoders-re/tuts4you_users_desktop_crackme_writeup) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213328)  
- [clavis0x](https://github.com/clavis0x)
- [tybins99](https://github.com/tybins)
