def rotate_list(l):
    new_list = []
    temp_list = []
    for x in range(len(l)):
        if x < 3:
            temp_list.append(l[x])
        else:
            new_list.insert(x-3, l[x])
    
    return new_list+temp_list

print(rotate_list([1, 2, 3, 4, 5, 6]))