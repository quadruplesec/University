.data
num: .word 7

.text
la t0, num
lw s0, 0(t0)		#load word into s0
jal ra, check_1s
li a7, 93
ecall

check_1s:
addi sp, sp, -16
sw s0, 12(sp)
sw ra, 8(sp)
li t2, 0		#register where number of 1s in the word is stored
loop:
beqz s0, end
andi t1, s0, 1
add t2, t2, t1
srli s0, s0, 1
j loop
end:
mv a0, t2
lw ra, 8(sp)
lw s0, 12(sp)
addi sp, sp, 16
ret
