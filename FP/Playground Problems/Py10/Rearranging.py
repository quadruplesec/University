"""
def shorten(suffixes, base):

    def inner_func(value):
        if all(x.isdigit() for x in value) == False:
            return str(value)
        
        l = [f"{int(value) // (base**i)} {suffixes[i]}" for i,_ in enumerate(suffixes) if int(value) // (base**i) == 0]

        if len(l) == 0:
            return f"{int(value) // (base**(suffixes.index(suffixes[-1])))} {suffixes[-1]}"
        if len(l) > 1:
            return f"{value} {suffixes[0]}"
        else:
            return str(l)
    return inner_func

print(shorten(["", "K", "M"], 1000)("12456789"))
"""

def shorten(suffixes, base):

    def inner_func(value):
        if all(x.isdigit() for x in value) == False:
            return str(value)
        
        l = [f"{int(value) // (base**i)} {suffixes[i]}" for i,_ in enumerate(suffixes) if int(value) // (base**i) != 0]

        return min(l, key=lambda x: len(x))
    
    return inner_func

print(shorten(["B", "KiB", "MiB", "GiB", "TiB"], 1024)("83713"))