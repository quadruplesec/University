def add(num1, num2):
    #normalisation
    dec_point_num1 = num1.index(".")
    dec_point_num2 = num2.index(".")

    int_part_num1 = num1[:dec_point_num1]
    int_part_num2 = num2[:dec_point_num2]

    dec_part_num1 = num1[dec_point_num1+1:]
    dec_part_num2 = num2[dec_point_num2+1:]
    
    if len(int_part_num1) < len(int_part_num2):
        int_part_num1 = ("0"*(len(int_part_num2) - len(int_part_num1))) + int_part_num1
    elif len(int_part_num1) > len(int_part_num2):
        int_part_num2 = ("0"*(len(int_part_num1) - len(int_part_num2))) + int_part_num2 

    if len(dec_part_num1) < len(dec_part_num2):
        dec_part_num1 = dec_part_num1 + ("0"*(len(dec_part_num2) - len(dec_part_num1)))
    elif dec_part_num1 > dec_part_num2:
        dec_part_num2 = dec_part_num2 + ("0"*(len(dec_part_num1) - len(dec_part_num2)))
    
    num1 = int_part_num1 +"."+ dec_part_num1
    num2 = int_part_num2 + "." + dec_part_num2

    carry = 0
    result = ""
    for x in range(-1, -len(num1)-1, -1):
        if num1[x] == "." and num2[x] == ".":
            result += "."
            continue
        result += str((int(num1[x]) + int(num2[x]) + carry) % 10)
        carry = (int(num1[x]) + int(num2[x]) + carry) // 10

        if x == -len(num1):
            if carry > 0:
                result += str(carry)

    return result[::-1]