def bitonic_point(f):
    l = f()
    bit = 0
    n = 1
    if l[0] <= l[1]:
        while l[n-1] <= l[n]:
            n += 1
        bit = l[n-1]       
    else:
        while l[n-1] >= l[n]:
            n += 1
        bit = l[n-1]

    return bit



print(bitonic_point(lambda: [2, 6, 10, 25, 60, 30, 25, 10, 0]))
print(bitonic_point(lambda: list(range(0, 10)) + list(range(20, 2, -1))))
print(bitonic_point(lambda: list(range(-1, 7000001)) + list(range(5000002, 2, -1))))