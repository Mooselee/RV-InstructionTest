.globl andi
.section .text

andi:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0xff00ff00;
    li  x3, 0x0ff00ff0;
    li  x4, 0x00ff00ff;
    li  x5, 0xf00ff00f;
    li  x6, 0x00000000;
    li  x7, 0xffffff0f;
    li  x8, 0x000000f0;
    li  x9, 0x0000070f;
    li  x10, 0xffffffff;
    andi  x11, x2, 0xffffff0f;
    andi  x12, x2, 0x00000000;
    andi  x13, x5, 0x0000070f;
    andi  x14, x1, 0x000000f0;
    andi  x15, x1, 0x000000f0;
    andi  x16, x1, 0xffffffff;
    andi  x17, x3, 0xffffffff;
    andi  x20, x4, 0x00000000;
    andi  x21, x5, 0x00000000;
    andi  x22, x2, 0x00000000;
    andi  x14, x9, 0x000000f0;
    andi  x12, x20, 0x000000f0;
    andi  x26, x29, 0x00000000;
    andi  x20, x16, 0xffffff0f;
    andi  x23, x29, 0xffffff0f;
    andi  x7, x25, 0x000000f0;
    andi  x24, x9, 0xffffff0f;
    andi  x3, x2, 0x00000000;
    andi  x25, x20, 0xffffffff;
    andi  x23, x28, 0xffffffff;
    mv ra, s2 
    ret
