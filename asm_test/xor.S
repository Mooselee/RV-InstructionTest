.globl xor
.section .text

xor:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0xff00ff00;
    li  x3, 0x0ff00ff0;
    li  x4, 0x00ff00ff;
    li  x5, 0xf00ff00f;
    li  x6, 0x00000000;
    li  x7, 0xff00ff00;
    li  x8, 0x0ff00ff0;
    li  x9, 0x00ff00ff;
    li  x10, 0xf00ff00f;
    xor  x11, x5, x9;
    xor  x12, x1, x10;
    xor  x13, x1, x8;
    xor  x14, x4, x8;
    xor  x15, x5, x10;
    xor  x16, x3, x6;
    xor  x17, x4, x10;
    xor  x20, x5, x7;
    xor  x21, x1, x7;
    xor  x22, x3, x6;
    xor  x10, x9, x1;
    xor  x0, x16, x17;
    xor  x5, x31, x0;
    xor  x9, x4, x21;
    xor  x26, x16, x27;
    xor  x0, x27, x9;
    xor  x20, x20, x9;
    xor  x22, x27, x5;
    xor  x1, x27, x30;
    xor  x16, x29, x7;
    mv ra, s2 
    ret
