.globl lbu
.section .text

lbu:
    addi s2, ra, 0
    la  x1, tdat;
    lbu  x2, 0(x1);
    lbu  x3, 1(x1);
    lbu  x4, 2(x1);
    lbu  x5, 3(x1);
    lbu  x6, 4(x1);
    lbu  x7, 5(x1);
    lbu  x8, 6(x1);
    lbu  x9, 7(x1);
    lbu  x10, 8(x1);
    lbu  x11, 9(x1);
    lbu  x5, 0(x1);
    lbu  x28, 1(x1);
    lbu  x31, 2(x1);
    lbu  x4, 3(x1);
    lbu  x10, 4(x1);
    lbu  x6, 5(x1);
    lbu  x5, 6(x1);
    lbu  x29, 7(x1);
    lbu  x30, 8(x1);
    lbu  x2, 9(x1);
    mv ra, s2 
    ret
.section  .data
tdat:
tdat1:  .byte 0x000000ff;
tdat2:  .byte 0x00000000;
tdat3:  .byte 0x000000f0;
tdat4:  .byte 0x0000000f;
tdat5:  .byte 0x000000ff;
tdat6:  .byte 0x00000000;
tdat7:  .byte 0x000000f0;
tdat8:  .byte 0x0000000f;
tdat9:  .byte 0x000000f0;
tdat10:  .byte 0x0000000f;
