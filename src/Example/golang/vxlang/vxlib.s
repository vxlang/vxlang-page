#include "textflag.h"

TEXT ·LinkVxVirtualizationBegin(SB), NOSPLIT, $0
    JMP VxVirtualizationBegin(SB)

TEXT ·LinkVxVirtualizationEnd(SB), NOSPLIT, $0
    JMP VxVirtualizationEnd(SB)
	
TEXT ·LinkVxDualModeBegin(SB), NOSPLIT, $0
    JMP VxDualModeBegin(SB)

TEXT ·LinkVxDualModeEnd(SB), NOSPLIT, $0
    JMP VxDualModeEnd(SB)

TEXT ·LinkVxObfuscationBegin(SB), NOSPLIT, $0
    JMP VxObfuscationBegin(SB)

TEXT ·LinkVxObfuscationEnd(SB), NOSPLIT, $0
    JMP VxObfuscationEnd(SB)

TEXT ·LinkVxCodeFlatteningBegin(SB), NOSPLIT, $0
    JMP VxCodeFlatteningBegin(SB)

TEXT ·LinkVxCodeFlatteningEnd(SB), NOSPLIT, $0
    JMP VxCodeFlatteningEnd(SB)

TEXT ·LinkVxLiteObfuscationBegin(SB), NOSPLIT, $0
    JMP VxLiteObfuscationBegin(SB)

TEXT ·LinkVxLiteObfuscationEnd(SB), NOSPLIT, $0
    JMP VxLiteObfuscationEnd(SB)

	