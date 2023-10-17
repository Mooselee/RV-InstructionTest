.globl beq
.section .text

beq:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0x00000001;
    li  x3, 0xffffffff;
    beq  x1, x1, 1f;
1:  beq  x1, x3, 2f;
2:  beq  x2, x2, 3f;
3:  beq  x3, x2, 4f;
4:  beq  x1, x1, 5f;
5:  beq  x2, x1, 6f;
6:  beq  x3, x3, 7f;
7:  beq  x2, x2, 8f;
8:  beq  x3, x2, 9f;
9:  beq  x1, x3, 10f;
10:  beq  x1, x2, 11f;
11:  beq  x2, x1, 12f;
12:  beq  x2, x2, 13f;
13:  beq  x3, x2, 14f;
14:  beq  x1, x1, 15f;
15:  beq  x2, x1, 16f;
16:  beq  x2, x1, 17f;
17:  beq  x1, x3, 18f;
18:  beq  x2, x1, 19f;
19:  beq  x3, x3, 20f;
20:  beq  x1, x1, 21f;
21:
    mv ra, s2 
    ret
