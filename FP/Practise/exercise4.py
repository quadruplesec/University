def magic(mat):
    valor = 0
    
    #checks first line
    for x in range(len(mat)):
        valor += mat[0][x]

    #print("valor inicial:", valor)

    #checks remaining lines
    n = 1
    while n < len(mat):
        temp_value = 0
        for x in range(len(mat)):
            temp_value += mat[n][x]
        print(f"Valor da linha numero {n}:", temp_value)
        n += 1
        if temp_value == valor:
            continue
        else:
            return False
    
    #checks collumns
    n = 0
    while n < len(mat):
        temp_value = 0
        for x in range(len(mat)):
            temp_value += mat[x][n]
        print(f"Valor da coluna numero {n}:", temp_value)    
        n += 1
        if temp_value == valor:
            continue
        else:
            return False

    #checks first diagonal
    n = 0
    while n < len(mat):
        temp_value = 0
        for x in range(len(mat)):
            temp_value += mat[x][x]
        print(f"Valor da diagonal 1:", temp_value)
        n += 1
        if temp_value == valor:
            continue
        else:
            return False
        
    #checks second diagonal

    temp_value = 0
    n = len(mat) - 1
    for x in range(len(mat)):
        temp_value += mat[x][n]
        n -= 1
    print(f"Valor da diagonal 2:", temp_value)
    if temp_value != valor:
        return False
    
    return True
        
print(magic([[8, 1, 6], [3, 5, 7], [4, 9, 2]]))