def repeated_letter(s):
    for x in s:
        if s.count(x) > 1:
            return x
    return None

print(repeated_letter('tweet'))