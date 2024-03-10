listanums = []
num = int(input())

while num > 0:
    listanums.append(num % 10)
    num = num // 10

if listanums[0] == 0:
        listanums.pop(0) 

for x in range(len(listanums)):
        print(listanums[x], end="")

