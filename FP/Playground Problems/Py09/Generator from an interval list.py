def generator(intlist):
    genexp = ([i for i in range(tup[0], tup[1] + 1)] for tup in intlist)
    return genexp

