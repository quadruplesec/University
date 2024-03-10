def above(tree, name):
    for x in tree:
        for y in x:
            if name in y:
                return