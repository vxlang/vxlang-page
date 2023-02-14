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
  
## Overview

**vxlang** is a project designed to prevent tampering, such as static or dynamic analysis, file modification, or unauthorized access by attackers. The software that relies on the system is compiled and translated into machine language code, which is represented by a mnemonic that can be understood by humans. The mnemonic code that is generated during the compilation of software dependent on the system can be decoded using a disassembler. This process allows for the extraction of additional information and its conversion into a more readable, higher-level code representation. However, this type of analysis can also be referred to as reverse engineering, which can pose a threat to the security of the software.
   
The vxlang project offers services to counter these security risks by implementing anti-tamper measures to prevent unauthorized access or tampering. By doing so, vxlang helps to ensure that the software remains protected and secure.
   
The vxlang project currently targets native binary files on x86-64 systems and Microsoft Windows operating systems, including executable files with the ".exe" extension and dynamic link library files with the ".dll" extension. The target binary types supported by vxlang will be expanded in future updates.
  
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

## Latest Version

0.8.9 
---
- SDK release. 
- Added extension module functionality. 
- Add virtualization commands. 
- Bug fix 
- Features will be added through hotfix updates (ex. Packer control via expansion module) 
  - **Hotfix.2023.01.23**
    - Fix virtualization algorithms for entry points
	- Disable Forced Packing
	- Fix Known Bugs
  - **Hotfix.2023.02.11**
    - Fix Known Bugs 
  - **Hotfix.2023.02.14**
    - Code obfuscation has been added.
    - Adjust compilation and unpacking performance  
  - [Download](https://url.kr/xjvo2s) 

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
  
  
  
