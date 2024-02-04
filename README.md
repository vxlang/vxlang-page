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
   <p>After IDA</p>
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
  - Demo: ver.1.1.7.0
  - Full: Latest version
 
1.0.0
---
- `1.1.8.0`
  - [Virtualizer] Fixed to be encrypted via a random key at byte code compilation time.
  - [Virtualizer] Added encryption to a specific bytecode.
  - [Packer] Shell code generation has been accelerated a little.
- `1.1.7.0`
  - [Virtualizer] The virtual machine has been updated, and code and register references have been optimized.
  - [Virtualizer] Obfuscation has been updated.
  - [Packer] Detection has been integrated; existing features have been integrated into anti-tampers.
  - [Packer] The 32-bit process has fixed a bug that does not match the process context.  
- `1.1.6.0`
  - [Packer] Once the event handle is registered in the export-function, it has been fixed to receive and process detection events at run-time.
- `1.1.5.0`
  - [Packer] The vxlang notation has been removed in the message box output (The process name is displayed).
  - [Packer] The add-on interface has been changed.
  - [Github] A custom method has been added to the test code.
- `1.1.4.1`
  - [Packer] Fixde bugs that anti-tampers check for removed items.
- `1.1.4.0`
  - [Packer] Fixed bugs that crash during shell code generation.
    - problem occurred during file mutation and was temporarily removed. 

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
  - Lots of Bug reporting
- [YoavLevi](https://github.com/YoavLevi)
  - Bug reporting and testing sample code & binary support
- [mikSn](https://github.com/mikSn)
  - Bug reporting
  

  
  
  
