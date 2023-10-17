.globl jal
.section .text

jal:
    addi s2, ra, 0
    jal  1f;
1:  jal  2f;
2:  jal  3f;
3:  jal  4f;
4:  jal  5f;
5:  jal  6f;
6:  jal  7f;
7:  jal  8f;
8:  jal  9f;
9:  jal  10f;
10:  jal  11f;
11:  jal  12f;
12:  jal  13f;
13:  jal  14f;
14:  jal  15f;
15:  jal  16f;
16:  jal  17f;
17:  jal  18f;
18:  jal  19f;
19:  jal  20f;
20:  jal  21f;
21:
    mv ra, s2 
    ret
