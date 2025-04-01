VL_VIRTUALIZATION_SIG_BEGIN macro
    nop
    nop
    sti
    nop
    hlt
endm

VL_VIRTUALIZATION_SIG_END macro
    nop
    nop
    cli
    nop
    hlt
endm

