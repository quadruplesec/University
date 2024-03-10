def most_frequent(alist):
    dic = {}
    for x in alist:
        dic[x] = 0
    
    for x in alist:
        dic[x] += 1

    a = 0
    b = 0

    for keys in dic.keys():
        if dic[keys] > a:
            a = dic[keys]
            b = keys
    return b

print(most_frequent([-1, 2, 5, -1, 3, 3, 3, 4, 4, 2, 4, 5, -1, -1]))
