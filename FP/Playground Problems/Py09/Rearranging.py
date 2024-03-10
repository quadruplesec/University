def rearrange(l):
    lista_1 = list(filter(lambda y:y<=0,l))
    lista_2 = list(filter(lambda y:y>0,l))
    return lista_1 + lista_2

print(rearrange([12, 11, -13, -5, 6, -7, 5, -3, -6, 0]))