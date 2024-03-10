def to_celsius(t):
    a = list(map(lambda a: (a-32) * (5/9), t))
    return [round(b,1) for b in a]
