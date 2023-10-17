.globl sh
.section .text

sh:
    addi s2, ra, 0
    la  x1, tdat;
    li  x2, 0xffffffaa;
    li  x3, 0x00000000;
    li  x4, 0xffffefa0;
    li  x5, 0x0000000a;
    li  x6, 0x12345678;
    li  x7, 0x00000000;
    li  x8, 0xffffefa0;
    li  x9, 0x00003098;
    li  x10, 0xffffffaa;
    li  x11, 0xffffffff;
    sh  x2, 0(x1);
    sh  x3, 2(x1);
    sh  x4, 4(x1);
    sh  x5, 6(x1);
    sh  x6, 8(x1);
    sh  x7, 10(x1);
    sh  x8, 12(x1);
    sh  x9, 14(x1);
    sh  x10, 16(x1);
    sh  x11, 18(x1);
    sh  x2, 0(x1);
    sh  x5, 2(x1);
    sh  x8, 4(x1);
    sh  x10, 6(x1);
    sh  x16, 8(x1);
    sh  x26, 10(x1);
    sh  x9, 12(x1);
    sh  x13, 14(x1);
    sh  x23, 16(x1);
    sh  x9, 18(x1);
    mv ra, s2 
    ret
.section  .data
tdat:
tdat1:  .half 0x0000beef;
tdat2:  .half 0x0000beef;
tdat3:  .half 0x0000beef;
tdat4:  .half 0x0000beef;
tdat5:  .half 0x0000beef;
tdat6:  .half 0x0000beef;
tdat7:  .half 0x0000beef;
tdat8:  .half 0x0000beef;
tdat9:  .half 0x0000beef;
tdat10:  .half 0x0000beef;
