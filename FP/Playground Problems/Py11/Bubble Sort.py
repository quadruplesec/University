def bubble_sort(alist):
    sort_list = alist.copy()
    while True:
        n = 1
        swap_count = 0

        while True:
            if sort_list[n-1] > sort_list[n]:
                a = sort_list[n-1]
                sort_list[n-1] = sort_list[n]
                sort_list[n] = a
                swap_count += 1

            n += 1
            if n == len(alist):
                break

        if swap_count == 0:
            break

    return sort_list

print(bubble_sort([5, 1, 2, 8, 2.5]))