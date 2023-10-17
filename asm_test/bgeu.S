.globl bgeu
.section .text

bgeu:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0xfffffffe;
    li  x3, 0xffffffff;
    bgeu  x1, x1, 1f;
1:  bgeu  x2, x3, 2f;
2:  bgeu  x3, x3, 3f;
3:  bgeu  x2, x2, 4f;
4:  bgeu  x2, x3, 5f;
5:  bgeu  x1, x3, 6f;
6:  bgeu  x1, x1, 7f;
7:  bgeu  x3, x2, 8f;
8:  bgeu  x1, x1, 9f;
9:  bgeu  x3, x1, 10f;
10:  bgeu  x3, x1, 11f;
11:  bgeu  x3, x1, 12f;
12:  bgeu  x2, x3, 13f;
13:  bgeu  x1, x3, 14f;
14:  bgeu  x2, x3, 15f;
15:  bgeu  x3, x2, 16f;
16:  bgeu  x3, x2, 17f;
17:  bgeu  x2, x2, 18f;
18:  bgeu  x3, x3, 19f;
19:  bgeu  x1, x1, 20f;
20:  bgeu  x2, x2, 21f;
21:
    mv ra, s2 
    ret
