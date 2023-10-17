.globl lb
.section .text

lb:
    addi s2, ra, 0
    la  x1, tdat;
    lb  x2, 0(x1);
    lb  x3, 1(x1);
    lb  x4, 2(x1);
    lb  x5, 3(x1);
    lb  x6, 4(x1);
    lb  x7, 5(x1);
    lb  x8, 6(x1);
    lb  x9, 7(x1);
    lb  x10, 8(x1);
    lb  x11, 9(x1);
    lb  x12, 0(x1);
    lb  x14, 1(x1);
    lb  x30, 2(x1);
    lb  x10, 3(x1);
    lb  x26, 4(x1);
    lb  x7, 5(x1);
    lb  x0, 6(x1);
    lb  x11, 7(x1);
    lb  x2, 8(x1);
    lb  x12, 9(x1);
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
