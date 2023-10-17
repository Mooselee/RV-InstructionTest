.globl srai
.section .text

srai:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x0000ffff;
    li  x3, 0x80000000;
    li  x4, 0x7fffffff;
    li  x5, 0x81818181;
    li  x6, 0x00000000;
    li  x7, 0x00000001;
    li  x8, 0x00000007;
    li  x9, 0x0000000e;
    li  x10, 0x0000001f;
    srai  x11, x4, 0x00000001;
    srai  x12, x3, 0x00000007;
    srai  x13, x3, 0x0000000e;
    srai  x14, x4, 0x00000007;
    srai  x15, x1, 0x0000000e;
    srai  x16, x4, 0x0000000e;
    srai  x17, x4, 0x0000001f;
    srai  x20, x5, 0x0000000e;
    srai  x21, x2, 0x0000001f;
    srai  x22, x5, 0x0000000e;
    srai  x23, x23, 0x0000001f;
    srai  x30, x26, 0x0000000e;
    srai  x27, x26, 0x00000001;
    srai  x11, x23, 0x0000001f;
    srai  x1, x9, 0x00000001;
    srai  x16, x8, 0x00000000;
    srai  x1, x28, 0x00000007;
    srai  x0, x13, 0x00000001;
    srai  x26, x24, 0x00000007;
    srai  x17, x27, 0x00000001;
    mv ra, s2 
    ret
