.globl lhu
.section .text

lhu:
    addi s2, ra, 0
    la  x1, tdat;
    lhu  x2, 0(x1);
    lhu  x3, 2(x1);
    lhu  x4, 4(x1);
    lhu  x5, 6(x1);
    lhu  x6, 8(x1);
    lhu  x7, 10(x1);
    lhu  x8, 12(x1);
    lhu  x9, 14(x1);
    lhu  x10, 16(x1);
    lhu  x11, 18(x1);
    lhu  x14, 0(x1);
    lhu  x22, 2(x1);
    lhu  x31, 4(x1);
    lhu  x26, 6(x1);
    lhu  x25, 8(x1);
    lhu  x13, 10(x1);
    lhu  x20, 12(x1);
    lhu  x26, 14(x1);
    lhu  x4, 16(x1);
    lhu  x26, 18(x1);
    mv ra, s2 
    ret
.section  .data
tdat:
tdat1:  .half 0x0000000f;
tdat2:  .half 0x000000f0;
tdat3:  .half 0x000000ff;
tdat4:  .half 0x00000f00;
tdat5:  .half 0x00000f0f;
tdat6:  .half 0x00000ff0;
tdat7:  .half 0x00000fff;
tdat8:  .half 0x0000f000;
tdat9:  .half 0x0000ff00;
tdat10:  .half 0x0000ffff;
