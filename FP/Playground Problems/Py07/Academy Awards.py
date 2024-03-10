def academy_awards(alist):
    award_dict = {}

    #criar pares key:value 
    for x in alist:
        award_dict[x[1]] = 0
    
    #adicionar 1 por cada vez que aparece na lista
    for x in alist:
        award_dict[x[1]] += 1

    return award_dict

