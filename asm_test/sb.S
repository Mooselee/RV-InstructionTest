.globl sb
.section .text

sb:
    addi s2, ra, 0
    la  x1, tdat;
    li  x2, 0xffffffaa;
    li  x3, 0x00000000;
    li  x4, 0xffffefa0;
    li  x5, 0x0000000a;
    li  x6, 0xffffffaa;
    li  x7, 0x00000000;
    li  x8, 0xffffefa0;
    li  x9, 0x0000000a;
    li  x10, 0xffffffaa;
    li  x11, 0xffffffff;
    sb  x2, 0(x1);
    sb  x3, 1(x1);
    sb  x4, 2(x1);
    sb  x5, 3(x1);
    sb  x6, 4(x1);
    sb  x7, 5(x1);
    sb  x8, 6(x1);
    sb  x9, 7(x1);
    sb  x10, 8(x1);
    sb  x11, 9(x1);
    sb  x12, 0(x1);
    sb  x3, 1(x1);
    sb  x22, 2(x1);
    sb  x3, 3(x1);
    sb  x1, 4(x1);
    sb  x30, 5(x1);
    sb  x9, 6(x1);
    sb  x30, 7(x1);
    sb  x17, 8(x1);
    sb  x8, 9(x1);
    mv ra, s2 
    ret
.section  .data
tdat:
tdat1:  .byte 0x000000ef;
tdat2:  .byte 0x000000ef;
tdat3:  .byte 0x000000ef;
tdat4:  .byte 0x000000ef;
tdat5:  .byte 0x000000ef;
tdat6:  .byte 0x000000ef;
tdat7:  .byte 0x000000ef;
tdat8:  .byte 0x000000ef;
tdat9:  .byte 0x000000ef;
tdat10:  .byte 0x000000ef;
