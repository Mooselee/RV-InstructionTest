.globl sub
.section .text

sub:
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
    sub  x11, x5, x9;
    sub  x12, x1, x10;
    sub  x13, x1, x8;
    sub  x14, x4, x8;
    sub  x15, x5, x10;
    sub  x16, x3, x6;
    sub  x17, x4, x10;
    sub  x20, x5, x7;
    sub  x21, x1, x7;
    sub  x22, x3, x6;
    sub  x10, x9, x1;
    sub  x0, x16, x17;
    sub  x5, x31, x0;
    sub  x9, x4, x21;
    sub  x26, x16, x27;
    sub  x0, x27, x9;
    sub  x20, x20, x9;
    sub  x22, x27, x5;
    sub  x1, x27, x30;
    sub  x16, x29, x7;
    mv ra, s2 
    ret
