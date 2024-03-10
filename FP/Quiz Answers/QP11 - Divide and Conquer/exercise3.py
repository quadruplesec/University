def search_tree(key,tree, new_list = []):
    if tree == None:
        return None
    
    key2, value, left, right = tree
    visited = new_list + [key2]
    if key == key2:
        return (value, visited)
    if key2 < key:
        return search_tree(key, right, visited)
    if key2 > key:
        return search_tree(key, left, visited)
