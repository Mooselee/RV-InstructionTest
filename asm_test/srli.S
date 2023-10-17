.globl srli
.section .text

srli:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x0000ffff;
    li  x3, 0x21212121;
    li  x4, 0xffff8000;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000001;
    li  x8, 0x00000007;
    li  x9, 0x0000000e;
    li  x10, 0x0000001f;
    srli  x11, x2, 0x00000000;
    srli  x12, x1, 0x00000007;
    srli  x13, x1, 0x0000001f;
    srli  x14, x3, 0x00000001;
    srli  x15, x4, 0x0000001f;
    srli  x16, x1, 0x00000007;
    srli  x17, x1, 0x00000000;
    srli  x20, x3, 0x00000001;
    srli  x21, x1, 0x0000001f;
    srli  x22, x4, 0x00000000;
    srli  x29, x15, 0x0000001f;
    srli  x21, x30, 0x00000007;
    srli  x12, x2, 0x00000001;
    srli  x12, x4, 0x0000000e;
    srli  x11, x20, 0x00000001;
    srli  x3, x4, 0x00000007;
    srli  x16, x10, 0x0000001f;
    srli  x25, x26, 0x00000001;
    srli  x22, x1, 0x00000007;
    srli  x0, x0, 0x00000007;
    mv ra, s2 
    ret
