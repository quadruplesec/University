def greatest_member(a_tuple):
    if len(a_tuple) == 0:
        return ()
    value_tally = []
    sum = 0

    for E in a_tuple:
        if type(E) != tuple:
            for C in E:
                sum += ord(C)
            value_tally.append(sum)
            sum = 0

        else:
            for SE in E:
                if type(SE) == tuple:
                    for SSE in SE:
                        for C in SSE:
                            sum += ord(C)

                else:
                    for C in SE:
                        sum += ord(C)
            value_tally.append(sum)
            sum = 0

    maior = value_tally.index(max(value_tally))

    return a_tuple[maior]

print(greatest_member((('ab', 'dez', ('1',)), ('ab', 'de', ('1',)), 'defg', 'jkab')))