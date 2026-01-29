set "GCC_PATH=C:\msys64\ucrt64\bin"
set "PATH=%GCC_PATH%;%PATH%"

mkdir out

gcc -c vxlib.c -o ./out/vxlib.o
gcc -shared -o ./out/vxlib64.dll ./out/vxlib.o -Wl,--out-implib,./out/libvxlang.a

pause



