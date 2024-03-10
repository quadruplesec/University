
def no_consecutives1(k):
    wah = 2**k-1
    
    def no_cons(high, counter):
        print(bin(high))
        if high < 0:
            return counter
        else:
            if ("11" in bin(high)) == False:
                counter = counter + 1
                return no_cons(high-1, counter)
            else:
                return no_cons(high-1, counter)
        
    return no_cons(wah,0)

print(no_consecutives1(3))
        
        