.globl lh
.section .text

lh:
    addi s2, ra, 0
    la  x1, tdat;
    lh  x2, 0(x1);
    lh  x3, 2(x1);
    lh  x4, 4(x1);
    lh  x5, 6(x1);
    lh  x6, 8(x1);
    lh  x7, 10(x1);
    lh  x8, 12(x1);
    lh  x9, 14(x1);
    lh  x10, 16(x1);
    lh  x11, 18(x1);
    lh  x25, 0(x1);
    lh  x5, 2(x1);
    lh  x1, 4(x1);
    lh  x15, 6(x1);
    lh  x20, 8(x1);
    lh  x12, 10(x1);
    lh  x12, 12(x1);
    lh  x2, 14(x1);
    lh  x14, 16(x1);
    lh  x25, 18(x1);
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
