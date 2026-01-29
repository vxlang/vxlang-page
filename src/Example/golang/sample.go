package main

import "vxlang-sample/vxlang"

func virtualization() {
    vxlang.VirtualizationBegin()
	
    println("This is Virtualization!")
	
    vxlang.VirtualizationEnd()	

    println("Done")
}

func virtualization_2() {
    vxlang.VirtualizationBegin()
	
    println("This is Virtualization2 !")
	
    vxlang.VirtualizationEnd()	

    println("Done")
}

func dual_mode() {
    vxlang.DualModeBegin()
	
    println("This is Dual-Mode!")
	
    vxlang.DualModeEnd()	

    println("Done")
}

func obfuscation() {
    vxlang.ObfuscationBegin()
	
    println("This is Obfuscation!")
	
    vxlang.ObfuscationEnd()		
	
    println("Done")	
}

func code_flattening() {
    vxlang.CodeFlatteningBegin()
	
    println("This is CodeFlattening!")
	
    vxlang.CodeFlatteningEnd()		
	
    println("Done")	
}

func main() {
	virtualization()
	virtualization_2()
	dual_mode()
	obfuscation()
	code_flattening()
}

