def square_odds(values):
    odds = [str(int(x)**2) for x in values.split(",") if int(x)%2!=0]
    return ",".join(odds)
