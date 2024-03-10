a)
if x6 < x0:
    x5 = x0 - x6
else:
    continue

Assembly:
   bge x6, x0, L1  #if x6 > x0, L1; else: x5 = 0 - x6
   sub x5, x0, x6
L1:....


b)

Assembly:
   addi x5, x0, 1 #x5 = 1
   blt x7, x6, L1
   addi x5, x5, -1 #x5 = 1 + (-1) = 0
L1:......

