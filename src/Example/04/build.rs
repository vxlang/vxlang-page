// build.rs
fn main() {
    // Rust에게 add 라이브러리를 링크하도록 지시합니다.
    println!("cargo:rustc-link-lib=dylib=vxlib64");
    
    // .lib 파일이 있는 디렉토리를 지정합니다.
    // `add.lib` 파일의 경로를 입력해 주세요.
    println!("cargo:rustc-link-search=native=./lib");
}
