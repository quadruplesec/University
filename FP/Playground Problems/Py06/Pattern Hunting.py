def pattern_hunting(l1, l2, p):
    a = len(l1)
    return_list = []

    for x in range(a):
        if p in l1[x]:
            return_list.append(l2[x])
        if p in l2[x]:
            return_list.append(l1[x])
    
    return_list.sort()
    return_list.reverse()

    return return_list



    