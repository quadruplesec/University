def union_with(combine, dict1, dict2):
    d1 = {a:dict1[a] for a in dict1 if a not in dict2}
    d2 = {a:dict2[a] for a in dict2 if a not in dict1}
    d3 = {a:combine(dict1[a], dict2[a]) for a in dict1 if (a in dict1) and (a in dict2)}
    return {**d1, **d2, **d3}