#(Temperature in degrees Fahrenheit (°F) - 32) * 5/9.
#ºC + 32 * 9/5
def to_celsius(t):
    return [round((x-32)*(5/9),1) for x in t]