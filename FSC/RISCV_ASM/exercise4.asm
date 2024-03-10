L1:     sw   x28, 0(x29)
        slli x28, x28, 4
        addi x29, x29, 4
        bne  x28, x0,  L1

x28 = 0x12345678
x29 = 0x000007D0

Cycle 1:
0x12345678 gets saved to 0x000007D0
slli x28, x28, 4 -> x28 = 0x23456780
addi x29, x29, 4 -> x29 = 0x000007D4
bne x28, x0, L1 -> x28 != 0 is true, so L1

Cycle 2:
0x23456780 gets saved to 0x000007D4
slli x28, x28, 4 -> x28 = 0x34567800
addi x29, x29, 4 -> x29 = 0x000007D8
bne x28, x0, L1 -> x28 != 0 is true, so L1

Cycle 3:
0x34567800 gets saved to 0x000007D8
slli x28, x28, 4 -> x28 = 0x45678000
addi x29, x29, 4 -> x29 = 0x000007DC
bne x28, x0, L1 -> x28 != 0 is true, so L1

Cycle 4:
0x45678000 gets saved to 0x000007DC
slli x28, x28, 4 -> x28 = 0x56780000
addi x29, x29, 4 -> x29 = 0x000007F8
bne x28, x0, L1 -> x28 != 0 is true, so L1

....
(this would repeat until x28 became 0x00000000)





