.globl xori
.section .text

xori:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00007fff;
    li  x3, 0x80000000;
    li  x4, 0x7fffffff;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000007;
    li  x8, 0xfffff800;
    li  x9, 0x000007ff;
    li  x10, 0xffffffff;
    xori  x11, x2, 0x00000007;
    xori  x12, x5, 0x00000007;
    xori  x13, x1, 0xffffffff;
    xori  x14, x5, 0x00000007;
    xori  x15, x4, 0x000007ff;
    xori  x16, x1, 0x00000000;
    xori  x17, x2, 0x00000000;
    xori  x20, x3, 0x00000000;
    xori  x21, x3, 0x00000007;
    xori  x22, x5, 0xfffff800;
    xori  x8, x15, 0x00000007;
    xori  x16, x2, 0x000007ff;
    xori  x31, x16, 0xfffff800;
    xori  x8, x4, 0x00000000;
    xori  x8, x1, 0x00000007;
    xori  x0, x4, 0x000007ff;
    xori  x13, x28, 0x00000007;
    xori  x22, x27, 0xffffffff;
    xori  x20, x6, 0xffffffff;
    xori  x28, x5, 0x00000000;
    mv ra, s2 
    ret
