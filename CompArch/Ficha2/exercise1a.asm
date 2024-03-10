# B = f0, M = f1, N = f2, P = f3
.data
array: .float 7.8, 3.6, 7.1, 0

.text
la t0, array
flw f0, 0(t0)
flw f1, 4(t0)
flw f2, 8(t0)
flw f5, 12(t0)		#let f5 = 0
fadd.s f4, f2, f0
fsub.s f3, f5, f1
fmul.s f3, f3, f4
fmv.s fa0, f3
li a7, 2
ecall
