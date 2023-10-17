.globl bge
.section .text

bge:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0xffffffff;
    bge  x1, x1, 1f;
1:  bge  x1, x3, 2f;
2:  bge  x3, x2, 3f;
3:  bge  x1, x1, 4f;
4:  bge  x2, x1, 5f;
5:  bge  x1, x1, 6f;
6:  bge  x1, x2, 7f;
7:  bge  x3, x3, 8f;
8:  bge  x2, x2, 9f;
9:  bge  x3, x1, 10f;
10:  bge  x1, x2, 11f;
11:  bge  x1, x1, 12f;
12:  bge  x1, x1, 13f;
13:  bge  x3, x3, 14f;
14:  bge  x3, x1, 15f;
15:  bge  x3, x1, 16f;
16:  bge  x1, x1, 17f;
17:  bge  x1, x1, 18f;
18:  bge  x1, x1, 19f;
19:  bge  x1, x2, 20f;
20:  bge  x1, x3, 21f;
21:
    mv ra, s2 
    ret
