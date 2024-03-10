def next_middle_square(number, digits):
   """Compute the next pseudo-random using the 
      middle square algorithm and the given number of digits."""
   k = digits // 2         # half of the number of digits
   square = number*number  # compute the square
   middle = (square // (10**k)) % (10**digits)   # extract middle part
   return middle

def cycle_length(number, digits):
    num_set = set()
    rep_counter = 0

    repetition_flag = 0
    repetition_flag2 = 0
    while repetition_flag != 1:
        num = next_middle_square(number, digits)
        if num in num_set:
            number = num
            break
        else:
            num_set.add(num)
            number = num

    new_set = set()
        
    while repetition_flag2 != 1:
        num2 = next_middle_square(number, digits)
        if num2 in new_set:
            break
        else:
            number = num2
            new_set.add(num2)
            rep_counter += 1
    return rep_counter
print(cycle_length(234348, 8))