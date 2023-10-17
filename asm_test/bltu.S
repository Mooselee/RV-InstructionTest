.globl bltu
.section .text

bltu:
    addi s2, ra, 0
    li  x1, 0x00000000;
    li  x2, 0xfffffffe;
    li  x3, 0xffffffff;
    bltu  x1, x1, 1f;
1:  bltu  x3, x2, 2f;
2:  bltu  x1, x3, 3f;
3:  bltu  x2, x3, 4f;
4:  bltu  x2, x2, 5f;
5:  bltu  x1, x3, 6f;
6:  bltu  x1, x2, 7f;
7:  bltu  x1, x1, 8f;
8:  bltu  x3, x1, 9f;
9:  bltu  x1, x2, 10f;
10:  bltu  x2, x1, 11f;
11:  bltu  x3, x3, 12f;
12:  bltu  x2, x1, 13f;
13:  bltu  x1, x3, 14f;
14:  bltu  x1, x2, 15f;
15:  bltu  x2, x1, 16f;
16:  bltu  x1, x1, 17f;
17:  bltu  x1, x2, 18f;
18:  bltu  x2, x2, 19f;
19:  bltu  x2, x3, 20f;
20:  bltu  x3, x1, 21f;
21:
    mv ra, s2 
    ret
