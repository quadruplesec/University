def pythagoreans(a,b):
    return [(x,y,z) for x in range(a,b) for y in range(a,b) for z in range(a,b) if (y**2 + x**2 == z**2 and x<y<z)]

