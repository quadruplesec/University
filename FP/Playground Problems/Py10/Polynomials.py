from operator import add
from functools import reduce
def evaluate(a,x):
    lista = [x**n for n in range(0,len(a))]
    lista2 = [a[n] * lista[n] for n in range(len(lista))]
    return reduce(add, lista2)

print(evaluate(	[1, 2, 4], 10))

