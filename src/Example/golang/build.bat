set "GCC_PATH=C:\msys64\ucrt64\bin"
set "PATH=%GCC_PATH%;%PATH%"
set CGO_ENABLED=1

go build -gcflags="all=-N -l" -ldflags="-linkmode external -extldflags '-static -L./vxlang -lvxlang'" -o sample.exe .

pause



