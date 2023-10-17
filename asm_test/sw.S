.globl sw
.section .text

sw:
    addi s2, ra, 0
    la  x1, tdat;
    li  x2, 0xffffffaa;
    li  x3, 0x00000000;
    li  x4, 0xffffefa0;
    li  x5, 0x0000000a;
    li  x6, 0x12345678;
    li  x7, 0xa00aa00a;
    li  x8, 0x0aa00aa0;
    li  x9, 0x00003098;
    li  x10, 0xaa00aa00;
    li  x11, 0xffffffff;
    sw  x2, 0(x1);
    sw  x3, 4(x1);
    sw  x4, 8(x1);
    sw  x5, 12(x1);
    sw  x6, 16(x1);
    sw  x7, 20(x1);
    sw  x8, 24(x1);
    sw  x9, 28(x1);
    sw  x10, 32(x1);
    sw  x11, 36(x1);
    sw  x12, 0(x1);
    sw  x17, 4(x1);
    sw  x2, 8(x1);
    sw  x25, 12(x1);
    sw  x5, 16(x1);
    sw  x28, 20(x1);
    sw  x29, 24(x1);
    sw  x24, 28(x1);
    sw  x22, 32(x1);
    sw  x9, 36(x1);
    mv ra, s2 
    ret
.section  .data
tdat:
tdat1:  .word 0xdeadbeef;
tdat2:  .word 0xdeadbeef;
tdat3:  .word 0xdeadbeef;
tdat4:  .word 0xdeadbeef;
tdat5:  .word 0xdeadbeef;
tdat6:  .word 0xdeadbeef;
tdat7:  .word 0xdeadbeef;
tdat8:  .word 0xdeadbeef;
tdat9:  .word 0xdeadbeef;
tdat10:  .word 0xdeadbeef;
