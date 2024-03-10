def differences(alist):
    if len(alist) == 1: return alist
    nu_list = list(zip(alist[1:], alist))
    return [a[0]-a[1] for a in nu_list]