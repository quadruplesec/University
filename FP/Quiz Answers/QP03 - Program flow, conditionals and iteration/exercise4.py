num = int(input())
is_even = 0
center_part = ""

while num < 3:
    int(input())

if num % 2 == 0:
    center_part = "#" * (int((num//2 - 1))) + "00" + "#" * int((num//2 - 1))
    is_even = 1
else:    
    center_part = "#" * (int(num//2)) + "0" + "#" * (int(num//2))
    is_even = 0

if is_even == 1:                         #if number is even
    for i in range(1, num + 1):
        if i <= (num//2 - 1) or i > (num//2 + 1):
            print("#" * num)
        else:
            print(center_part)

else:                                   #if number is odd
    for i in range(1, num + 1):
        if i <= (num//2) or i > (num//2 + 1):
            print("#" * num)
        else:
            print(center_part)
