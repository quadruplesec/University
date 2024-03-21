.data
test_word: .word 26 #00000000000000000000000000011010 in binary. Output should be: 4 (counting from 0 to 31 from LSB)

.text
		la s0, test_word
		lw s0, 0(s0)
		li t1, 0
		jal foo
		li a7, 93
		ecall
		
foo:		addi sp, sp, -16
		sw ra, 12(sp)
		sw s0, 8(sp)	
main_loop:	srli s0, s0, 1
		beqz s0, end_loop
		addi, t1, t1, 1
		j main_loop
end_loop:	mv a0, t1
		lw ra, 12(sp)
		lw s0, 8(sp)
		addi sp, sp, 16
		ret	