#compute the cosine function using a variant of taylor's formula
.data 
factorials: .double 2, 24, 720, 40320, 3628800 	#2!, 4!, 6!, 8!, 10!
x_value: .double 0.78539			#test value in radians
one: .double 1					#1 

.text
		la s0, factorials
		la t0, x_value
		fld fs1, 0(t0)			#fs1 = x
		jal cos
		li a7, 3
		ecall				#print result of cos(x) function call
		li a7, 10
		ecall				#exit
		
cos:		addi sp, sp, -16
		sw s0, 12(sp)
		sw ra, 8(sp)
		la t0, one
		fld fs0, 0(t0)			#fs0 = 1 (will be used a lot)
		fmul.d ft0, fs1, fs1		#ft0 = x^2 (also will be used a lot)
		fmv.d fa0, fs0			#fa0 = 1 (this register will be used to store the return value of the subroutine)
		fld ft1, 32(s0)			#ft1 = 10!
		fdiv.d ft1, fs0, ft1		#ft1 = 1/10!
		fmul.d ft1, ft0, ft1		#ft1 = x^2*(1/10!)
		fld ft2, 24(s0)			#ft2 = 8!
		fdiv.d ft2, fs0, ft2		#ft2 = 1/8!
		fsub.d ft1, ft2, ft1		#ft1 = 1/8! - x^2*(1/10!)
		fmul.d ft1, ft0, ft1		#ft1 = x^2(1/8! - x^2*(1/10!))
		fld ft2, 16(s0)			#ft2 = 6!
		fdiv.d ft2, fs0, ft2		#ft2 = 1/6!
		fsub.d ft1, ft2, ft1		#ft1 = 1/6! - x^2(1/8! - x^2*(1/10!))
		fmul.d ft1, ft0, ft1		#ft1 = x^2(1/6! - x^2(1/8! - x^2*(1/10!)))
		fld ft2, 8(s0)			#ft2 = 4!
		fdiv.d ft2, fs0, ft2		#ft2 = 1/4!
		fsub.d ft1, ft2, ft1		#ft1 = 1/4! - x^2(1/6! - x^2(1/8! - x^2*(1/10!)))
		fmul.d ft1, ft0, ft1		#ft1 = x^2(1/4! - x^2(1/6! - x^2(1/8! - x^2*(1/10!))))
		fld ft2, 0(s0)			#ft2 = 2!
		fdiv.d ft2, fs0, ft2		#ft2 = 1/2!
		fsub.d ft1, ft2, ft1		#ft1 = 1/2! - x^2(1/4! - x^2(1/6! - x^2(1/8! - x^2*(1/10!))))
		fmul.d ft1, ft0, ft1		#ft1 = x^2(1/2! - x^2(1/4! - x^2(1/6! - x^2(1/8! - x^2*(1/10!)))))
		fsub.d fa0, fa0, ft1		#fa0 = 1 - x^2(1/2! - x^2(1/4! - x^2(1/6! - x^2(1/8! - x^2*(1/10!)))))
		lw s0, 12(sp)
		lw ra, 8(sp)
		addi sp, sp, 16
		ret
		
		