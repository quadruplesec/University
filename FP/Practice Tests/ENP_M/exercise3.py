def lfsr(n:str):
    ni = n
    result = n[-1]

    if ni[-1] != ni[-2]:
        ni = "1" + ni[0:-1]
    else:
        ni = "0" + ni[0:-1]
    result += ni[-1]

    while ni != n:
        if ni[-1] != ni[-2]:
            ni = "1" + ni[0:-1]
        else:
            ni = "0" + ni[0:-1]
        result += ni[-1]

    return result[:-1]