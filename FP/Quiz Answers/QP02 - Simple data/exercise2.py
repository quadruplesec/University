n = int(input("Input number: "))

digit4 = n // 1000                                          #obtais the 4th digit of the input number
digit3 = (n - 1000*digit4) // 100                           #obtains the 3rd digit of the input number
digit2 = (n - 1000*digit4 - 100*digit3) // 10               #obtains the 2nd digit of the input number
digit1 = (n - 1000*digit4 - 100*digit3 - 10*digit2)         #obtains the 1st digit of the input number

print(digit4 * 1000)                                        
print(digit3 * 100)
print(digit2 * 10)
print(digit1)