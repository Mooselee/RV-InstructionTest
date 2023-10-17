.globl and
.section .text

and:
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
    and  x11, x5, x9;
    and  x12, x1, x10;
    and  x13, x1, x8;
    and  x14, x4, x8;
    and  x15, x5, x10;
    and  x16, x3, x6;
    and  x17, x4, x10;
    and  x20, x5, x7;
    and  x21, x1, x7;
    and  x22, x3, x6;
    and  x10, x9, x1;
    and  x0, x16, x17;
    and  x5, x31, x0;
    and  x9, x4, x21;
    and  x26, x16, x27;
    and  x0, x27, x9;
    and  x20, x20, x9;
    and  x22, x27, x5;
    and  x1, x27, x30;
    and  x16, x29, x7;
    mv ra, s2 
    ret
