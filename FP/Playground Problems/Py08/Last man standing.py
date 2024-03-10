def last_man_standing(alist, step):
    if len(alist) == 1:
        return alist[0]
    else:
        pos = (step - 1) % len(alist)
        return last_man_standing(alist[pos+1:] + alist[:pos], step)