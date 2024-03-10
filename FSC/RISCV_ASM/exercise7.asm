a)
Sample:
add x5,x5,x6
add x5,x5,x7
add x5,x5,x28
add x5,x5,x29

Let:
x5  = f 
x6  = g
x7  = h
x28 = i
x29 = j

Original expression:
f = f + g + h + i + j 


b)
Sample:
lw x5, 4(x6)

Let:
x5 = f
x6 = A

Original expression:
f = A[1]


c)
Sample:
addi x6, x6, -20 //x6 = x6 - 20 (move the base of A back 5 indices)
slli x30, x5, 3  //x30 = (x5 * 2) * 4
add x6, x6, x30  //x6 = x6 + x30    // A = 4(-5 + 2*x5) (4=offset, A[2*x5 -5], efetivamente... este é confuso)
lw x5, 8(x6)     //x5 = Mem4[8(x6)] <- x5 = x6 + 2 => A[2*x5 - 5 + 2] = A[2*x5 - 3]

Let:
x6 = A[]
x5 = g

Original expression:
f = A[2g - 3]





     