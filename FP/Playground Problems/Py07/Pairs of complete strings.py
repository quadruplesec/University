from string import ascii_lowercase as asc_lower
def complete_pairs(s1, s2):
    s3 = set()
    for x in s1:
        for y in s2:
            s3.add(x+y)

    s4 = set()
    
    for x in s3:
        if set(asc_lower) - set(x) == set():
            s4.add(x)
        
    return s4
        

print(complete_pairs(	{'geeksforgeeks', 'abc', 'lmnopqrst', 'abcdefgh'}, {'abcdefghijklmnopqrstuvwxyz', 'ijklmnopqrstuvwxyz', 'defghijklmnopqrstuvwxyz'}))

