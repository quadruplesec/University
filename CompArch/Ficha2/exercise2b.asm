#Compute area of circle: pi * radius * radius
.data
PI: .float 3.14159
RADIUS: .float 4

.text
		la t0, PI
		flw ft0, 0(t0)
		la t0, RADIUS
		flw ft1, 0(t0)
		jal main
		li a7, 2
		ecall
		li a7 10
		ecall
		
main:		fmul.s fa0, ft0, ft1
		fmul.s fa0, fa0, ft1
		ret 