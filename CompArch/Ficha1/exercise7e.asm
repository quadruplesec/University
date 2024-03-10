.data
string: .asciz "ABCDEFghijkL"

.text
la s0, string
jal ra, caps_check
li a7, 93
ecall

caps_check:
addi sp, sp, -16
sw ra, 12(sp)
sw s0, 8(sp)
li t1, 65		#ascii code for "A"
li t2, 90		#ascii code for "Z"
li t3, 0		#caps counter
loop:
lb t0, 0(s0)
beqz t0, end
blt t0, t1, no_cap
bgt t0, t2, no_cap
addi t3, t3, 1
no_cap:
addi s0, s0, 1
j loop
end:
lw s0, 8(sp)
lw ra, 12(sp)
addi sp, sp, 16
mv a0, t3
ret