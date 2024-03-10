def last_man_standing(a_list, step):
    a = step
    b = len(a_list)

    while b != 1:
        print("a =", a)
        while a > len(a_list):
            a = abs(a - len(a_list))

        print("popped element =", a_list[a-1])
        a_list.pop(a-1)
        a = a + step - 1
        b = b - 1

    return a_list[0]

print(last_man_standing([3, 4, 1, 6, 2, 5, 7], 3))

