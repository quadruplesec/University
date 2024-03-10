def total_distance(dist, cities):
    if len(cities) < 2:
        return 0
    aux_dict = dict()
    for keys in dist.keys():
        aux_dict[keys[::-1]] = dist[keys]
    dist.update(aux_dict)
    
    reg = len(cities)
    sum_dist = 0
    safe_check = 0

    for keys in dist.keys():
        pass

    for x in range(len(cities)):
        if (x+1) == len(cities): break
        safe_check = dist.get((cities[x], cities[x+1]), "oops!")
        if safe_check == "oops!":
            return -1
        else:
            sum_dist += dist[(cities[x], cities[x+1])]

    return sum_dist

