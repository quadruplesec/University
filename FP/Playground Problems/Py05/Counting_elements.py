def count_until(tup):
    tup_flag = 0
    counter = 0
    for x in tup:
        if type(x) == tuple:
            tup_flag = 1
            break
        else:
            counter += 1

    if tup_flag == 1:
        return counter
    else:
        return -1