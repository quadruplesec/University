def generate(word):
    ret_list = []
    '''
    List of Rules:
    1 - If string ends with "I", add "U" to end.
    2 - Double the string after "M"
    3 - Replace any "III" with "U"
    4 - Remove any "UU"

    PS: AWFUL AWFUL CODE. DOESN'T PASS HALF OF THE PRIVATE TESTS. IGNORE!
    '''
    
    
    #Rule 1: behaviour ok
    if word.endswith("I"):
        ret_list.append(word + "U")
    
    #Rule 2: behaviour ok
    for x, y in enumerate(word):
        if y == "M":
            ret_list.append(word[0:x+1] + word[x+1:] + word[x+1:])

    #Rule 3: janky implementation, seems to work ok
    if "III" in word:
        a = word.count("III")
        c = word
        while a > 0:
            d = c.index("III")
            ret_list.append(word[0:d] + "U" + word[d+3:])
            c = word[0:d] + "XXX" + word[d+3:]
            a += -1

    #Rule 4: even jankier, seems to work ok
    if "UU" in word:
        a = word.count("UU")
        c = word
        while a > 0: 
            d = c.index("UU")
            ret_list.append(word[0:d] +  word[d+2:])
            c = word[0:d] + "XX" + word[d+2:]
            a += -1


    return sorted(ret_list)