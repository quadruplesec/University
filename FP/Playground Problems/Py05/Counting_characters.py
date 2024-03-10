def count_chars(a_string):
    alpha = 0
    digit = 0
    special = 0

    for x in a_string:
        print(x)
        if x.isalpha() == True:
            alpha += 1
        elif x.isdigit() == True:
            digit += 1
        else:
            special += 1
    return (alpha, digit, special)

print(count_chars('Str1nG$'))