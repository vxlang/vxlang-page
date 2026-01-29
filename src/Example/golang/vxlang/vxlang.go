package vxlang

import _ "unsafe"

//go:linkname VirtualizationBegin vxlang-sample/vxlang.LinkVxVirtualizationBegin
func VirtualizationBegin()

//go:linkname VirtualizationEnd vxlang-sample/vxlang.LinkVxVirtualizationEnd
func VirtualizationEnd()

//go:linkname DualModeBegin vxlang-sample/vxlang.LinkVxDualModeBegin
func DualModeBegin()

//go:linkname DualModeEnd vxlang-sample/vxlang.LinkVxDualModeEnd
func DualModeEnd()

//go:linkname ObfuscationBegin vxlang-sample/vxlang.LinkVxObfuscationBegin
func ObfuscationBegin()

//go:linkname ObfuscationEnd vxlang-sample/vxlang.LinkVxObfuscationEnd
func ObfuscationEnd()

//go:linkname CodeFlatteningBegin vxlang-sample/vxlang.LinkVxCodeFlatteningBegin
func CodeFlatteningBegin()

//go:linkname CodeFlatteningEnd vxlang-sample/vxlang.LinkVxCodeFlatteningEnd
func CodeFlatteningEnd()

//go:linkname LiteObfuscationBegin vxlang-sample/vxlang.LinkVxLiteObfuscationBegin
func LiteObfuscationBegin()

//go:linkname LiteObfuscationEnd vxlang-sample/vxlang.LinkVxLiteObfuscationEnd
func LiteObfuscationEnd()

