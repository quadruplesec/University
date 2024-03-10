def time_diff(time1, time2):
    if time1 == time2:
        return (0,0)

    if (time1[0] == time2[0] and time1[1] > time2[1]) or (time1[0] > time2[0]):
        c = time2
        time2 = time1
        time1 = c

    x = 0 #result[0]
    y = 0 #result[1]

    if time2[1] - time1[1] < 0:
        x += -1
        y += 60 - (time2[1] - time1[1])
    
    x += (time2[0] - time1[0])
    y += (time2[1] - time1[1])

    return (x,y)

print(time_diff((23,3),(22,58)))