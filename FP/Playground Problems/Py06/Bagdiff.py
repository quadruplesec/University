def bagdiff(xs, ys):
    if len(xs) == 0:
        return []
    
    for item in ys:
        if item in xs:
            xs.remove(item)

    return xs

print(bagdiff([5, 7, 11, 11, 11, 12, 13], [7, 8, 11]))
