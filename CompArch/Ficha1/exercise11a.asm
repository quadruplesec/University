.data
vector_1: .word 1, 56, -23, 11, 5, 9
vector_2: .word 23, 1, 3, 5, 6, 7
result_vector: .word 0, 0, 0, 0, 0, 0
length: .word 6

.text
		la s0, vector_1
		la s1, vector_2
		la, s2, result_vector
		la, t0, length
		lw, t0, 0(t0)
		jal main_loop
		li a7, 10
		ecall

main_loop:	beqz t0, end_loop
		lw t1, 0(s0)
		lw t2, 0(s1)
		add t3, t1, t2
		sw t3, 0(s2)
		addi s0, s0, 4
		addi s1, s1, 4
		addi s2, s2, 4
		addi t0, t0, -1
		j main_loop
end_loop:	ret