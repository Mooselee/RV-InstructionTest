.globl add
.section .text

add:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000007;
    li  x3, 0x00007fff;
    li  x4, 0x80000000;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000007;
    li  x8, 0x00007fff;
    li  x9, 0x80000000;
    li  x10, 0xffffffff;
    add  x11, x5, x9;
    add  x12, x1, x10;
    add  x13, x1, x8;
    add  x14, x4, x8;
    add  x15, x5, x10;
    add  x16, x3, x6;
    add  x17, x4, x10;
    add  x20, x5, x7;
    add  x21, x1, x7;
    add  x22, x3, x6;
    add  x10, x9, x1;
    add  x0, x16, x17;
    add  x5, x31, x0;
    add  x9, x4, x21;
    add  x26, x16, x27;
    add  x0, x27, x9;
    add  x20, x20, x9;
    add  x22, x27, x5;
    add  x1, x27, x30;
    add  x16, x29, x7;m
    mv ra, s2 
    ret
