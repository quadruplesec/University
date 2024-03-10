.data
string: .asciz "A tua prima"

.text
la t0, string
lw a0, 0(t0)
li a7, 4
ecall
