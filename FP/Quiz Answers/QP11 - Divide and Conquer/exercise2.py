def find_me(f,limits, counter = 0):
    mid = (limits[0] + limits[1])//2
    if f(mid) == 0:
        counter += 1
        return counter
    if f(mid) == 1:
        counter += 1
        return find_me(f, (mid+1, limits[1]), counter)
    if f(mid) == -1:
        counter += 1
        return find_me(f, (limits[0], mid-1), counter)