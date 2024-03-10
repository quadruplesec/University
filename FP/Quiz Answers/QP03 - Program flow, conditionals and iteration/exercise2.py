hr = int(input())
min = int(input())

if hr >= 24 or min >= 60:
    print("INVALID DATE FORMAT")
    exit()

#Decides if AM or PM should be used and turns 24 Hour format PM hours into 12 Hour format
am_or_pm = ""
if hr < 12:
    am_or_pm = "am"
    if hr == 0:
        hr = 12
else:
    am_or_pm = "pm"
    if hr > 12:
        hr -= 12

if 0 < min < 10:
    print(f"{hr}:0{min} {am_or_pm}")
elif min == 0:
    print(f"{hr} {am_or_pm}")
else:
    print(f"{hr}:{min} {am_or_pm}")