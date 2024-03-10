import math
def juggler(n, p):
    if p == 0:
        return n
    if juggler(n, p-1) % 2 == 0:
        return math.floor(juggler(n, p-1)**(0.5))
    if juggler(n, p-1) % 2 != 0:
        return math.floor(juggler(n, p-1)**(1.5))
    
