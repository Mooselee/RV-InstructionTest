.globl srl
.section .text

srl:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0x21212121;
    li  x4, 0xffff8000;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000001;
    li  x8, 0x21212121;
    li  x9, 0xffff8000;
    li  x10, 0xffffffff;
    srl  x11, x5, x9;
    srl  x12, x1, x10;
    srl  x13, x1, x8;
    srl  x14, x4, x8;
    srl  x15, x5, x10;
    srl  x16, x3, x6;
    srl  x17, x4, x10;
    srl  x20, x5, x7;
    srl  x21, x1, x7;
    srl  x22, x3, x6;
    srl  x10, x9, x1;
    srl  x0, x16, x17;
    srl  x5, x31, x0;
    srl  x9, x4, x21;
    srl  x26, x16, x27;
    srl  x0, x27, x9;
    srl  x20, x20, x9;
    srl  x22, x27, x5;
    srl  x1, x27, x30;
    srl  x16, x29, x7;
    mv ra, s2 
    ret
