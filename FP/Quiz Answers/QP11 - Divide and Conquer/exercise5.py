def aux_func(list):
        list = [x[:len(min(list))] for x in list]
        if len(set(list)) != 1:
            l = [x[:-1] for x in list]
            return aux_func(l)
        return list[0]

def longest_prefix(words):
    if len(words) < 2:
        return words[0]
    middle = len(words) // 2
    l1 = aux_func(words[:middle])
    l2 = aux_func( words[middle:])

    return aux_func([l1,l2])

