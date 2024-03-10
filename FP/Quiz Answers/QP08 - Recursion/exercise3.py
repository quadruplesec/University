def max_path(tree):
    if type(tree) != tuple:
        middle = tree
        return tree
    
    left_branch, middle, right_branch = tree
    return middle + max(max_path(left_branch), max_path(right_branch))

print(max_path(((2, 3, (4, 5, 2)), 0, (7, 1, 3))))

    


    

    