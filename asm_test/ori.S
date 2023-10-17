.globl ori
.section .text

ori:
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
    ori  x11, x5, 0x000000f0;
    ori  x12, x5, 0x00000000;
    ori  x13, x3, 0x0000070f;
    ori  x14, x4, 0xffffff0f;
    ori  x15, x1, 0xffffff0f;
    ori  x16, x5, 0xffffffff;
    ori  x17, x1, 0xffffff0f;
    ori  x20, x3, 0xffffffff;
    ori  x21, x1, 0xffffffff;
    ori  x22, x2, 0x000000f0;
    ori  x11, x30, 0x0000070f;
    ori  x25, x14, 0xffffff0f;
    ori  x14, x0, 0xffffff0f;
    ori  x28, x26, 0x00000000;
    ori  x0, x5, 0x00000000;
    ori  x25, x15, 0x0000070f;
    ori  x2, x17, 0x0000070f;
    ori  x29, x29, 0x00000000;
    ori  x24, x14, 0xffffff0f;
    ori  x0, x26, 0x000000f0;
    mv ra, s2 
    ret
