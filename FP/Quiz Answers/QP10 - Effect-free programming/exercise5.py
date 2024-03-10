def composition_relations(r):
    return r.union({(w,z) for w,x in r for y,z in r if y == x})

def transitive_closure(r):
    if composition_relations(r).union(r) == r:
        return r
    else:
        return transitive_closure(composition_relations(r).union(r))
