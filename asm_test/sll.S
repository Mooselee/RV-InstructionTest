.globl sll
.section .text

sll:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0x00007fff;
    li  x4, 0x21212121;
    li  x5, 0xffffffff;
    li  x6, 0x00000000;
    li  x7, 0x00000001;
    li  x8, 0x00007fff;
    li  x9, 0x21212121;
    li  x10, 0xffffffff;
    sll  x11, x5, x9;
    sll  x12, x1, x10;
    sll  x13, x1, x8;
    sll  x14, x4, x8;
    sll  x15, x5, x10;
    sll  x16, x3, x6;
    sll  x17, x4, x10;
    sll  x20, x5, x7;
    sll  x21, x1, x7;
    sll  x22, x3, x6;
    sll  x10, x9, x1;
    sll  x0, x16, x17;
    sll  x5, x31, x0;
    sll  x9, x4, x21;
    sll  x26, x16, x27;
    sll  x0, x27, x9;
    sll  x20, x20, x9;
    sll  x22, x27, x5;
    sll  x1, x27, x30;
    sll  x16, x29, x7;
    mv ra, s2 
    ret
