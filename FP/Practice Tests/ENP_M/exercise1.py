#date format: (dd, mm, yyyy)
def days_until_christmas(date:tuple):
    days_of_month = {
    1: 31,
    2: 28,
    3: 31,
    4: 30,
    5: 31,
    6: 30,
    7: 31,
    8: 31,
    9: 30,
    10: 31,
    11: 30,
    12: 31}
    day, month, year = date

    day_counter = 0

    if month == 12:
        if day <= 25:
            return 25 - day
        elif day > 25:
            return day_counter + (31-day) + 359 #days from jan1 to dec25
    
    if month < 12:
        while month != 12:
            day_counter += days_of_month[month]
            month += 1
        if day < 25:
            return day_counter + (25 - day)
        else:
            return day_counter - (day - 25)
        