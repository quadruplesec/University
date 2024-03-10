.data
string: .asciz "One Two Three Four Five"
char:	.ascii  " "	

.text
la s0, string		#s0 stores the string
la t0, char
lb s1, 0(t0)		#s1 stores the char to look for in string (space, in this case)
jal ra, find_char
li a7, 93
ecall

find_char:
addi sp, sp, -16	#stack pushing
sw ra, 12(sp)
sw s1, 8(sp)
sw s0, 4(sp)
li t3, 1		#register to store # of words (start with 1 to account for the final word

loop:
lb t1, 0(s0)
beqz t1, end
bne t1, s1, not_equal
addi t3, t3, 1
not_equal:
addi s0, s0, 1
j loop

end:
mv a0, t3
lw s0, 4(sp)		#stack restoring
lw s1, 8(sp)
lw ra, 12(sp)
addi sp, sp, 16
ret
