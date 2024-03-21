.data
byte_vector: .byte 12, -2, 4, 8, 10, 12
word_vector: .word 0, 0, 0, 0, 0, 0
vector_len: .word 6 

.text
		la s0, byte_vector
		la s1, word_vector
		la t0, vector_len
		lw t0, 0(t0)
		addi sp, sp, -16
		sw ra, 12(sp)
		sw s0, 8(sp)
		sw s1, 4(sp)
		jal byte_move
		li a7, 93
		ecall

byte_move:	beqz t0, end
		lbu t1, 0(s0)
		add t1, t1, zero
		sw t1, 0(s1)
		addi, s0, s0, 1
		addi s1, s1, 4
		addi t0, t0, -1		
		j byte_move
end:		mv a0, s0
		ret


