.data
string: .asciz "717297873 aaaeeeiiioooUUU 177166ZZZZ" #expected result, 15
vowels:	.ascii  "aeiouAEIOU" #string of length 10+1

.text
la s0, string		#s0 stores the string
la s1, vowels		#s1 stores the string of vowels
jal ra, find_vowels
li a7, 93
ecall


find_vowels:
addi sp, sp, -16	#stack pushing
sw ra, 12(sp)
sw s1, 8(sp)
sw s0, 4(sp)
li t3, 0		#register to store # of occurences of vowels

loop:
lb t1, 0(s0)
beqz t1, end		#if t1 = \0, terminate loop.

vowel_loop:
lb t2, 0(s1)		#store a vowel to t2
beqz t2, vowel_reset	#if t2 = \0, reset vowels.
bne t1, t2, no_vowel	
addi t3, t3, 1		#t3 stores vowel count

no_vowel:
addi s1, s1, 1		#moves to the next vowel
j vowel_loop

vowel_reset:
addi s0, s0, 1
la s1, vowels		#restores vowel array back to the first element
j loop

end:
mv a0, t3		#moving result to a0
lw s0, 4(sp)		#stack popping
lw s1, 8(sp)
lw ra, 12(sp)
addi sp, sp, 16
ret

	
