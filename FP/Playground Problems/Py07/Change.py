def change(money):
    wallet = {2: 0, 1: 0, 0.5: 0, 0.2: 0, 0.1: 0, 0.05: 0, 0.02: 0, 0.01: 0}

    for x in wallet.keys():
        print("money =", money)
        print("x =", x)
        print("money // x =", money // x)
        wallet[x] = money // x
        money = round(money - (x * wallet[x]), 2)

    return wallet

print(change(7.71))



    