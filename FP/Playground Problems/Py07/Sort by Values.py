def hex_10(hex):
    num = hex[1:]
    return int(num, 16)


def sort_by_value(dict):
    lista = list(dict.items())
    return_list = []
    a = len(lista)
    i = 0

    while a > 0:
        i = 0
        for x in range(1, len(lista)):
            if hex_10(lista[x][1]) > hex_10(lista[i][1]):
                i = x
        return_list.append(lista[i])
        lista.pop(i)
        a = a - 1

    return_list.reverse()
    return return_list


print(sort_by_value({'Silver': '#C0C0C0', 'Gray': '#808080', 'Tomato': '#FF6347', 'Aqua': '#00FFFF', 'Black': '#000000'}    ))