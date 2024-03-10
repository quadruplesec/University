def permutations(str):
    if len(str) == 0:
        return[""]
    if len(str) == 1:
        return [str]
    
    else:
        lista = []
        for x in range(len(str)):
            fixed_index = str[x]
            leftover = str[:x] + str[x+1:]
            perm = permutations(leftover)
            for y in perm:
                lista.append(fixed_index + y)

    return lista