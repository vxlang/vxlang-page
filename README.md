# VxLang

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang-logo-3.png" loop=infinite style="max-width: 100%; height: auto;" />
   </a>
</div>
<br>

- [BLOG](https://vxlang.github.io/)
- [How to Use VxLang: Exploring Through Test Programs](https://www.patreon.com/posts/92188141)

---

## What is VxLang?

**VxLang** is a project designed to prevent reverse-engineering behaviors such as static or dynamic analysis, file tampering, and unauthorized access to memory by attackers. 

The VxLang project currently targets x86-64 system and .NET binaries, native binary files for the Microsoft Windows operating system, including executables with the ".exe" extension, dynamic link library files with the ".dll" extension, and kernel driver files with the ".sys" extension. (The types of target binaries supported by vxlang will be expanded in future updates).

- Added beta code for the `ELF` file format.
  - The beta version only supports general `code-flattening`.
  - Beta features require users to specify target code.
  - VxLang recommends using the `-fno-pic` option in ELF 32bit binary builds.

## Supported File Formats

<table>
  <tr> 
    <td align="center" colspan="2"><b> Windows EXE/DLL </b></td>
    <td align="center" colspan="2"><b> Windows Kernel Drive </b></td>
  </tr>
   <tr> 
    <td align="center"> Obfuscator </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
    <!-- KERNEL -->
    <td align="center"> Obfuscator </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
  <tr> 
    <td align="center"> Virtualizer </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
    <!-- KERNEL -->
    <td align="center"> Virtualizer </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
  </tr>
  <tr> 
    <td align="center"> Protector </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
    <!-- KERNEL -->
    <td align="center"> Protector </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
  </tr>
</table>

<table>
  <tr> 
    <td align="center" colspan="2"><b> Windows UEFI Modules </b></td>
    <td align="center" colspan="2"><b> Windows .NET </b></td>
  </tr>
   <tr> 
    <!-- KERNEL -->
    <td align="center"> Obfuscator </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
    <!-- .NET -->
    <td align="center"> Obfuscator </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>
   </tr> 
  <tr> 
    <!-- KERNEL -->
    <td align="center"> Virtualizer </td>
    <td align="center"><img src="https://img.shields.io/badge/Supported-brightgreen.svg"></td>
    <!-- .NET -->
    <td align="center"> Virtualizer </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>     
  </tr>
  <tr> 
    <!-- KERNEL -->
    <td align="center"> Protector </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
    <!-- .NET -->
    <td align="center"> Protector </td>
    <td align="center"><img src="https://img.shields.io/badge/Working-yellow.svg"></td>          
  </tr>
</table>

<table>
  <tr> 
    <td align="center" colspan="2"><b> Linux ELF </b></td>
  </tr>
   <tr> 
    <td align="center"> Obfuscator </td>
    <td align="center"><img src="https://img.shields.io/badge/BETA-brightgreen.svg"></td>
   </tr> 
  <tr> 
    <td align="center"> Virtualizer </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
  </tr>
  <tr> 
    <td align="center"> Protector </td>
    <td align="center"><img src="https://img.shields.io/badge/Scheduled-red.svg"></td>	
  </tr>
</table>

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
   <img src="https://vxlang.github.io/image/cfg_1.png" style="max-width: 50%; height: auto;" /> 
</div>

## Precautions

- [Docs](https://vxlang.github.io/documentation-1.html#precautions)
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
  - **You can use the demo version to see if it's applicable to your program before you commit to the donation and full versions.**
- [Patreon](https://www.patreon.com/vxlang)
  - [About Patreon subscriptions](https://www.patreon.com/posts/about-patreon-116564758)

## Usage & Guide-Code
- [Documentation](https://vxlang.github.io/documentation.html)
  - 01: Developing extension modules
  - 02: Functional Unit Obfuscation with Map Files
  - 03: DLL loading checks
  - 04: Rust samples
  - 05: Review behavior speed
  - 06: [Process Anti-Dumping Test](https://github.com/vxlang/vxlang-page/tree/main/src/06)

## Latest Version & Update(News)

- [Download](https://vxlang.github.io/download.html)
  - Demo: ver.1.8.3.1
  - Full: Latest version
- [Update & News](https://vxlang.github.io/news/news.html)

## TODO
- `Task`
  - Add Windows Static-Librarys.
  - Add code obfuscation methods for x86-64.
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
- [Swed]()

  
  
  
