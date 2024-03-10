A) f = g + (j + 2)

Variables / Registers
f = x5
g = x6
j = x7

Pseudoinstructions:
x5 = x7 + 2
x5 = x6 + x5

Assembly:
addi, x5, x7, 2
add,  x5, x5, x6


B) k = a + b - f + d - 30

Variables / Registers
k = x5
a = x6
b = x7
f = x28
d = x29

Pseudoinstructions:
x5 = x6 + x7
x5 = x5 - x28
x5 = x5 + x29
x5 = x5 - 30

Assembly:
add   x5, x6, x7
sub   x5, x5, x28
add   x5, x5, x29
addi, x5, x5, -30


C) f = g + h + A[4]

Variables / Registers
f = x5
g = x6
h = x7
base address of A = x28

Pseudoinstructions:
x5 = Mem4[16(x28)]
x5 = x5 + x6
x5 = x5 + x7

Assembly:
lw x5, 16(x28)
add x5, x5, x6
add x5, x5, x7


D) f = g - A[B[10]]

Variables / Registers
f = x5
g = x6
A = x7 (base address of A)
B = x28 (base address of B)

Pseudoinstructions:
x29 = Mem4[40(x28)]
x29 = x29 * 4 (ssli)
x29 = x7 + x29
x29 = Mem4[0(x29)]
x5 = x6 - x29

Assembly:
lw x29, 40(x28)
slli x29, 2
add x29, x7, x29
lw x29, 0(x29)
sub x5, x6, x29


E) f = k - g + A[h + 9]

Variables / Registers
f = x5
k = x6
g = x7
A = x28 (base address of A)
h = x29

Pseudoinstructions:
x29 = x29 + 9
x29 = x29 * 4
x29 = x28 + x29
x30 = Mem4[0(x29)]
x5 = x6 - x7
x5 = x5 + x29

Assembly:
addi x29, x29, 9
slli x29, x29, 2
add x29, x28, x29
lw x29, 0(x29)
sub x5, x6, x7
add x5, x5, x29


F) f = g - A[B[2] + 4]

Variables / Registers
f = x5 
g = x6
A = x28
B = x29

Pseudoinstructions:
x29 = Mem4[4(x29)]
x29 = x29 + 4
x29 = x29 * 4
x29 = x28 + x29
x29 = Mem4[0(x29)]
x5 = x6 - x29

Assembly:
lw x29, 4(x29)
addi x29, x29, 4
slli x29, x29, 2
add x29, x28, x29
lw x29, 0(x29)
sub x5, x6, x29

