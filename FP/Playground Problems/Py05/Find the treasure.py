def map(pos, steps):
    (x, y) = pos

    instructions = steps.split("-")

    for i in instructions:
        if i == "up":
            y += 1
        if i == "down":
            y -= 1
        if i == "left":
            x -= 1 
        if i == "right":
            x += 1
    
    return (x, y)