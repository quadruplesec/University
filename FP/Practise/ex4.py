def magic(mat):
    valor = 0
    
    #checks first line
    for x in range(len(mat)):
        valor += mat[0][x]

    #checks remaining lines
    n = 1
    while n < len(mat):
        temp_value = 0
        for x in range(len(mat)):
            temp_value += mat[n][x]
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
    if temp_value != valor:
        return False
    
    return True