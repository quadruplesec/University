#a) f = g - (f + 5)

Var/Regs:
f = x5
g = x6

Pseudoinstructions:
x5 = x5 + 5
x5 = x6 - x5

Assembly:
addi x5, x5, 5
sub x5, x6, x5

#b) f = A[12] + 17
Var/Regs:
f = x5
base address of A = x6

#Since each element of a sequence of integers has 4 bytes, the element
#at index 12 of the array A is stored in memory at the address:
# base address of a + 12 * 4 = 48

Pseudoinstructions:
x5 = 48(x6)
x5 = x5 + 17

Assembly:
lw x5, 48(x6)
addi x5, x5, 17