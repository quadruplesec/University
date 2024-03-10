def fetch_middle(llists):
    return_list = []

    for clist in llists:
        if len(clist)%2 == 0:
            x = len(clist)//2
            avg = (clist[x] + clist[x-1]) / 2
            return_list.append(avg)
        else:
            x = len(clist)//2
            return_list.append(clist[x])

    return return_list