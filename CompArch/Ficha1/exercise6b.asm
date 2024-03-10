.data
words: .word 127, 0

.text
la t0, words
lw s0, 0(t0)
lw s1, 4(t0)
jal ra, check_identical
li a7, 93
ecall

check_identical:
addi sp, sp, -16
sw ra, 12(sp)
sw s0, 8(sp)
sw s1, 4(sp)
and t1, s0, s1
add a2, zero, t1
jal ra, check_1s
lw s1, 4(sp)
lw s0, 8(sp)
lw ra, 12(sp)
addi sp, sp, 16
ret

check_1s:
addi sp, sp, -16
sw a2, 12(sp)
sw ra, 8(sp)
li t2, 0		#register where number of 1s in the word is stored
loop:
beqz a2, end
andi a3, a2, 1
beqz a3, no_one
addi t2, t2, 1
no_one:
srli a2, a2, 1
j loop
end:
mv a0, t2
lw ra, 8(sp)
lw a2, 12(sp)
addi sp, sp, 16
ret