def change(amount):
    coin_types = [[200, 0], [100,0], [50,0], [20,0], [10,0], [5,0], [2,0], [1,0]]
    return_list = []
    b = 0
    for coin, quantity in coin_types:
        a = amount // coin
        coin_types[b][1] = a
        
        for x in range(a):
            return_list.append(coin_types[b][0])

        amount -= coin*a
        b += 1
    return return_list
        