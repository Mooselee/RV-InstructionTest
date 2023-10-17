.globl addi
.section .text

addi:
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
    addi  x11, x3, 0x000007ff;
    addi  x12, x1, 0xffffffff;
    addi  x13, x1, 0x00000007;
    addi  x14, x5, 0xffffffff;
    addi  x15, x5, 0x00000007;
    addi  x16, x2, 0x00000000;
    addi  x17, x2, 0xffffffff;
    addi  x20, x3, 0xfffff800;
    addi  x21, x5, 0xffffffff;
    addi  x22, x1, 0x00000007;
    addi  x5, x22, 0x000007ff;
    addi  x24, x23, 0x00000007;
    addi  x10, x21, 0xffffffff;
    addi  x7, x28, 0x00000007;
    addi  x4, x20, 0x000007ff;
    addi  x6, x10, 0xffffffff;
    addi  x8, x10, 0x00000000;
    addi  x0, x4, 0xfffff800;
    addi  x30, x14, 0xfffff800;
    addi  x13, x9, 0x000007ff;
    mv ra, s2 
    ret
