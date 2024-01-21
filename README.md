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
  - Demo: ver.1.0.6.2
  - Full: Latest version
 
1.0.0
---
- `1.1.2.0`
  - [Virtualizer] Fixed bugs that conflict with obfuscation blocks during reference call virtualization.
  - [ALL] The virtual machine section and obfuscation section are integrated. 
- `1.1.1.0`
  - [Packer] Added protection for Packer shell code.
  - [Packer] Fixed a bug with packing using commands.
- `1.1.0.0`
  - [Virtualizer] Added test encryption to the virtual machine's bytecode. 
  - [Obfuscator] Added additional obfuscation to code flattening.
  - Letter
    - Now I'm going to apply different encryption to all handlers through the update. Also, each virtual machine will have a different key for the current fixed key. Unnecessary sections will also be integrated :)   
- `1.0.9.1`
  - [Obfuscator] Fixed a bug where code flattening options for entry points were not applied in JSON projects.
  - [ALL] In normal mode, the Mutate core has been added, but is not yet used.
- `1.0.9.0`
  - [ALL] Support for project settings via JSON files.
    - [Document](https://www.patreon.com/posts/json-project-95637888)
  - [ALL] Modified to allow you to edit messages about the default detection feature.
  - [ALL] Fixed Small bug. 

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

  
  
  
