def median_finder(alist: list):
    lista = [sorted(a) for a in alist]
    return [list_a[len(list_a) // 2] if len(list_a) % 2 != 0 else (list_a[len(list_a) // 2] + list_a[len(list_a) // 2 - 1]) / 2 if len(list_a) != 1 else list_a[0] for list_a in lista]

def batch_normaliser(alist: list, norm_list: list) -> list:
    return_list = []
    for x,y in enumerate(alist):
        return_list.append([a - norm_list[x] for a in y])

    return return_list

def batch_norm(alist: list, batch_size: int):
    batch_list = []
    while True:
        if len(alist) == 0:
            break

        if len(alist) <= batch_size:
            batch_list.append(alist)
            break   

        batch_list.append(alist[:batch_size])
        alist = alist[batch_size:]

    median_list = median_finder(batch_list)
    normalised_batches = batch_normaliser(batch_list, median_list)
    gen_exp = (x for x in normalised_batches)

    return gen_exp # type: ignore

print(batch_norm([10, 1, -12, 5, 1, 3, 7, 3, 3], 5))
print(batch_norm([51, 60, 11, 19, 30, 62, 90, 31, 43, 11], 5))

