def permutations(atuple):
    return_set = set()
    if len(atuple) == 1:
        return set(atuple)
    if len(atuple) == 2:
        return {atuple, (atuple[1], atuple[0])}
    
    permutation = permutations(atuple[1:])
    
    for i in range(len(atuple)):
        for x in permutation:
            return_set.add(tuple(list(x[:i]) + [atuple[0]] + list(x[i:])))

    return return_set

print(permutations(('Joe', 'Mary', 'John')))