.globl slli
.section .text

slli:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0x00007fff;
    li  x4, 0x21212121;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000001;
    li  x8, 0x00000007;
    li  x9, 0x0000000e;
    li  x10, 0x0000001f;
    slli  x11, x2, 0x0000001f;
    slli  x12, x2, 0x0000001f;
    slli  x13, x5, 0x00000007;
    slli  x14, x3, 0x00000007;
    slli  x15, x4, 0x00000000;
    slli  x16, x4, 0x0000001f;
    slli  x17, x2, 0x0000000e;
    slli  x20, x5, 0x0000001f;
    slli  x21, x4, 0x00000007;
    slli  x22, x5, 0x00000001;
    slli  x6, x25, 0x0000001f;
    slli  x5, x13, 0x00000001;
    slli  x25, x0, 0x0000001f;
    slli  x21, x22, 0x0000000e;
    slli  x27, x10, 0x0000001f;
    slli  x21, x22, 0x0000001f;
    slli  x12, x24, 0x00000001;
    slli  x16, x20, 0x0000001f;
    slli  x15, x23, 0x00000000;
    slli  x9, x31, 0x00000000;
    mv ra, s2 
    ret
