def x_union(list1,list2):
    project = lambda a: a[0]
    p_list1 = list(map(project, list1))
    p_list2 = list(map(project, list2))

    l1_filt = lambda x: x[0] not in p_list2
    l2_filt = lambda x: x[0] not in p_list1

    return list(filter(l1_filt, list1)) + list(filter(l2_filt, list2))