def local_minima(alist):
    return_list = []
    check_list = []

    length = len(alist) - 2

    while length != 0:

        check_list.clear()
        length += -1

        a = alist[0]
        b = alist[1]
        c = alist[2]

        alist.pop(0)
        
        check_list.append(a)
        check_list.append(b)
        check_list.append(c)

        if check_list[2] == 0:
            if check_list[1] == 0:
                return_list.append(check_list[0])
            elif check_list[0] < check_list[1]:
                return_list.append(check_list[0])
            else:
                return_list.append(check_list[1])
        else:
            check_list.sort()

            if (check_list[0] == check_list[1]) or (check_list[0] == check_list[2]):
                continue
            else:
                return_list.append(check_list[0]) 

    return return_list



