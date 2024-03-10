n1 = int(input())
n2 = int(input())
result = 0

#prevent integers with different lengths from being approved.
if len(str(n1)) != len(str(n2)):
    n1 = int(input())
    n2 = int(input())

length = (int(len(str(n1))) * 2)

for i in range(length):
    if i % 2 == 0:
        result += (n1 % 10) * (10**((length-1)-i))
        n1 = n1 // 10
    if i % 2 == 1:
        result += (n2 % 10) * (10**((length-1)-i))
        n2 = n2 // 10

print(int(result))