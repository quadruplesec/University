#compute y(x) = 100 + 50cos(x), x in degrees, x in range [0º, 90º]
.data 
factorials: .double 2, 24, 720, 40320, 3628800 	#2!, 4!, 6!, 8!, 10!
one: .double 1					#1 
x_value: .double 45				#x in degrees (Note: the cos subroutine processes radians, not degrees, convert before cos call)
pi: .double 3.14159265359				
oneeighty: .double 180				
						
.text
		la t0, x_value
		jal func
		li a7, 3
		ecall				#print result of cos(x) function call
		li a7, 10
		ecall				#exit
		
func:		addi sp, sp, -16
		sw s0, 12(sp)
		sw ra, 8(sp)
		fld fs1, 0(t0)			#fs1 = x (in degrees)
		li t0, 100
		li t1, 50
		fcvt.d.w fs5, t0		#fs5 = 100
		fcvt.d.w fs6, t1		#fs6 = 50
		la t0, pi
		fld ft5, 0(t0)
		la t0, oneeighty
		fld ft6, 0(t0)
		fmul.d fs1, fs1, ft5
		fdiv.d fs1, fs1, ft6
		jal cos				#result of function call in fa0
		fmul.d ft1, fs6, fa0		#ft1 = 50cos(x)
		fadd.d ft0, fs5, ft1		#ft0 = 100 + 50cos(x)
		fmv.d fa0, ft0
		lw s0, 12(sp)
		lw ra, 8(sp)
		addi sp, sp, 16
		ret
		
		
cos:		addi sp, sp, -16
		sw s0, 12(sp)
		sw ra, 8(sp)
		la s0, factorials		#assume x will be in fs1.
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
		
		
