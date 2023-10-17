.globl lw
.section .text

lw:
    addi s2, ra, 0
    la  x1, tdat;
    lw  x2, 0(x1);
    lw  x3, 4(x1);
    lw  x4, 8(x1);
    lw  x5, 12(x1);
    lw  x6, 16(x1);
    lw  x7, 20(x1);
    lw  x8, 24(x1);
    lw  x9, 28(x1);
    lw  x10, 32(x1);
    lw  x11, 36(x1);
    lw  x1, 0(x1);
    lw  x23, 4(x1);
    lw  x31, 8(x1);
    lw  x0, 12(x1);
    lw  x8, 16(x1);
    lw  x16, 20(x1);
    lw  x28, 24(x1);
    lw  x23, 28(x1);
    lw  x30, 32(x1);
    lw  x8, 36(x1);
    mv ra, s2 
    ret
.section  .data
tdat:
tdat1:  .word 0x00ff00ff;
tdat2:  .word 0xff00ff00;
tdat3:  .word 0x0ff00ff0;
tdat4:  .word 0xf00ff00f;
tdat5:  .word 0x00ff00ff;
tdat6:  .word 0xff00ff00;
tdat7:  .word 0x0ff00ff0;
tdat8:  .word 0xf00ff00f;
tdat9:  .word 0xff00ff00;
tdat10:  .word 0xffffffff;
