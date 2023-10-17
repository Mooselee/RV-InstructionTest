.globl slti
.section .text

slti:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000007;
    li  x3, 0x80000000;
    li  x4, 0x7fffffff;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000007;
    li  x8, 0x000007ff;
    li  x9, 0xfffff800;
    li  x10, 0xffffffff;
    slti  x11, x5, 0x00000000;
    slti  x12, x3, 0x000007ff;
    slti  x13, x5, 0xffffffff;
    slti  x14, x4, 0xfffff800;
    slti  x15, x3, 0x00000007;
    slti  x16, x3, 0x00000000;
    slti  x17, x5, 0xfffff800;
    slti  x20, x5, 0x000007ff;
    slti  x21, x1, 0xffffffff;
    slti  x22, x4, 0x00000000;
    slti  x16, x30, 0xffffffff;
    slti  x30, x12, 0xfffff800;
    slti  x22, x17, 0xfffff800;
    slti  x17, x8, 0xfffff800;
    slti  x7, x21, 0xfffff800;
    slti  x15, x11, 0xffffffff;
    slti  x14, x2, 0x00000007;
    slti  x30, x9, 0x00000007;
    slti  x31, x17, 0x000007ff;
    slti  x28, x15, 0xffffffff;
    mv ra, s2 
    ret
