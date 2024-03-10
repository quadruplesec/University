def variance(alist):
    avg = (1/len(alist)) * sum(alist)
    variance = lambda a: (a-avg)**2
    lista = list(map(variance, alist))

    return round(sum(lista)/len(lista), 3)