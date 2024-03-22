#Expressão a calcular: ((A-B)*C)/(D+A-3)
.data
ABCD: .float 1.0, -3.4, 7.9, 11.0 #A, B, C, D

.text
		la t0, ABCD
		flw ft0, 0(t0)		#ft0 = A
		flw ft1, 4(t0)		#ft1 = B
		flw ft2, 8(t0)		#ft2 = C
		flw ft3, 12(t0)		#ft3 = D
		jal main
		li a7, 2
		ecall
		li a7, 10
		ecall

main:		fsub.s ft4, ft0, ft1	#ft4 = 1 - (-3.4)
		fmul.s ft4, ft4, ft2	#ft4 = (1-(-3.4))*7.9
		fadd.s ft5, ft3, ft0	#ft5 = 7.9 + 1
		li t0, 3
		fcvt.s.w ft6, t0
		fsub.s ft5, ft5, ft6	#ft5 = 7.9 + 1 - 3.0
		fdiv.s fa0, ft4, ft5	#fa0 = ((1-(-3.4))*7.9)/(7.9 + 1 - 3.0)
		ret