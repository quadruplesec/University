from math import sqrt
def comprehensions(i,j):
    l = [x for x in range(i, j+1) if (x%10==3 or x%10==8)]
    tup = tuple([round(sqrt(x), 2) for x in range(i, j+1)])
    d = {x:chr(x) for x in range(i, j+1)}
    return (l,tup,d)
