### How to apply the SDK to UEFI modules

1. Remove extern “C” from the SDK(vxlib.h) because it is a C language file.
2. Link the lib file through your project.

### How to use the sample project

 1. Add the sample project to VisualUefi project.   
    [VisualUefi](https://github.com/ionescu007/VisualUefi)
    [Sample Location](https://github.com/ionescu007/VisualUefi/tree/master/samples)    
 3. Build the sample project.
 4. Protect with VxLang.
    e.g. vxlang.exe UefiTest.efi
 
