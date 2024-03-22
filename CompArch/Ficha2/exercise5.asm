.data
vec_1: .float 1.2, 4.5, 2.3, 1.1
vec_2: .float 1.73, 9.1, 4.3, 2.2
n: .word 4 #vec length

.text
		la s0, vec_1
		la s1, vec_2
		la t1, n
		lw t1, 0(t1)
		jal main
		li a7, 2
		ecall
		li a7, 10
		ecall
		
main:		addi sp, sp, -16
		sw s0, 12(sp)
		sw s1, 8(sp)
		li t0, 0
		fcvt.s.w ft2, t0
main_loop:	beqz t1, end_loop
		flw ft0, 0(s0)
		flw ft1, 0(s1)
		fmul.s ft0, ft0, ft1
		fadd.s ft2, ft2, ft0
		addi s0, s0, 4
		addi s1, s1, 4
		addi t1, t1, -1
		j main_loop
end_loop:	fmv.s fa0, ft2
		lw s0, 12(sp)
		lw s1, 8(sp)
		addi sp, sp, 16
		ret