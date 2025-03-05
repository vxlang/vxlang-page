extern "C" {
    fn VxObfuscationBegin();
    fn VxObfuscationEnd();	

    fn VxCodeFlatteningBegin();
    fn VxCodeFlatteningEnd();	

    fn VxVirtualizationBegin();
    fn VxVirtualizationEnd();		
}

fn test_vm() {
	unsafe { VxVirtualizationBegin(); }
	
    println!("Hello, Rust !");

	unsafe { VxVirtualizationEnd(); }	
}

fn test_obf() {
	unsafe { VxObfuscationBegin(); }
	
    println!("Hello, Rust !");

	unsafe { VxObfuscationEnd(); }	
}

fn test_fla() {
	unsafe { VxCodeFlatteningBegin(); }
	
    println!("Hello, Rust !");

	unsafe { VxCodeFlatteningEnd(); }	
}

fn main() {
	test_vm();
	test_obf();
	test_fla();
}
