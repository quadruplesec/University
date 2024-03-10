tuple_list = []
def biggest_member(atuple):
    if len(atuple) == 0:
        return ()
    tuple_list.append(atuple)
    print(tuple_list)
    for mem in atuple:
        if type(mem) == tuple:
            return biggest_member(mem)
        else:
            continue
    nu_list = []
    for tup in tuple_list:
        nu_list.append(len(tup))
    
    return tuple_list[nu_list.index(max(nu_list))]

print(biggest_member((1,2,3,(1,2,3,4))))



