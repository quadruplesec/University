import functools
def bounding_box(pts):
    t_max = lambda a,b: a if a > b else b
    t_min = lambda a,b: a if a < b else b

    xmin = functools.reduce((lambda x, y: t_min(x,y)) , list(map(lambda x: x[0] , pts)))
    ymin = functools.reduce((lambda x, y: t_min(x,y)) , list(map(lambda x: x[1] , pts)))
    xmax = functools.reduce((lambda x, y: t_max(x,y)) , list(map(lambda x: x[0] , pts)))
    ymax = functools.reduce((lambda x, y: t_max(x,y)) , list(map(lambda x: x[1] , pts)))

    return (xmin,ymin,xmax,ymax)