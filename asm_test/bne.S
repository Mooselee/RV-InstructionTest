.globl bne
.section .text

bne:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0xffffffff;
    bne  x1, x1, 1f;
1:  bne  x3, x2, 2f;
2:  bne  x1, x2, 3f;
3:  bne  x1, x3, 4f;
4:  bne  x1, x1, 5f;
5:  bne  x3, x1, 6f;
6:  bne  x3, x1, 7f;
7:  bne  x2, x1, 8f;
8:  bne  x3, x2, 9f;
9:  bne  x3, x1, 10f;
10:  bne  x2, x2, 11f;
11:  bne  x2, x1, 12f;
12:  bne  x2, x3, 13f;
13:  bne  x1, x1, 14f;
14:  bne  x3, x3, 15f;
15:  bne  x3, x1, 16f;
16:  bne  x1, x3, 17f;
17:  bne  x2, x1, 18f;
18:  bne  x1, x2, 19f;
19:  bne  x2, x1, 20f;
20:  bne  x3, x1, 21f;
21:
    mv ra, s2 
    ret
