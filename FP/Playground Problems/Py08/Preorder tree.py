return_list = []
def preorder(tree):
    if type(tree[0]) == tuple:
        preorder(tree[0])
    else:
        if tree[0] != None:
            return_list.append(tree[0])

    if type(tree[1]) == tuple:
        preorder(tree[1])
    else:
        if tree[1] != None:
            return_list.append(tree[1])
    
    if type(tree[2]) == tuple:
        preorder(tree[2])
    else:
        if tree[2] != None:
            return_list.append(tree[2])
    
    return return_list

print(preorder((2, (7, (2, None, None), (6, (5, None, None), (11, None, None))), (5, None, (9, (4, None, None), None)))))
        