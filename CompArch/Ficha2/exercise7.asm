#Was supposed to be done with doubles instead of floats... oops.

.data
x_value: .float -3
PI: .float 3.14159

.text
		la t0, x_value
		flw fs0, 0(t0)
		jal rotF
		li a7, 2
		ecall			#print result
		li a7, 10
		ecall			#exit
		
rotF:		addi sp, sp, -16
		sw ra, 12(sp)
		fsw fs0, 8(sp)
		li t0, 0
		fcvt.s.w ft0, t0	#set ft0 to ZERO
		flt.s t1, fs0, ft0
		beqz t1, GETZ		#if t1 = 0, branch to "Greater or Equal than ZERO"
		
Not_GETZ:	li t0, 1
		fcvt.s.w ft0, t0	#set ft0 = 1
		li t1, 4
		fcvt.s.w ft1, t1	#set ft1 = 4
		fsub.s ft1, ft1, fs0	#ft1 = 4 - x			
		fsqrt.s ft1, ft1	#ft1 = sqrt(4-x)
		fdiv.s ft1, ft0, ft1	#ft1 = 1/sqrt(4-x=)
		j end
		
GETZ:		la t0, PI
		flw ft0, 0(t0)
		fadd.s ft0, ft0, fs0	#ft0 = x + PI
		fmul.s ft1, ft0, ft0
		fmul.s ft1, ft1, ft0	#ft1 = (x+PI)^3
		fsqrt.s ft1, ft1
		
end:		fmv.s fa0 ft1
		lw ra, 12(sp)
		flw fs0, 8(sp)
		addi sp, sp, 16
		ret
