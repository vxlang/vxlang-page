# VxLang

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang.gif" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- [Guide Blog Link](https://vxlang.github.io/)

---

# Contents

- [What is vxlang?](#What-is-vxlang?)
- [Software Protector](#Software-Protector)
- [Software Code obfuscation and virtualization](#Software-Code-obfuscation-and-virtualization)
- [Virtualization Preview](#Virtualization-Preview)
- [Precautions](#Precautions)
- [Option](#Option)
- [Deploying the full version](#Deploying-the-full-version)
- [Latest Version](#Latest-Version)
- [TODO](#TODO)
- [Special Thanks](#Special-Thanks)

---

## What is vxlang?

**VXLANG** is a project designed to prevent reverse-engineering behaviors such as static or dynamic analysis, file tampering, and unauthorized access to memory by attackers. 

The vxlang project currently targets x86-64 system and .Net binaries, native binary files for the Microsoft Windows operating system, including executables with the ".exe" extension, dynamic link library files with the ".dll" extension, and kernel driver files with the ".sys" extension. (The types of target binaries supported by vxlang will be expanded in future updates).

## Software Protector

<div align="center">
   <img src="https://vxlang.github.io/image/protector.png" style="max-width: 100%; height: auto;" />
</div>

Executable compression refers to the process of compressing a file into an executable format. This type of compression helps to hide source code and file information, making access more difficult. Software protectors such as vxlang can provide increased security by tampering with files, obfuscating code, and performing dynamic analysis protection to prevent unauthorized access or tampering.

## Software Code obfuscation and virtualization

<div align="center">
   <img src="https://vxlang.github.io/image/index.gif" loop=infinite style="max-width: 100%; height: auto;" />   
</div>

<div align="center">
   <img src="https://vxlang.github.io/image/vxlang-1.png" style="max-width: 100%; height: auto;" />
</div>

The software protector effectively blocks access to encryption and runtime states, however, it has a drawback in that it can expose the source code when the runtime state is dumped. To address this issue, code obfuscation is applied by adding dummy code or modulating the source code with similar code to the code exposed in the static or dynamic state. However, a more effective solution to protect the code is Code-Virtualization. Code virtualization represents real-world operational commands as virtual code, which can be executed on internal virtual machines. This approach provides a higher level of security compared to code obfuscation alone. vxlang offers these advanced obfuscation and virtualization services to ensure the protection of the code.  

## Virtualization Preview

<div align="center">
   <p>Before</p>
   <img src="https://vxlang.github.io/image/VMBegin.png" style="max-width: 100%; height: auto;" />
   <p>After</p>
   <img src="https://vxlang.github.io/image/VMEnd.png" style="max-width: 100%; height: auto;" />
   <p>Run</p>   
   <img src="https://vxlang.github.io/image/VMRun.gif" loop=infinite style="max-width: 100%; height: auto;" />
</div>

## Precautions

- `Optimization` : Verify that VxVirtualizationBegin and VxVirtualizationEnd are in the same block.  
  If procedures are merged due to code optimization, problems may arise.
- `switch-case` : In the switch-case, when the branch movement is not an IMM value, it may be moved to the original position.
- `Exception handling` : Currently, the virtual CPU does not support exception handling.

## Option

- `--detect-debug` : Checks to see if the process is debugging.
- `--detect-patch` : Checks if the process memory has been tampered with.
- `--disable-packer` : It doesn't use packers; it only virtualizes or obfuscates code.
- `--opt-entry` : Virtualize the program entry point.
- `--add-on` : Add an extension module (Add-on).
  
## Deploying the full version

The beta version is free software, so if you request the full version via email, I will create a distribution file and respond to you.

- E-Mail: 0x999h@gmail.com
- The demo message box is removed.
- Support for specialized add-on modules.
- Support for virtual CPUs with specialized CPU contexts.
- Supports on/off for packer and engine code.
- Add-on development allows you to develop additional features.
- Anti-debugging and anti-tamper features are adjustable.
- Users can disable or control error messages.

## Latest Version

0.9.6.hotfix
---
- Minor bug fixes
- Compiler and linker merged on a per-platform basis.
- Improved core structure.
- The link file and IL file have been removed.

## TODO

- 0.9.6 hotfixes
  - Restore the process saver.
    - Read handle blocking. 
    - Pause protection.
  - Add the type of extension module.
    - Image DLL or raw data.
  - Packers and obfuscators are also modified on a per-platform basis.
  - The obfuscate command is added.
  - Add and test obfuscation using ASMJIT.
    - Like LIEF-Project, it may not apply to vxlang.

- `0.9.7`
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
  
  
  
