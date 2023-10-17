.globl blt
.section .text

blt:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0xffffffff;
    blt  x1, x1, 1f;
1:  blt  x1, x3, 2f;
2:  blt  x2, x3, 3f;
3:  blt  x1, x2, 4f;
4:  blt  x1, x1, 5f;
5:  blt  x1, x2, 6f;
6:  blt  x2, x2, 7f;
7:  blt  x2, x1, 8f;
8:  blt  x1, x2, 9f;
9:  blt  x1, x1, 10f;
10:  blt  x3, x3, 11f;
11:  blt  x1, x3, 12f;
12:  blt  x2, x1, 13f;
13:  blt  x2, x3, 14f;
14:  blt  x3, x3, 15f;
15:  blt  x3, x3, 16f;
16:  blt  x1, x1, 17f;
17:  blt  x2, x2, 18f;
18:  blt  x3, x3, 19f;
19:  blt  x1, x3, 20f;
20:  blt  x1, x1, 21f;
21:
    mv ra, s2 
    ret
