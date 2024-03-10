def find_treasure(pos, steps):
    step_dic = {"up":[0, 1], "down":[0,-1], "left":[-1,0], "right":[1,0]}
    if len(steps) >= 1:
        pos = (pos[0] +  step_dic[steps[0]][0], pos[1] + step_dic[steps[0]][1])
        pos = find_treasure(pos, steps[1:])

    return pos