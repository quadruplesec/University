def move_tower(height, from_pole, to_pole, with_pole, count):
    if height > 1:
        move_tower(height-1, from_pole, with_pole, to_pole, count)
        count = count + 2**(height-1) - 1
        move_disk(from_pole, to_pole, count)
        move_tower(height-1, with_pole, to_pole, from_pole, count + 1)
    else:
        move_disk(from_pole, to_pole, count)

def move_disk(from_pole, to_pole, count):
    print(f"{count}. Move disk from {from_pole} to {to_pole}")
    