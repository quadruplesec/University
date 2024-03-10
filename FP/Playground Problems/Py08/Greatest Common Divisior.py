def gcd_rec(n1,n2):
    if n1 == n2:
        return n1
    elif n1 > n2:
        return gcd_rec(n1-n2, n2)
    elif n1 < n2:
        return gcd_rec(n1,n2-n1)

print(gcd_rec(12,14))