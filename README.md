---
layout: page
title: Overview
---

# {{ page.title }}

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang.gif" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- https://vxlang.github.io/

## What is vxlang?

Software can be described as human-understandable mnemonics through disassamblers, and additional information can be used to convert to advanced languages such as C/C++, which are easier to understand. However, this type of analysis can also be referred to as reverse engineering, which can pose a threat to the security of the software. 

**vxlang** is a project designed to prevent manipulations such as static or dynamic analysis, file modification, or unauthorized access by attackers, such as those described above. The vxlang project provides services for software security risks by implementing anti-tamper measures to prevent unauthorized access. 

The vxlang project currently targets native binary files on x86-64 systems and Microsoft Windows operating systems, including executable files with the ".exe" extension and dynamic link library files with the ".dll" extension. (The target binary types supported by vxlang will be expanded in future updates.)

## Software Protector

<div align="center">
   <img src="https://vxlang.github.io/image/protector.png" loop=infinite style="max-width: 100%; height: auto;" />
</div>

Executable compression refers to the process of compressing a file into an executable format. This type of compression helps to hide source code and file information, making access more difficult. Software protectors such as vxlang can provide increased security by tampering with files, obfuscating code, and performing dynamic analysis protection to prevent unauthorized access or tampering.

## Software Code obfuscation and virtualization

<div align="center">
   <img src="https://vxlang.github.io/image/vcpu.png" loop=infinite style="max-width: 100%; height: auto;" />
</div>

The software protector effectively blocks access to encryption and runtime states, however, it has a drawback in that it can expose the source code when the runtime state is dumped. To address this issue, code obfuscation is applied by adding dummy code or modulating the source code with similar code to the code exposed in the static or dynamic state. However, a more effective solution to protect the code is Code-Virtualization. Code virtualization represents real-world operational commands as virtual code, which can be executed on internal virtual machines. This approach provides a higher level of security compared to code obfuscation alone. vxlang offers these advanced obfuscation and virtualization services to ensure the protection of the code.  

## Deploying the full version

The beta version of vxlang is free software, please request the full version via email and we will respond by creating your distribution file.

## Latest Version

0.9.0
---
- A random context has been applied to the virtual machine.
- Improved deployment file structure.
- Improved the speed of the behavior.
  - Hotfix.2023.02.27
    - Add Virtual Contexts and Update version logo.
  - Hotfix.2023.02.28
    - If there is no relocation table, a bug that fails engine operation has been fixed.
    - The process pause detection function is force-enabled.
  - Hotfix.2023.03.04
    - A bug in the code obfuscation exception handling process has been fixed.
    - The x86-64 virtualization command was added.
  - Hotfix.2023.03.05
    - The x86-64 virtualization command was added.
  - Hotfix.2023.03.07
    - Fixed a packer bug.
    - Fixed packer to be enabled by default.
  - Hotfix.2023.03.08
    - Fixed to force a shutdown if a timeout occurs for the detection feature.
  - [Download](https://github.com/vxlang/vxlang-page/releases/tag/0.9.0)
  
## Goal

The first step is to ensure that all features supported by vxlang work reliably and support additional features.

## Special Thanks

Thank you to everyone who helped with the development.

- [2GG](https://twitter.com/2gg) 
- [kao](https://lifeinhex.com/) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213340) 
- [Extreme Coders](https://github.com/extremecoders-re/tuts4you_users_desktop_crackme_writeup) 
  - [Crackme01](https://forum.tuts4you.com/topic/43809-users-desktop-crackme/#comment-213328)  
- [clavis0x](https://github.com/clavis0x)
- [tybins99](https://github.com/tybins99)  
  
  
  
