def next_prime(number):
    flag = 0
    prime_count = 0
    current_num = number + 1
    prime = 0
    while flag == 0:
        for x in range(1, current_num+1):
            if current_num % x == 0:
                prime_count += 1
        if 1 < prime_count < 3:
            prime = x
            flag = 1
        else:
            prime_count = 0
            current_num += 1

    return prime
