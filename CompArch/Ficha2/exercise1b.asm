.data
constant: .double 7.1

.text
li t0, 7		#let t0 = W = 7
la t1, constant
fld ft0, 0(t1)		#let ft0 = X = 7.1 (MAKE SURE TO LOAD DOUBLE WHEN USING DOUBLES!)
fcvt.s.w ft1, t0
fcvt.d.s ft1, ft1	#convert W to double
fsqrt.d ft2, ft0	#let ft2 = Y
fadd.d ft2, ft2, ft1
fmv.d fa0, ft2
li a7, 3
ecall