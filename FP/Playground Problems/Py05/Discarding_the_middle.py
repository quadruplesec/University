def discard_middle(s):
    if len(s) <= 3:
        return ""
    nu_sting = s[:2] + s[-2:]

    return nu_sting

print(discard_middle('string'))