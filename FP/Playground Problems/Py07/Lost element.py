def lost_element(s1, s2):
    if len(s1) > len(s2):
        return (s1 - s2).pop()
    else:
        return (s2 - s1).pop()