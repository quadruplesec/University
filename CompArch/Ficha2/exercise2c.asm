#Distance between two points:
#sqrt((x1-x2)^2 + (y1-y2)^2)

.data
point1: .float 2.1, 4.0
point2: .float 7, 2.9

.text
		la t0, point1
		flw ft0, 0(t0)	#x1
		flw ft1, 4(t0)	#y1
		la t0, point2
		flw ft2, 0(t0)	#x2
		flw ft3, 4(t0)	#y2
		jal main
		li a7, 2
		ecall
		li a7, 10
		ecall
		
main:		fsub.s ft4, ft0, ft2
		fsub.s ft5, ft1, ft3
		fmul.s ft4, ft4, ft4
		fmul.s ft5, ft5, ft5
		fadd.s ft4, ft4, ft5
		fsqrt.s fa0, ft4
		ret