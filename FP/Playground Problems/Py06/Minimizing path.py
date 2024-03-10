def min_path_h(path):
    x = 0

    while x < len(path):
        if path[x] == "RIGHT" and path[x-1] == "LEFT":
            path.pop(x)
            path.pop(x-1)
            continue

        elif path[x] == "LEFT" and path[x-1] == "RIGHT":
            path.pop(x)
            path.pop(x-1)
            continue

        elif path[x] == "UP" and path[x-1] == "DOWN":
            path.pop(x)
            path.pop(x-1)
            continue

        elif path[x] == "DOWN" and path[x-1] == "UP":
            path.pop(x)
            path.pop(x-1)
            continue

        x = x + 1
        
    return path

def min_path(path):
    return min_path_h(min_path_h(path))

print(min_path(	['LEFT', 'LEFT', 'UP', 'RIGHT', 'DOWN', 'UP', 'LEFT']))