x5 = 0xBEADFEED; x6 = 0xDEADFADE
x5 = (1011 1110 1010 1101 1111 1110 1110 1101)2
x6 = (1101 1110 1010 1111 1010 1101 1101 1110)2

#a) 
    slli  x7, x5, 4     # <- Shift Left x5 by 4 bits: x7 = (1110 1010 1101 1111 1110 1110 1101 0000)2
    or    x7, x7, x6    # <- x7 OR x6:
                        # x7 = (1110 1010 1101 1111 1110 1110 1101 0000)2
                        # x6 = (1101 1110 1010 1111 1010 1101 1101 1110)2
                   #x7 OR x6 = (1111 1110 1111 1111 1110 1111 1101 1110)2

#   x7 = (1101 1110 1010 1111 1010 1101 1101 1110)2
#   x7 = 0xDEAFADDE

#b)
    srli  x7, x5, 3    # <- Shift Right x5 by 3 bits: x7 = (0001 0111 1101 0101 1011 1111 1101 1101)2
    andi  x7, x7, 0xFFFFFFEF   # <- x7 AND 0xFFFFFFEF:
                               # x7 = (0001 0111 1101 0101 1011 1111 1101 1101)2
                               #      (1111 1111 1111 1111 1111 1111 1110 1111)2
                R:   x7 OR 0xFFFFFFEF = (0001 0111 1101 0101 1011 1111 1100 1101)2

