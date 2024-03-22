#p(x) = 1.5x^3 - 12.5x + 7

.data
store_vec: .float


.text
#CONTEXT: This problem asks me not to use any input besides the vector to store the results in.
#Thus, the following jank code that could have been made a lot easier by just loading 0.1, 12.5, 1.5, and 7 from memory...
#Curses. May the Golden Witch avenge me.

		la s0, store_vec
		li t0, 0		#counter. when = 101, stop loop.
		li t2, 101		#101
		fcvt.s.w ft0, t0	#floating 0 (current x. increment by 0.1 each loop.)
		li t1, 1
		fcvt.s.w ft1, t1
		li t1, 10
		fcvt.s.w ft2, t1
		fdiv.s fs0, ft1, ft2	#fs0 = 1 / 10 = 0.1
		li t4, 3
		li t5, 2
		li t6, 25
		fcvt.s.w ft1, t4
		fcvt.s.w ft2, t5
		fdiv.s fs1, ft1, ft2	#fs1 = 3 / 2 = 1.5
		fcvt.s.w ft1, t6
		fdiv.s fs2, ft1, ft2	#fs2 = 25 / 2 = 12.5	
		li t4, 7
		fcvt.s.w fs3, t4	#fs3 = 7.0
		jal main		
		li a7, 10
		ecall
		
main:		addi sp, sp, -16
		sw ra, 12(sp)
		sw s0, 8(sp)
main_loop:	bgt t0, t2, end
		fmul.s ft3, ft0, ft0	#x^2
		fmul.s ft3, ft3, ft0	#x^2 * x
		fmul.s ft3, ft3, fs1	#1.5x^3
		fmul.s ft4, fs2, ft0	#12.5x
		fsub.s ft5, ft3, ft4	#1.5x^3 - 12.5x
		fadd.s ft5, ft5, fs3	#1.5x^3 - 12.5x + 7
		fsw ft5, 0(s0)
		addi, s0, s0, 4
		addi t0, t0, 1
		fadd.s ft0, ft0, fs0	#ft0 += 0.1
		j main_loop
end:		lw ra, 12(sp)
		lw s0, 8(sp)
		addi sp, sp 16
		ret