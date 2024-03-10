def shopping(alist:dict, stock:dict) -> tuple:
    spent = 0
    missing = dict()

    #did they really have to make a dictionary named alist?
    shop_dict = alist.copy()

    for item in shop_dict.keys():
        #case 1: whole item not in stock
        if item not in stock:
            missing[item] = shop_dict[item]
            continue
        #case 2: item partially in stock or totally in stock
        quantity, price = stock[item]

        if shop_dict[item] <= quantity:
            spent += price * shop_dict[item]
        else:
            misisng_amm = shop_dict[item] - quantity
            spent += price * (shop_dict[item] - misisng_amm)
            missing[item] = misisng_amm

    #always final step
    return (spent, missing)