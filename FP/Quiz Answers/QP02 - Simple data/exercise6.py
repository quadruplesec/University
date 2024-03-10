principal_amount = int(input())                 #P
interest_rate = float(input())                  #r
interest_frequency = int(input())               #n
number_years = 2                                #t

compound_interest = principal_amount * (1 + (interest_rate/interest_frequency))**(interest_frequency*number_years)
print(round(compound_interest, 3))
