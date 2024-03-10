
def sum_digits_rec(n):
    if n // 10 == 0:
        return n
    else:
        return n % 10 + sum_digits_rec(n // 10)
    

print(sum_digits_rec(1456))
     