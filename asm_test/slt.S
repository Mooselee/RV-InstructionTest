.globl slt
.section .text

slt:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0x00000007;
    li  x4, 0x80000000;
    li  x5, 0x7fffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000001;
    li  x8, 0x00000007;
    li  x9, 0x80000000;
    li  x10, 0x7fffffff;
    slt  x11, x5, x9;
    slt  x12, x1, x10;
    slt  x13, x1, x8;
    slt  x14, x4, x8;
    slt  x15, x5, x10;
    slt  x16, x3, x6;
    slt  x17, x4, x10;
    slt  x20, x5, x7;
    slt  x21, x1, x7;
    slt  x22, x3, x6;
    slt  x10, x9, x1;
    slt  x0, x16, x17;
    slt  x5, x31, x0;
    slt  x9, x4, x21;
    slt  x26, x16, x27;
    slt  x0, x27, x9;
    slt  x20, x20, x9;
    slt  x22, x27, x5;
    slt  x1, x27, x30;
    slt  x16, x29, x7;
    mv ra, s2 
    ret
