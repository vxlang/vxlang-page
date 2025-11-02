use std::ffi::CStr;
use std::os::raw::{c_uint, c_void, c_char};

const VXLANG_LINK_EVENT_STR_A: c_uint = 0xA0000009;
const VXLANG_LINK_EVENT_STR_W: c_uint = 0xA000000A;
const VXLANG_LINK_EVENT_FREE: c_uint  = 0xA000000B;

#[allow(dead_code)]
extern "C" {
    fn VxObfuscationBegin();
    fn VxObfuscationEnd();	

    fn VxCodeFlatteningBegin();
    fn VxCodeFlatteningEnd();	

    fn VxVirtualizationBegin();
    fn VxVirtualizationEnd();		

    fn VxLinkEvent(
        id: c_uint,
        buffer: *const c_void,
        size_of_buffer: *mut usize,
    ) -> *const c_void;
}

fn test_vm() {
	unsafe {
		VxVirtualizationBegin();
		
        let input = b"Hello, Rust !\0"; // C 문자열
        let str_1 = VxLinkEvent(
            VXLANG_LINK_EVENT_STR_A,
            input.as_ptr() as *const c_void,
            std::ptr::null_mut(),
        );
	    let cstr = std::ffi::CStr::from_ptr(str_1 as *const c_char);
		
        println!("Returned: {}", cstr.to_string_lossy());			
		VxLinkEvent(VXLANG_LINK_EVENT_FREE, str_1, std::ptr::null_mut());		
			
		VxVirtualizationEnd();
	}
}

fn main() {
	//test_obf();
	test_vm();
	//test_obf();
}
