# VxLang

<div align="center">
   <a href="https://vxlang.github.io/">
      <img src="https://vxlang.github.io/image/vxlang_logo.gif" loop=infinite style="max-width: 100%; height: auto;" />
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

## Usage

- [Guideline](https://www.patreon.com/posts/vxlang-93493825)
- [Task List](https://www.patreon.com/posts/105860209)

## Latest Version

- [Download](https://vxlang.github.io/download.html)
  - Demo: ver.1.6.2.0
  - Full: Latest version
 
1.x.x
---
- `1.6.2.0`
  - Added dummy code patterns.
  - Fixed small bug. 
- `1.6.1.0`
  - Improved memory protection.
  - Added dummy code patterns.
  - Handled options for some anti-tamper features.
    - The default value is Enabled.
- `1.6.0.1`
  - A bug related to the `vxlang-link-event` has been fixed.
- `1.6.0.0`
  - As of version 1.6.0.0, JSON files can be recognized without the `--opt-project` option.
    - e.g. vxlang.exe test.json
  - A bug related to the `vxlang-link-event` has been fixed.
  - Additional updates will include new code obfuscation patterns.  
- `1.5.9.2`
  - Fixed to be available in the month the binary was built.
- `1.5.9.1`
  - Fixed map file parsing bug.
  - Added UEFI application type.
- `1.5.9.0`
  - Fixed map file parsing bug.
  - Fixed function calculation bug.
    - [sample](https://github.com/vxlang/vxlang-page/blob/main/src/02/map/sample.cpp#L2)
  - Fixed number of obfuscation nodes.
- `1.5.8.2`
  - Fixed Bug: Function range calculation(MAP/PDB)
    - [sample](https://github.com/vxlang/vxlang-page/blob/main/src/02/map/sample.cpp#L2)
- `1.5.8.1`
  - Fixed Minor Bug: Log Output.
  - Enabled Reflection Loading in Demo Version.
- `1.5.8.0`
  - Fixed bug Memory protector.
    - Bug fixed where memory in `No-Access` protect was exposed.
  - Module `reflection` loading feature added(beta).
    - The copied image is loaded, and you can determine the LDR link status.
    - This feature can provide some protection from memory dumper.
  - If run without arguments, a temporary JSON project will be created.
- `1.5.7.0`
  - Fixed relocation-related bug for code virtualization.
  - Added an option to prevent VxLang from creating an obfuscation code section.
    - `use-data-section`
- `1.5.6.0`
  - [Obfuscator][Virtualizer]: EFI boot driver support (Test version).
    - No separate SDK yet, functions are designated through MAP or PDB files.
  - Fixed bugs in 64-bit virtualization.
- `1.5.5.0`
  - Fixed the bug causing Import Table obfuscation to be turned off:
    - Fixed a bug where the `mutate-import-table` option, if not defined, would force obfuscation to be disabled.
    - if the `mutate-import-table` option is not defined, obfuscation will be forcibly enabled.
- `1.5.4.0`
  - Context has been added to the link event of the extension module.
    - [example](https://github.com/vxlang/vxlang-page/blob/main/src/01/exts/exts.cpp#L14)
- `1.5.3.0`
  - Fixed intermittent crashes that occurred during the obfuscation process.
- `1.5.2.0`
- VxLang Link-Event updates:
  - SDK END-Event has been added.
  - Extension modules can now be integrated with the following SDK calls.
    - VL_OBFUSCATION_BEGIN / VL_OBFUSCATION_END
    - VL_CODE_FLATTENING_BEGIN / VL_CODE_FLATTENING_END
    - VL_VIRTUALIZATION_BEGIN / VL_VIRTUALIZATION_END
  - Fixed critical-bug related to 32-bit binaries.
  - VxLang Core-Shell code has been optimized to be lighter.
- `1.5.1.0`
  - VxLang interrupt-events have been removed.
  - VxLang Link-events have been added.
    - SDK Begin event has been added.
    - SDK End event will be added soon. 
- `1.5.0.1`
  - Fixed MAP/PDB-related function size calculation.
- `1.5.0.0`
  - Fixed Critical Bugs.
    - Fixed a bug related to memory protection.
    - Fixed a bug related to DLL protection.
    - Fixed a bug where the ImageBase was incorrectly set.
- `1.4.9.0`
  - Install interrupts at VxLang entry-points.
    - The `interrupt-vxlang-entry` flag needs to be set.
    - If `add-on` are present, they can receive event.
      - #define VXLANG_INTERRUPT_VL_ENTRY    0xA0000005  

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
- [Swed]()

  
  
  
