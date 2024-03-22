.data
range_a_b: .float 2.0, 9.5	#a, b
vector: .float 2.1, 1, -3, 9.6, 5.6, 8, 9, 10	#expected result: 4
vec_len: .word 8

.text
		la t0, range_a_b
		la s0, vector		#vector base address
		la t1, vec_len		#vector length
		lw t1, 0(t1)
		flw fs1, 0(t0)		#a
		flw fs2, 4(t0)		#b
		jal interval_count
		li a7, 93		#syscall code to exit with the value in a0
		ecall
		
interval_count:	addi sp, sp, -16
		sw s0, 12(sp)
		fsw fs1, 8(sp)
		fsw fs2, 4(sp)
		sw ra, 0(sp)
		addi t2, t2, 0		#counter
loop:		beqz t1, end
		flw ft0, 0(s0)
		flt.s t0, ft0, fs1	#if ft0 < a, set t0 to 1
		bnez t0, not_in_range
		fle.s t0, ft0, fs2	#if ft0 <= b, set t0 to 1.
		beqz t0, not_in_range 
		addi t2, t2, 1		#if no branching occurs, ft0 belongs to the range [a, b]
not_in_range:	addi s0, s0, 4
		addi s1, s1, 4
		addi t1, t1, -1
		j loop
end:		mv a0, t2
		lw s0, 12(sp)
		flw fs1, 8(sp)
		flw fs2, 4(sp)
		lw ra, 0(sp)
		addi sp, sp, 16
		ret