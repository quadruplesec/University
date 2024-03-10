def summary_ranges(a_string):
    alist = a_string.split(",")
    
    for x in range(len(alist)):
        alist[x] = int(alist[x])
    
    alist.append(100000)

    start = alist[0]
    end = 0
    returnstring = ""
    
    for x in range(1, len(alist)):

        if alist[x] == alist[x-1] + 1:
            if x != len(alist) - 1:
                continue
            
            else:
                end = alist[x]
                if end == start:
                    returnstring += str(start)
                    start = alist[x]

                else:
                    returnstring += str(start)
                    returnstring += "->"
                    returnstring += f"{end}"
                    start = alist[x]
                

        else:
            end = alist[x-1]
            if end == start:
                if x == len(alist) - 1:
                    returnstring += f"{start}"
                    start = alist[x]
                else:
                    returnstring += f"{start},"
                    start = alist[x]
            else:
                if x == len(alist) - 1:
                    returnstring += str(start)
                    returnstring += "->"
                    returnstring += f"{end}"
                    start = alist[x]
                else:
                    returnstring += str(start)
                    returnstring += "->"
                    returnstring += f"{end},"
                    start = alist[x]

    return returnstring
