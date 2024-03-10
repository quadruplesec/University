def treasure(clues):
    starting_pos = (0,0)
    clue_set = set()
    if len(clues) == 0:
        return starting_pos

    for x in range(len(clues)):
        print(clue_set)
        print(clues[starting_pos])
        if clues[starting_pos] in clue_set:
            return clues[starting_pos]
        else:
            clue_set.add(clues[starting_pos])
            new_pos = clues[starting_pos]
            starting_pos = clues[starting_pos]

    return new_pos  

print(treasure(	{(0, 0): (5, 6), (7, 8): (6, 7), (5, 6): (6, 7), (6, 7): (7, 8)}))
