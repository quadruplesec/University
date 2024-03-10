def fib(n):
    if n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    
    fib_list = [0, 1]

    for x in range(2, n):
        fib_list.append(fib_list[x-2] + fib_list[x-1])

    return fib_list

print(fib(5))