import functools
def dec2int(alist):
    int2str = lambda x: str(x)
    alist = list(map(int2str,alist))
    return functools.reduce((lambda a,b: a+b), alist)


    