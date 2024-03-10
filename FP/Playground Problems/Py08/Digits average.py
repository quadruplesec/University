import math
def average(a, b):
    return math.ceil((a + b) / 2)

def digits_average(n):
    if n < 10:
        return n
    def digits_average_rec(n, avg=0, power=0):
        avg = avg + average(n % 10, (n//10) % 10) * 10**power
        n = n // 10
        power += 1
        if n >= 10: return digits_average_rec(n, avg, power)
        else: return digits_average(avg)

    return digits_average_rec(n)

print(digits_average(1234))
    