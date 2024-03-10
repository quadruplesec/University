def evaluate(a,x):
    coef = lambda b: b*(x**a.index(b))
    return sum(map(coef,a))

print(evaluate(	[1, 2, 4, 6, 8], 2))