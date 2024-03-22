.data
one: .double 1
a_n: .double 0.278393, 0.230389, 0.000972, 0.078108 #a1, a2, a3, a4
x_value: .double -3

.text
		la t0, one
		la t1, a_n
		la t2, x_value
		fld fs0, 0(t0)		#fs0 = 1
		fld fs1, 0(t1)		#fs1 = a1
		fld fs2, 8(t1)		#fs2 = a2
		fld fs3, 16(t1)		#fs3 = a3
		fld fs4, 24(t1)		#fs4 = a4
		fld fs5, 0(t2)		#fs5 = x
		jal erf
		li a7, 3
		ecall
		li a7, 10
		ecall
		
erf:		addi sp, sp, -16
		sw ra, 12(sp)
		li a6, 0
		fsub.d ft0, fs0, fs0	#ft0 = 0
		flt.d t0, fs5, ft0
		bnez t0, neg_flag
		j erf_main
		
neg_flag:	li a6, 1
		fsub.d ft0, fs0, fs0
		fsub.d fs11, ft0, fs0	#fs11 = -1
		fmul.d fs5, fs5, fs11				
		
erf_main:	fmul.d ft0, fs1, fs5	#ft0 = a1*x
		fmul.d ft1, fs5, fs5	#ft1 = x^2
		fmul.d ft2, ft1, fs2	#ft2 = a2x^2
		fmul.d ft1, ft1, fs5	#ft1 = x^3
		fmul.d ft3, ft1, fs3	#ft3 = a3x^3
		fmul.d ft1, ft1, fs5	#ft1 = x^4
		fmul.d ft4, ft1, fs4	#ft4 = a4x^4
		fadd.d ft0, fs0, ft0	#ft0 = 1 + a1x
		fadd.d ft0, ft0, ft2	#ft0 = 1 + a1x + a2x^2
		fadd.d ft0, ft0, ft3	#ft0 = 1 + a1x + a2x^2 +a3x^3
		fadd.d ft0, ft0, ft4	#ft0 = 1 + a1x + a2x^2 + a3x^3 + a4x^4
		fmul.d ft0, ft0, ft0
		fmul.d ft0, ft0, ft0	#ft0 = (1 + a1x + a2x^2 + a3x^3 + a4x^4)^4
		fdiv.d ft0, fs0, ft0
		fsub.d ft0, fs0, ft0
		fmv.d fa0, ft0
		beqz a6, erf_pos
		fmul.d fa0, fa0, fs11
erf_pos:	ret