#this solution fails 50% of privat tests, not sure whats wrong.

def budgeting(budget, products, wishlist):
    returndict = dict()
    sorted_list = list()

    if budget == 0:
        return {}
    
    for keys in products.keys():
        sorted_list.append([products[keys], keys])

    sorted_list.sort(reverse=True)

    #lis[0] = preço
    #lis[1] = produto

    for lis in sorted_list:
        if lis[1] in wishlist:
            while lis[0] != 0 and budget >= lis[0] and wishlist[lis[1]] != 0:
                if (lis[1] in returndict)==False:
                    returndict[lis[1]] = 0

                wishlist[lis[1]] += -1
                returndict[lis[1]] += 1
                budget += -lis[0]


    return returndict

    

print(budgeting(1200, {'xbox': 250, 'smartphone': 500, 'jeans': 50, 'pc': 600, 'glasses': 100}, {'glasses': 3, 'jeans': 2, 'pc': 1, 'xbox': 1}))
