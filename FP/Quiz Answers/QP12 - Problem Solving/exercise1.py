def number_of_collisions(objects):
    collisions = 0
    while len(objects) >= 2:
        TL1 = (objects[0]["x1"],objects[0]["y1"])
        BR1 = (objects[0]["x2"],objects[0]["y2"])
        for x in objects[1:]:
            TL2 = (x["x1"], x["y1"])
            BR2 = (x["x2"], x["y2"])
            if BR1[1] < TL2[1] or BR1[0] < TL2[0] or TL1[1] > BR2[1] or TL1[0] > BR2[0]:
                continue #no interception
            else:
                collisions += 1
        objects.pop(0)

    return collisions

