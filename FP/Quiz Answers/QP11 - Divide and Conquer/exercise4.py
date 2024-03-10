def bisect(f,n):
    lower = 0
    upper = 1
    def aux_bisect(low, upp, n):
        mid = (low + upp) / 2 
        if n == 0:
            return round(mid, 5)
        if f(low) * f(mid) > 0:
            low = mid
        else:
            upp = mid
        return aux_bisect(low, upp, n-1)
    return aux_bisect(lower, upper, n-1)